#include <stdio.h>

#define ROWS 3
#define COLS 3
#define UNKNOWN -1 // Special value for unknown elements

int main()
{
    int arr[ROWS][COLS];
    int i, j, k = 1;

    // Taking input from the user
    printf("Enter elements for a %dx%d array:\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n The 2D array is:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (arr[i][j] == UNKNOWN)
            {
                printf(" Ue");
            }
            else
            {
                printf("%3d", arr[i][j]);
            }
        }
        printf("\n");
    }

    // Applying the equations
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            // Apply equation 1: Pij + Pji = 0
            if (arr[i][j] == UNKNOWN && arr[j][i] != UNKNOWN)
            {
                arr[i][j] = -arr[j][i];
            }
            else if (arr[j][i] == UNKNOWN && arr[i][j] != UNKNOWN)
            {
                arr[j][i] = -arr[i][j];
            }

            // Apply equation 2: Pij = Pik + Pkj
            if (arr[i][j] == UNKNOWN)
            {
                for (k = 0; k < COLS; k++)
                {
                    if (arr[i][k] != UNKNOWN && arr[k][j] != UNKNOWN)
                    {
                        arr[i][j] = arr[i][k] + arr[k][j];
                        break;
                    }
                }
            }
        }
    }

    // Displaying the updated array
    printf("\nArray after evaluating unknown elements:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}