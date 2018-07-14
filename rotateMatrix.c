#include <stdio.h>
#include<stdlib.h>
#define R 4
#define C 4

// The Matrix is Rotated Clockwise

void rotatematrix(int m, int n, int mat[R][C])
{
    int row = 0, col = 0;
    int prev, curr;
 
    /*
       row - Staring row index
       m - ending row index
       col - starting column index
       n - ending column index
       i - iterator
    */
    while (row < m && col < n)
    {
 
        if (row + 1 == m || col + 1 == n)
            break;
 
        
        prev = mat[row + 1][col];
        
         /* Move elements of first row from the remaining rows */
        for (int i = col; i < n; i++)
        {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;
 
        /* Move elements of last column from the remaining columns */
        for (int i = row; i < m; i++)
        {
            curr = mat[i][n-1];
            mat[i][n-1] = prev;
            prev = curr;
        }
        n--;
 
         /* Move elements of last row from the remaining rows */
        if (row < m)
        {
            for (int i = n-1; i >= col; i--)
            {
                curr = mat[m-1][i];
                mat[m-1][i] = prev;
                prev = curr;
            }
        }
        m--;
 
        /* Move elements of first column from the remaining rows */
        if (col < n)
        {
            for (int i = m-1; i >= row; i--)
            {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
 
    // Print rotated matrix
    for (int i=0; i<R; i++)
    {
        for (int j=0; j<C; j++)
          printf("%d\t",mat[i][j]);
        printf("\n");
    }
}
 
int main()
{
    
    int a[R][C] = { {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}  };
 printf("\n The Matrix Is: \n");
int r=4,c=4,i,j;
for(i=0;i<R;i++)
{
for(j=0;j<C;j++)
{
printf("%d\t",a[i][j]);

}
printf("\n");
}
    
printf("\n");
printf("\n");
printf("\n Rotated Matrix Is: \n");
 rotatematrix(R, C, a);
    return 0;
}
