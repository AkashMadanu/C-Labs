#include<stdio.h>

int main()

{

int n;
printf("Enter the number \n");
scanf("%d",&n);

printf("Fibonacci Series \n");   

Fibonacci(n);

    return 0;
}

void Fibonacci(int n)
{
    static int n1 = 0,n2=1,n3;
  
        n3 = n1+n2;
        n1=n2;
        n2=n3;
        printf("%d ",n3);
        if(n>0)
  Fibonacci(n-1);
    
}