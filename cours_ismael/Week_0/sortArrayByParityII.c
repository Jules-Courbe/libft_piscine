/*Étant donné un tableau d'entiers nums, la moitié des entiers de ce tableau nums sont impairs et l'autre moitié sont pairs .

Triez le tableau de sorte que chaque fois nums[i]que est impair, i soit impair , et chaque fois nums[i] est pair, i soit pair .

Retournez tout tableau de réponses qui satisfait cette condition .

*/

int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) 
{
    int i;

    i = 0;

    //probleme de comprehension avec int* returnSize pour moi de base c est le tableau a retourner mais au final c est la taille du tableau mais nou
    // avons deja numsSize pour cela. Du coup je retourne dans ma fonction returnSize ? Mais pourtant je dois retourner un tableau pas la taille 
    
    while (nums[i] != numsSize)
    {
        if (nums[i] % 2 = 0)
        {

        }
    }


}

int main()
{
    int *nums = {3, 5, 7, 2, 4, 6}
    printf("%ls\n", sortArrayByParityII(nums, 6,  ));
}