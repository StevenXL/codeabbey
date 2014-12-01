#include <stdio.h>
#include <stdlib.h>

#define INT_NUM 300

int main(void)
{
    // open file
    FILE* inFile;
    inFile = fopen("int_array.txt", "r");

    // create array of 300 integers initialized to all 0
    int array[300] = {0};

    int ii = 0;
    for (ii = 0; ii < INT_NUM; ii++)
    {
        fscanf(inFile, "%d", &array[ii]);
    }

    int max = array[0];
    int min = array[0];

    // search through array for a maximum and update our data
    for (ii = 1; ii < INT_NUM; ii++)
    {
        if (array[ii] > max)
        {
            max = array[ii];
        }
    }

    // search through array for a minimium and update our data
    for (ii = 1; ii < INT_NUM; ii++)
    {
        if (array[ii] < min)
        {
            min = array[ii];
        }
    }

    printf("%d %d\n", max, min);

    return 0;
}
