#include <stdio.h>

struct Student {
    char name[50];     
    int roll;           
    float marks[3];    
    float average;   
};

int main() {
    struct Student stu[5];   
    int i, j;
    float sum, highest_avg = 0;
    int top_index = 0;

    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", stu[i].name);
        printf("Enter roll number: ");
        scanf("%d", &stu[i].roll);

        sum = 0;
        printf("Enter marks in 3 subjects:\n");
        for (j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &stu[i].marks[j]);
            sum += stu[i].marks[j];
        }

        stu[i].average = sum / 3;

        if (stu[i].average > highest_avg) {
            highest_avg = stu[i].average;
            top_index = i;
        }
    } 
    
    printf("\n--- Student Details ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nName: %s\n", stu[i].name);
        printf("Roll Number: %d\n", stu[i].roll);
        printf("Average Marks: %.2f\n", stu[i].average);
    }

    printf("\n?? Student with Highest Average Marks ??\n");
    printf("Name: %s\n", stu[top_index].name);
    printf("Average Marks: %.2f\n", stu[top_index].average);

    return 0;
}

