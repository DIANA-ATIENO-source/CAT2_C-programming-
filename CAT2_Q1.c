//program to declare and initialize structure
#include<stdio.h> 
#include<string.h>
struct employee{
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
}
employee1;
int main(){
	//declaration of variables
	strcpy(employee1. name,"John Doe");
	employee1. id=12345;
	strcpy(employee1. department,"Human_Resources");
	employee1. salary=55000.50;
	strcpy(employee1. email,"john.doe@company.com");
	
	//output results
	printf("the name is:%s\n",employee1. name);
	printf("the id is:%d\n",employee1. id);
	printf("the department is:%s\n",employee1. department);
	printf("the salary is:%.2f\n",employee1. salary);
	printf("the email is:%s\n",employee1. email);
	
	return 0;
	
}
