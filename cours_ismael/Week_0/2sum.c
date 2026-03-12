#include <stdio.h>
#include <stdlib.h>

int *two_sum(int *numbers, int numbersSize, int target, int *returnSize)
{

    int *resultat;
    int left;
    int right;

    left = 0;
    right = 1;
    resultat = malloc(sizeof(*returnSize)); // Possibilite de malloc a partir d'un parametre + un tableau de int 

    if (!numbers || !*numbers)
        return (0);

    while (left <= numbersSize)
    {
        while (right <= numbersSize)
        {
            if ((numbers[left] + numbers[right]) == target)
            {
                resultat[0] = left + 1;
                resultat[1] = right + 1;
                return (resultat);
            }
            right++;
        }
        left++;
        right = 1;
    }
    return (0);

}
int main()
{
    int nums[] = {10, 1, 4, 3};
    int returnSize;
    int *result;
    int i = 0;

    result = two_sum(nums, 4, 5, &returnSize);

    while (i < 2)
    {
        printf("%d\n", result[i]);
        i++;
    }

    free(result);
}