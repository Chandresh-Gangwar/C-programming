
 #include<stdio.h>
 int oddeven(int );
 int main()
{
   int n;
   printf("\nEnter the number  =>");
   scanf("%d",&n);

    int a = oddeven(n); 

(a == 0 )?printf("Number is ODD "):printf("Number is Even"); 
    
    return 0; 
}
     int oddeven(int x)
     { 
       return (x%2 == 0); 
}
