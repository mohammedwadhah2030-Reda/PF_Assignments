#include<stdio.h>
//Mohammed Wadhah    CT-25091
 struct empolyee 
{
    int id;
    char name[20];
    float salary;};
int main(){
struct empolyee e1[5];
     for (int i=0;i<5;i++){
	 
    printf("Enter employee id: ");
    scanf("%d", &e1[i].id);
    printf("Enter employee name: ");
    scanf("%s", e1[i].name);
    printf("Enter employee salary: ");
    scanf("%f", &e1[i].salary);
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e1[i].id);
    printf("Name: %s\n", e1[i].name);
    printf("Salary: %.2f\n", e1[i].salary);
}


return 0;
}

