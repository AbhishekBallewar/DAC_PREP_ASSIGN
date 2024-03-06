#include<stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int i; 
int num = atoi(argv[1]);
for(i=1;i<11;i++)
{
  printf("\n%d",num*i);
}

return 0;
}