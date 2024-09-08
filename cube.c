#include <stdio.h>

void cube(int (*arr)[100], int r, int c)
{
    printf("Cube of all element:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int cube = arr[i][j] * arr[i][j] * arr[i][j];
            printf("%d\t", cube);
        }
        printf("\n");
    }
}

int main()
{
    int r, c;

    printf("Enter the number of rows and columns for the 2D array: ");
    scanf("%d %d", &r, &c);

    int array[100][100];

    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {   
            printf("a[%d][%d]",i,j);
            scanf("%d", &array[i][j]);
        }
    }

    cube(array, r, c);

    return 0;
}
