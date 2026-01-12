/* 
    P6: Declare a pointer to function accepting 
		(1)an int
		(2) a pointer to function accepting int and returning void  
		returning 
		a pointer to function accepting int and returning void
*/

#include <stdio.h> 
#include <stdlib.h> 

void (*cpa_func(int, void(*)(int)))(int);  

void first_func(int); 
void second_func(int); 

int main(void){
    void (*return_pfn)(int); 
    void (*(*pfn)(int, void(*)(int)))(int); 

    puts("Exchage source code with pointer to function"); 
    pfn = cpa_func; 

    return_pfn = pfn(100, first_func); 
    if(return_pfn == NULL)
        puts("No previous saved pfn because it was the first call to cpa_func");

    return_pfn = pfn(200, second_func);
    if(return_pfn != NULL)  
        return_pfn(1000); 

    return_pfn = pfn(300, NULL); 
    if(return_pfn != NULL)
        return_pfn(2000); 

    return (0); 
}

void (*cpa_func(int num, void (*new_pfn)(int)))(int){
    static void (*saved_pfn)(int) = NULL; 
    void (*old_pfn)(int); 

    printf("In cpa_func():num = %d\n", num); 

    old_pfn = saved_pfn; 
    saved_pfn = new_pfn; 

    return (old_pfn); 
}

void first_func(int n){
    printf("In first_func:n:%d\n", n); 

}
void second_func(int n){
    printf("In second_func:n:%d\n", n); 
}