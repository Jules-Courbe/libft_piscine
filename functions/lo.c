#include <stdio.h>

int main()
{
    int i = 0;
    char ptr[] = "hello"; 
    char ptr1[] = "hello"; 


    while(ptr[i] && ptr1[i])
    {

        printf("%p\n", &ptr[i]);
        printf("%p\n", &ptr1[i]);
        i++;
    }
}