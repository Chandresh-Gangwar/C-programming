#include<stdio.h>
int main()
{
int x;
float y;
scanf("%d",&x);
scanf("%f",&y);
 float totalAmount = x + 0.5;
if(x%5==0 && (totalAmount<y))
  printf("%.2f",(y-totalAmount ));
else
printf("%.2f",y);
return 0;
}