#include <stdio.h>

int invert_number(int n, int rev)
{
    if (n == 0)
        return (rev);
    return (invert_number(n / 10, rev * 10 + n % 10));
}


// 123 rev = 0
// 12 rev = 3 
// 1 rev = 32
// 0 = 321
// 
int main()
{
    printf("%d\n", invert_number(123, 0));
}