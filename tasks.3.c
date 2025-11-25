#include <stdio.h>
struct Address {
	char city[35];
	char street[30];
	int bulding;
};

struct Job {
	char title [50];
	float salary;
};

struct Employee {
	char name[50];
	int age;
	struct Address add;
	struct Job job;
}; 

int main(){
	
	struct Employee e1,e2;
	
	printf("Enter data for Employee (1)\n");
	printf("Enter name\n");
	scanf("%s",e1.name);
	printf("Enter age\n");
	scanf("%d",&e1.age);
	
	
		printf("Enter City\n");
	scanf("%s",e1.add.city);
	printf("Enter street\n");
	scanf("%s",e1.add.street);
	printf("Enter Bulding\n");
	scanf("%d",&e1.add.bulding);

    printf("Enter title job\n");
	scanf("%s",e1.job.title);
    printf("Enter salary\n");
    scanf("%f",&e1.job.salary);
    
    
   	printf("Enter data for Employee (2)\n");
	printf("Enter name\n");
	scanf("%s",e2.name);
	printf("Enter age\n");
	scanf("%d",&e2.age);
	
	
	printf("Enter City\n");
	scanf("%s",e2.add.city);
	printf("Enter street\n");
	scanf("%s",e2.add.street);
	printf("Enter Bulding\n");
	scanf("%d",&e2.add.bulding);

    printf("Enter title job\n");
	scanf("%s",e2.job.title);
    printf("Enter salary\n");
    scanf("%f",&e2.job.salary);
    
    printf("\tSalary comparison\t \n ");
    if (e1.job.salary > e2.job.salary){
    	printf("Employee number (1) has highist salary\n");
    }	else if (e1.job.salary < e2.job.salary){
        	printf("Employee number (2) has highist salary\n");
		}
	      else{
	      	  	printf("They have some salaty");

		  }
	return 0;
}
