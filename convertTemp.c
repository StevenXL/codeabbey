#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* Finding the equation of a line when you know two points
 * Far = ( 9 / 5)Cel + 32 
 * Cel = (Far - 32) * 5 / 9
 */

int main(void)
{
    // open file
    FILE* inFile = fopen("convertTemp.txt", "r");

    // read and store first digit
    int elements;
    fscanf(inFile, "%d", &elements);

    // create an int array of size elements
    int* origTemps;
    origTemps = malloc(elements * sizeof(int));

    // read elements and story in array
    int ii;
    for (ii = 0; ii < elements; ii++)
    {
        fscanf(inFile, "%d", &origTemps[ii]);
    }

    // create an int array to hold our answers
    int* answers;
    answers = malloc(elements * sizeof(int));

    // convert from farenheit to celcius and store in answers array
    int jj;

    for (jj = 0; jj < elements; jj++)
    {
        float converted = ( (float) origTemps[jj] - 32) * 5 / 9;
        int int_convert = (int) converted;

        if ( converted > 0 )
        {
            if ( (fabsf(converted) - abs(int_convert)) >= 0.5)
            {
                answers[jj] = abs(int_convert) + 1;

            }
            else
            {
                answers[jj] = abs(int_convert); 
            }
        }
        else
        {
            if ( (fabsf(converted) - abs(int_convert)) >= 0.5)
            {
                answers[jj] = (abs(int_convert) + 1) * -1; 
            }
            else
            {
                answers[jj] = (abs(int_convert)) * -1; 
            }
        }
    }

    // print out answer
    int kk; 
    for (kk = 0; kk < elements; kk++)
    {
        if (kk == (elements - 1))
        {
            printf("%d\n", answers[kk]);
        }
        else
        {
            printf("%d ", answers[kk]);
        }
    }

    return 0;
}
