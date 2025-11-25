#include<stdio.h>
 struct empolyee 
{
    int id;
    char name[20];
    float salary;};
int main(){
struct empolyee e1;

    printf("Enter employee id: ");
    scanf("%d", &e1.id);
    printf("Enter employee name: ");
    scanf("%s", e1.name);
    printf("Enter employee salary: ");
    scanf("%f", &e1.salary);
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e1.id);
    printf("Name: %s\n", e1.name);
    printf("Salary: %.2f\n", e1.salary);
    return 0;


return 0;
}
