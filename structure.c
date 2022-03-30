#include<stdio.h>
struct emp{
int no;
char name[20];
float salary;
};
int main(){
int j;
struct emp e;
printf("Enter Employee detail \n");
printf("Emp No. :-\t");
scanf("%d",&e.no);
printf("Emp Name :-\t");
scanf("%s",&e.name);
printf("Emp salary :-\t");
scanf("%f",&e.salary);
printf("\n \n");
printf("Employee details are \n \n Employee name:- \t %s \n Employee number:- \t %d \n Employee salary:- \t %f",e.name,e.no,e.salary);
}
