#include <stdio.h>
int Factorial(int a){
   int temp = 1;
     if (a==0 || a==1){
         return 1;
    }
 
     while(a>1)
    {
       temp=temp*a;
       a--;
       
    }
   
   return temp;
}
int main(void)
{
    int a ;
    printf("Enter the number\n");
    scanf("%d",&a);
    if (a<0){
      printf("invalid input");
      return 0;
    }
    int fact = Factorial(a);
    printf("Factorial = %d",fact);
    
}
