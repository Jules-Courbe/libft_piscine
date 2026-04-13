#include <stdio.h>

int count_char(char *str, char c)
{
    if (*str == '\0')
        return (0);
    if (*str != c)
        return (count_char(str + 1, c));
    return (1 + count_char(str + 1, c));
}
// Premier call : abc
// 2 call : bc 
// 3 call : c 
// '\0'
int main()
{
    printf("%d\n", count_char("abcccc", 'c'));
}