#include<stdio.h>
int main()
{
    int row,col,i,j,matrix[20][20],transpose[20][20];
    printf("enter the number of rows and columns of a matrix :\n");
    scanf("%d%d",&row,&col);
    printf("enter elements of the matrix :\n");
    for(i=0;i<row; i++)
     for(j=0;j<col; j++)
       scanf("%d",&matrix[i][j]);

     for(i=0;i<row;i++)
       for(j=0;j<col;j++)
        transpose[j][i]=matrix[i][j];
    printf("transpose of the matrix:\n");
    for(i=0;i<col;i++)
    {
      for(j=0;j<row;j++)
      printf("%d\t",transpose[i][j]);
      printf("\n");
    }
      return 0;
}
