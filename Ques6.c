#include<stdio.h>
void accept(int ptr[3][3])
{
int i,j;
printf("Enter the elements\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    scanf("%d",&ptr[i][j]);
    }
}

return;
}
void display(int ptr[3][3])
{
int i,j;
printf("Elements are\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("%d \t",ptr[i][j]);
    }
    printf("\n");
}
}
void mul(int a[3][3],int b[3][3],int c[3][3])
{
int i,j;

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    c[i][j]=a[i][j]*b[i][j];
    }
    
}
}

int main(void){
    int a[3][3],b[3][3],c[3][3];
    accept(a);
    
    accept(b);
    mul(a,b,c);
    display(c);
}