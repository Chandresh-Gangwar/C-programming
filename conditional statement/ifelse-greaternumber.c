#include <stdio.h>
int main()
 {
    int a,b;
    printf("Enter two integers=");
    scanf("%d %d", &a,&b);

    if(a > b)
    {
        printf("%d is larger number",a);
        
    }
    else 
    {
      printf("%d is larger number",b);
     
    }
    return 0;
 }