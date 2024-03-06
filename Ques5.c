#include <stdio.h>
char acceptchar(){
    char a ;
    printf("enter char\n");
    scanf("%c",&a);
    return a;
}
void checkchar(char b){
    if ((b>47)&&(b<57)){
           printf("Char is a number");
    }
     else if ((b>64)&&(b<91)){
           printf("Char is a Uppercase character");
    }
     else if ((b>96)&&(b<123)){
           printf("Char is a Lowercase character");
    }
     else {
           printf("Char is a special symbol");
    }
}
int main (void)
{
 char c = acceptchar();
 checkchar(c);
}