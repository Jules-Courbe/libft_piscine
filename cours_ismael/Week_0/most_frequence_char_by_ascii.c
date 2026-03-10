#include <stdio.h>

char most_frequent_char(const char *str)
{
    int count[256];
    int i;
    int max = 0;
    char best_char;

    i = 0;
    
    while (i < 256)
    {
        count[i] = 0;
        i++;
    }
    while (str[i])
    {
        count[str[i] - '0'] += 1;
        i++;
    }

    i =0;
    while (count[i])
    {
        if (max < count[i])
        {
            max = count[i];
            best_char = i;
        }
        i++;
    }

    return (best_char);    
}

int main()
{

}