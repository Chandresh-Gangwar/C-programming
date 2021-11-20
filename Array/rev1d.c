#include <stdio.h>  
   
int main()  
{   int n,i,length=10;
    printf("Enter size of array: "); 
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in array: ");
    scanf("%d", &arr[i]);  
    printf("Original array: \n");  
    for (i = 0; i < length; i++) 
    {   
        printf("%d ", arr[i]);   
    }    
    printf("\n");  
    printf("Array in reverse order: \n");  
    for (int i=length-1; i>=0; i--)
    {   
        printf("%d ", arr[i]);   
    }   
    return 0;  
}  