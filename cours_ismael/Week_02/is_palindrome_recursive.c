#include <stdio.h>
#include <string.h>

int is_palindrome_recursive(char *str, int left, int right)
{
    if (left >= right)
    {
        return (1);
    }
    if (str[left] != str[right])
    {
        return (0);
    }
    is_palindrome_recursive(str, left++, right--);
    // la call stack de str[left] va etre liberer par le dernier caractere
    // donc si celui la est '\0' == palindrom 
    
}

int main()
{
    char *str;
    str = "radar";
    int left = 0;
    int right = strlen(str);
    printf("left : %d, right : %d\n", left, right);
    printf("%d\n", is_palindrome_recursive(str, left, right));
}