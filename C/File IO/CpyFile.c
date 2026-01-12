#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>

void my_free(char *source, char*target);
int main(int argc, char**argv)
{
    if(argc != 3)
    {
        printf("%s <source file path> <target file path>\n",argv[0]);
        exit(EXIT_FAILURE);
    }

    char *source_file_path = malloc(strlen(argv[1])+1);
    char *target_file_path = malloc(strlen(argv[2])+1);

    int source_fd = open(source_file_path,O_RDONLY);
    if(source_fd < 0)
    {
        perror("Open system call error");
        my_free(source_file_path,target_file_path);
        exit(EXIT_FAILURE);
    }

    int target_fd = creat(target_file_path, 0744);
    if(target_fd < 0)
    {
        perror("creat system call error");
        my_free(source_file_path,target_file_path);
        close(source_fd);
        exit(EXIT_FAILURE);
    }

    char buf[BUFSIZ] = {0};
    ssize_t cnt = 0;
    while((cnt = read(source_fd,buf,BUFSIZ)) > 0)
    {
        ssize_t wr_cnt = write(target_fd,buf,cnt);
        if(cnt<0)
        {
            perror("write sys call error");
            close(source_fd);
            close(target_fd);
            exit(EXIT_FAILURE);
        }
    }
    if(cnt < 0)
    {
        perror("read sys call error");
    }
    close(source_fd);
    close(target_fd);
}
void my_free(char *source, char*target)
{
    free(source);
    free(target);
}
