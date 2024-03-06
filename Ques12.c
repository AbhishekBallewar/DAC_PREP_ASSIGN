#include <stdio.h>
#include<string.h>
void Rev (char*a){
    int i =0;
    int j = (strlen(a)-1);
     while (i<=j){
        char temp;
        temp=a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
     }
}
int main(void){
    
    char str[15];
    printf("enter the string\n");
    gets(str);
    Rev(str);
    puts(str);
    return 0;
}