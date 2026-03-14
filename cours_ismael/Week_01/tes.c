#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void fil_tab(int *tab, int size)
{
    int i = 0;

    while (i < size)
    {
        tab[i] = 0;
        i++;
    }
}

int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) 
{
    int i;
    int left;
    int right;
    int *resultat;

    resultat = malloc(sizeof(int) * numsSize);
    i = 0;
    left = 0;
    right = 1;

    fil_tab(resultat, numsSize);
    while (i <= 6)
    {
        i++;
    }

    i = 0;
    while (i < numsSize)
    {
        if (nums[i] % 2 == 0)
        {
            resultat[left] = nums[i];
            left += 2;
        }
        else if (!(nums[i] % 2 == 0))
        {
            resultat[right] = nums[i];
            right += 2;
        }
        i++;
    }

    return (resultat);
}

int main()
{
    int nums[6] = {2, 3, 4, 5, 2, 7};
    int returnSize;
    int *resultat;
    int i = 0;

    resultat = sortArrayByParityII(nums, 6, &returnSize);

    while (i < 6)
    {
        printf("%d\n", resultat[i]);
        i++;
    }
    free (resultat);
}