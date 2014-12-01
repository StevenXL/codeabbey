#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // open file in read mode
    FILE* inFile = fopen("min_of_two.txt", "r");

    // check to make sure file was successfully opened
    if (inFile == NULL)
    {
        printf("Unable to open file.\n");

        return 1;
    }

    // store the first number, which will be used in the rest of the program
    int num_pairs = 0;

    fscanf(inFile, "%d", &num_pairs); 

    // create two arrays, one to hold number pairs and the second to hold
    // answers

    int* pairsArray;
    pairsArray = malloc (num_pairs * 2 * sizeof(int));

    int* answersArray;
    answersArray = malloc (num_pairs * sizeof(int));
    
    // read in pairs from the file
    int i = 0;
    for (i = 0; i < (num_pairs * 2); i = i + 2) 
    {
        fscanf(inFile, "%d %d", &pairsArray[i], &pairsArray[i + 1]);
    }

    // sum each pair
    int j = 0;
    int k = 0;
    for (j = 0, k = 0; j < (num_pairs * 2); j = j + 2, k++)
    {
        int min = pairsArray[j];

        if (pairsArray[j] > pairsArray[j + 1])
        {
            min = pairsArray[j + 1];
        }

        answersArray[k] = min;
    }

    // print out our answers
    int ll = 0;
    for (ll = 0; ll < num_pairs; ll++)
    {
        if (ll == (num_pairs - 1))
        {
            printf("%d\n", answersArray[ll]);
        }
        else
        {
            printf("%d ", answersArray[ll]);
        }
    }

    return 0;
}
