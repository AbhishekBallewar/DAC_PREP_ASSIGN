#include<stdio.h>
void accept();
void display();
void setsal();
struct Employee
{
    char Firstname[50];
    char Lastname[50];
    double Salary;
    
};
int main(void){
 struct Employee e1,e2;
 accept(&e1);
 setsal(&e1,345.00);
 display(&e1);
 
return 0;
}
 void accept(struct Employee *temp){
   
   printf("enter firstname\n");
   scanf("%s",temp->Firstname);
   printf("enter Lastname\n");
   scanf("%s",&temp->Lastname);
   printf("enter Salary\n");
   scanf("%lf",&temp->Salary);
   return ;
}
 void display(struct Employee *a){
   printf("firstname : %s\nlastname :%s \nSalary : %lf",a->Firstname,a->Lastname,a->Salary);
 
 }
 void setsal(struct Employee *e, double sal){
     e->Salary = sal;
 }