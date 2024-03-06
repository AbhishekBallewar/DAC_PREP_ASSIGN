#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
 int i=1;
 int j=i+1;
 while(j< argc){
    if(atoi(argv[j])<=atoi(argv[i])){
        j++;
    }
    else{
        i++;
    }
   
 }
 printf("%d",atoi(argv[i]));
}