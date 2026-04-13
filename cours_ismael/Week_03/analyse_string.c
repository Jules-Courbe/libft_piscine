#include <stdio.h>

void analyze_string(char *str, int *maj, int *min, int *chiffres, int *autres)
{
    int i;
    
    i = 0;

    if (!str)
        printf("0");
        
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            *chiffres += 1;
        else if (str[i] >= 'a' && str[i] <= 'z')
            *min += 1;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            *maj += 1;
        else
            *autres += 1;
        
        i++;
    }

    printf("maj : %d\n", *maj);
    printf("min : %d\n", *min);
    printf("chiffres : %d\n", *chiffres);
    printf("autres : %d\n", *autres);
}

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    analyze_string("Ab!!!#3!", &a, &b, &c, &d); // un pointeur est demander et un pointeur c est une adresse d une varibale
    
}