#include <stdio.h>
#include <string.h>
#include <unistd.h>

void reverseString(char *s, int sSize)
{
    int i;
    int j;

    j = 0;
    i = strlen(s);

    while (j != sSize)
    {
        write(1, &s[i], 1);
        i--;
        j++;
    }

}

int main()
{
    reverseString("Jules", 5);
}