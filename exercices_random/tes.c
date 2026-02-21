#include <stdio.h>

int main()
{
	int n = 5678;
	int len = 0;


	while (n != 0)
    {
        n = (n / 16);
        len++;
    }
	printf("%d", len);

}