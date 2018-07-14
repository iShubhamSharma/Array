#include<stdio.h>
#include<stdlib.h>
#define R 4
#define C 4

void transpose(int arr[R][C])
    {
        for (int i = 0; i < R; i++)
            for (int j = i; j < C; j++)
            {  
                int temp = arr[j][i];
                arr[j][i] = arr[i][j];
                arr[i][j] = temp;
            }
    }

void reverseColumns(int arr[R][C])
    {
        for (int i = 0; i < R; i++)
            for (int j = 0,  k = C - 1; j < k; j++, k--)
            {  
                int temp = arr[j][i];
                arr[j][i] = arr[k][i];
                arr[k][i] = temp;
            }
    }

void printMatrix(int arr[R][C])
    {
	for(int i=0;i < R;i++)
	{
	  for(int j=0; j < C;j++)
	   {
		printf("%d\t",arr[i][j]);
	   }
	printf("\n");
	}
    }

void rotateMatrixBy90(int arr[R][C])
  {
	transpose(arr);
	reverseColumns(arr);
  }

int main()
{
    int arr[R][C]= { {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    printf("\n Matrix is: \n");
    printMatrix(arr);
    rotateMatrixBy90(arr);
    printf("\n Matrix Rotated By 90 is: \n");
    printMatrix(arr);
    return 0;
}
