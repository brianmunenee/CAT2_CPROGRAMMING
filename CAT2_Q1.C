//program to define a structure for employee and print their details
/*
AUTHOR: BRIAN MUNENE
REG NO:CT101/G/21785/24

*/
# include <stdio.h>
# include <string.h>
 struct employee{
	 
	 char name[25];
	 int ID;
	 char deparment[20];
	 float salary;
	 char email[50];
	 
 };
 
 int main (){
 	
 	struct employee employee1;
 	
 	strcpy(employee1.name,"john Doe");
 	employee1.ID =12345;
 	strcpy(employee1.deparment,"Human Resources");
 	employee1.salary = 55000.50;
 	strcpy (employee1.email,"john.doe@company.com");
 	
 	
 	
 	printf(" employee name:%s\n",employee1.name);
 	printf(" employee ID:%d\n",employee1.ID);
 	printf(" employee department:%s\n",employee1.deparment);
 	printf (" employee salary:%.2f\n",employee1.salary);
 	printf (" employee email :%s\n",employee1.email);
 	
 	return 0;
 	 
 }