int my_filter(const struct dirent* p_dirent){
    /* return 1 if p_dirent->d_name ends with .c 
    else return 0 */
}

int my_compare(const struct dirent** pp1, const struct dirent** pp2){
    /* 
        according to comparison criterion 
        return 1, -1, or 0
    */
}

main(){
    struct dirent** file_names = 0; 
    int i; 
    scandir("/home/yogeshwar/src", &file_names, my_filter, my_compare)

    for(i = 0; file_names[i] != 0; ++i)
        file_names[i]->d_name 

    for(i = 0; file_names[i] != 0; ++i)
        free(file_names[i]); 

    free(file_names); 
}