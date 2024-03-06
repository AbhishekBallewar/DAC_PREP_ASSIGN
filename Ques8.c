#include<stdio.h>
struct Student  accept();
void display();
struct Student
{
    char Studentname[50];
    int rn;
    int marks;
    
};
int main(void){
 struct Student s1,s2;
s1 = accept();
   
 display(s1);
 
return 0;
}
struct Student accept(){
   struct Student temp;
   printf("enter name\n");
   scanf("%s",temp.Studentname);
   printf("enter rolln\n");
   scanf("%d",&temp.rn);
   printf("enter marks\n");
   scanf("%d",&temp.marks);
   return temp;
}
 void display(struct Student a){
   printf("name : %s\nroll no : %d\nmarks : %d",a.Studentname,a.rn,a.marks);
 
 }