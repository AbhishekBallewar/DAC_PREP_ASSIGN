#include<stdio.h>
#include<string.h>
int main()
{
char *arr[] ={"Sunbeam","Pune","sunbeam","pune","sunbeam","Dac","pune","course"};
    int i ,j;
     for(i=0;i<8;i++){
        for(j=i+1;j<8;j++){
            if(!strcmp(arr[i],arr[j])){
                printf("\nDuplicate string is %s at index %d",arr[j],j);
            }
        }
     }
}