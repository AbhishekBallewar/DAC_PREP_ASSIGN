#include<stdio.h>
int octal(int num){
   
    if(num/8==0){
        printf("%d",num);
        return 0;
    }
   
    printf("%d",num/8);
    octal(num%8);
    return 0;
}
int hexa(int num){
   
    if(num/16==0){
        printf("%d",num);
        return 0;
    }
   
    printf("%d",num/16);
    hexa(num%16);
    return 0;
}
int binary(int num){
   
    if(num==0){
        printf("%d",num);
        return 0;
    }
   
    
    binary(num/2);
    printf("%d",num%2);
    return 0;
}
int main(void) {
    int no;
printf("Enter the no\n");
scanf("%d",&no);
printf("octal = ");
octal(no);
printf("\n");
printf("hexadecimal = ");
hexa(no);
printf("\n");
printf("binary = ");
binary(no);
return 0;
}