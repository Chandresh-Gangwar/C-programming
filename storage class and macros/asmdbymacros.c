#include<stdio.h>
#define plus +
#define sub -
#define mul *
#define div /
int main()
{
    int a,b; float s;
    int i,n;

    printf("Enter a value for A => "); scanf("%d",&a);
    printf("Enter a value for B => "); scanf("%d",&b);

      printf("For addition = 1\nFOR subtraction =2\nFOR multiplication =3\nFor divion = 4\n chosse number==>"); 
      scanf("%d",&n);       

     switch(n)
     {
        case 1: printf("add=%d + %d = %d",a,b,a plus b); break;
        case 2: printf("sub=%d - %d = %d",a,b,a sub b); break;
        case 3: printf("mul=%d X %d = %d",a,b,a mul b); break;
        case 4: printf("div=%d / %d = %f",a,b,s=(a div b)); break;
          default: printf("there is no case");
     }   
return 0;
}
