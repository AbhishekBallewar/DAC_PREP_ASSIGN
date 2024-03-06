#include <stdio.h>
#include<string.h>
void palindrome (char*a){
    int i =0;
    int j = (strlen(a)-1);
     while (i<=j){
        if(a[i]==a[j])
        {
        i++;
        j--;
        }
        else {
            printf("string is not palindrome");
            return ;
        }


     }
     printf("string is palindrome");
}
int main(void){
    
    char str[15];
    printf("enter the string\n");
    gets(str);
    palindrome(str);
    
    return 0;
}