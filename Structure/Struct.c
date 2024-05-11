#include<stdio.h>
struct employee
{
    char date_of_joining[30];
    int salary;
    char designation[30];
    char name[30];
};


int main () {
    struct employee e1={"6/12/23",50000,"Cashier","XYZ"};
    struct employee e2={"6/4/23",60000,"Manager","ABC"};
    struct employee e3={"6/1/23",100000,"Senior manager","PQR"};

    printf("Salary of employee 1 is %d\n",e1.salary);
    printf("Salary of employee 2 is %d\n",e2.salary);
    printf("Salary of employee 3 is %d\n",e3.salary);
    
    printf("Date of joining of employee 1 is %s\n",e1.date_of_joining);
    printf("Date of joining of employee 2 is %s\n",e2.date_of_joining);
    printf("Date of joining of employee 3 is %s\n",e3.date_of_joining);

    printf("The designation of employee 1 is %s\n",e1.designation);
    printf("The designation of employee 2 is %s\n",e2.designation);
    printf("The designation of employee 3 is %s\n",e3.designation);

    printf("The name of employee 1 is %s\n",e1.name);
    printf("The name of employee 2 is %s\n",e2.name);
    printf("The name of employee 3 is %s\n",e3.name);



    return 0;
}