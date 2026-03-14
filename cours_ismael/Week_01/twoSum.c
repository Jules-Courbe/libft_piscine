#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *numbers, int numbersSize, int target, int *returnSize)
{
    int i;
    int j;
    int count;
    int *resultat;

    if (!numbers)
        return (0);

    resultat = malloc(sizeof(*resultat) * 2);

    count = 0;
    i = 0;
    j = 1;

    while (i < numbersSize)
    {
        while (j <= numbersSize && j != i)
        {
            count = numbers[i] + numbers[j];
            if (count == target)
            {
                resultat[0] = i + 1;
                resultat[1] = j + 1; 
                *returnSize = 2;
                return (resultat);
            }
            j++;
        }
        j = 1;
        i++;
    }
    return (0);
}

int main()
{
    int nums[] = {2, 5, 5, 11};
    int returnSize;
    int *result;
    int i = 0;

    result = twoSum(nums, 4, 10, &returnSize);

    while (i < 2)
    {
        printf("%d\n", result[i]);
        i++;
    }

    free(result);
}
