#include<stdio.h>
#include<stdlib.h> 
int main()
{
    int a[5][5],b[5][5],sum[5][5],i,j,r1,c1,r2,c2;
    printf("Enter no of rows and columns of first matrix=");
    scanf("%d %d",&r1,&c1);
    printf("Enter no of rows and columns of second matrix=");
    scanf("%d %d",&r2,&c2);
    if(r1!=r2||c1!=c2)
    {
        printf("\nmatrix order not same");
        exit(0);
    }
    printf("Enter %d elements of first matrix=",r1*c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter %d elements of second matrix=",r2*c2);
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nfirst matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
         printf("%3d",a[i][j]);
        }
     printf("\n");
    }
    printf("\nsecond matrix\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
         printf("%3d",b[i][j]);
        }
     printf("\n");
    }
    printf("\n addition of matrixs=\n");
    for(i=0;i<r1;i++)
    {
        for (j=0;j<c1;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%3d",sum[i][j]);
        }
        printf("\n");
    }  return 0;
}
