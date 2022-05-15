#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, sum;
    int a[4][3], b[3][2], result[4][2];

    printf("please enter the details about the first matrix\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value of %d %d of the first matrix\n", i ,j);
           scanf("%d", &a[i][j]);
        }
    }

    printf("enter the details for your second matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the details  for your second matrix\n\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}





