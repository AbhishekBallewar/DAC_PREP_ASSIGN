#include <stdio.h>
void Fibonacci(int num)
{
int b=0;
int c = 1;
int d,i;
if (num==1){
    printf("Sequence = %d ",b);
    return;
}
printf("Sequence = %d ",b);
printf("%d ",c);
for(i=1;i<num-1;i++)
{
  d=b+c;
  printf("%d ",d);
  b=c;
  c=d;
}

}
int main(void)
{
  int a ;
  printf("Enter the no of sequence\n");
  scanf("%d",&a);
   if (a<=0){
      printf("invalid input");
      return 0;
    }
  
   Fibonacci(a);
  return 0;
}