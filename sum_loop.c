#include <stdio.h>

int main(void)
{
    printf("Please enter the number of integers that will be summed: ");

    int num_ints = NULL;

    scanf("%d", &num_ints);

    int intArray[num_ints];

    int sum = NULL;

    int scanf_sum = NULL;

    int i = NULL;

    for (i = 0; i < num_ints; i++)
    {
        printf("Please enter integer %d: ", i + 1);
        
        scanf_sum = scanf_sum + scanf("%d", &intArray[i]);

    }

    if (scanf_sum != num_ints)
    {
        printf("You did not enter %d integers!\n", num_ints); 

        return 1;
    }
    else
    {
        int j;

        for (j = 0; j < num_ints; j++)
        {
            sum = sum + intArray[j];
        }
    }
    
    printf("Total sum: %d\n", sum);

    return 0;
}
