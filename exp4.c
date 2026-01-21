#include<stdio.h>
typedef struct employee{
    int empID;
    char name[20];
    int empSalary;
}emp_t;

void acceptData(emp_t arr[], int empNo)
{
    for(int i = 0 ; i < empNo; i++)
    {
        printf("Enter EmpID of %d Employee : ", i + 1);
        scanf("%d", &arr[i].empID);
        printf("Enter Name of the %d Employee : ",i + 1);
        scanf("%s", arr[i].name);
        printf("Enter Salary of %d Employee : ", i + 1);
        scanf("%d", &arr[i].empSalary);
    }
}

void printEmpData(emp_t arr[], int empNo)
{
    for(int i = 0 ; i < empNo; i++)
    {
        printf("\nEmployee ID : %d\n", arr[i].empID);
        printf("Employee Name : %s\n", arr[i].name);
        printf("Employee ID : %d\n", arr[i].empSalary);
        
    }
}

int main() 
{
    int empNo;
    printf("Enter No of Employees : ");
    scanf("%d", &empNo);
    emp_t arr[empNo];
    acceptData(arr, empNo);
    printEmpData(arr, empNo);
}