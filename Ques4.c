#include <stdio.h>

int main(void)
{
  int sci,mat,eng,mar,hin;
  printf("enter marks for Science\n");
  scanf("%d",&sci);
  printf("enter marks for Maths\n");
  scanf("%d",&mat);
  printf("enter marks for English\n");
  scanf("%d",&eng);
  printf("enter marks for Marathi\n");
  scanf("%d",&mar);
  printf("enter marks for Hindi\n");
  scanf("%d",&hin);
  if((sci<0||sci>20)||(mat<0||mat>20)||(eng<0||eng>20)||(mar<0||mar>20)||(hin<0||hin>20)){
    printf("Invalid marks inputed Marks should be between 0 and 20");
  }
  int total = sci+mat+eng+mar+hin;
  if(total>=90){
     printf ("Grade is Ex");
  }
  else if(total>=80){
    printf ("Grade is A");
  }
  else if(total>=70){
    printf ("Grade is B");
  }
  else if(total>=60){
    printf ("Grade is C");
  }
  else{
     printf ("Grade is F");
  }
}
