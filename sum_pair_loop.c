#include <stdio.h>

int main(void)
{
    // open file in read mode
    /*FILE* inFile = fopen("sum_pair_loop.txt", "r");*/
    FILE* inFile = fopen("test.txt", "r");

    // check to make sure file was successfully opened
    if (inFile == NULL)
    {
        printf("Unable to open file.\n");

        return 1;
    }

    // store the first number, which will be used in the rest of the program
    int num_pairs = NULL;
    fscanf(inFile, "%d", &num_pairs); 

    // create two arrays, one to hold number pairs and the second to hold
    // answers
    int intArray[num_pairs * 2];
    int arrayAnswers[num_pairs];

    // read in pairs from the file
    int i = NULL;
    for (i = 0; i < num_pairs; i++)
    {
        fscanf(inFile, "%d %d", &intArray[i], &intArray[i + 1]);
    }

    // sum each pair
    int j = NULL;
    int k = NULL;
    for (j = 0, k = 0; j < num_pairs; j = j + 2, k++)
    {
        int sum = NULL;
        sum = intArray[j] + intArray[j+1];
        arrayAnswers[k] = sum;
    }

    // print out our answers
    int ll = 0;
    for (ll = 0; ll < num_pairs; ll++)
    {
        if (ll == (num_pairs - 1))
        {
            printf("%d\n", arrayAnswers[ll]);
        }
        else
        {
            printf("%d ", arrayAnswers[ll]);
        }
    }

    return 0;
}
