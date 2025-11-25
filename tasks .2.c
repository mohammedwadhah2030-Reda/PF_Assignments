#include <stdio.h>
//Mohammed Wadhah    CT-25091

struct Address {
    char street[30];
    char city[20];
    char state[20];
    int zip;
};
struct Course {
    char name[20];
    float gpa;
};

struct Student {
    float cgpa;
    struct Course courses[2]; 
    struct Address address;
};

int main() {
    struct Student s1, s2;

    printf("Enter data for Student 1:\n");
    printf("Enter CGPA: ");
    scanf("%f", &s1.cgpa);

    for(int i = 0; i < 2; i++) {
        printf("Enter name of course %d: ", i + 1);
        scanf("%s", s1.courses[i].name);
        printf("Enter GPA of course %d: ", i + 1);
        scanf("%f", &s1.courses[i].gpa);
    }

    printf("Enter street: ");
    scanf("%s", s1.address.street);
    printf("Enter city: ");
    scanf("%s", s1.address.city);
    printf("Enter state: ");
    scanf("%s", s1.address.state);
    printf("Enter zip: ");
    scanf("%d", &s1.address.zip);



    printf("\nEnter data for Student 2:\n");
    printf("Enter CGPA: ");
    scanf("%f", &s2.cgpa);

    for(int i = 0; i < 2; i++) {
        printf("Enter name of course %d: ", i + 1);
        scanf("%s", s2.courses[i].name);
        printf("Enter GPA of course %d: ", i + 1);
        scanf("%f", &s2.courses[i].gpa);
    }

    printf("Enter street: ");
    scanf("%s", s2.address.street);
    printf("Enter city: ");
    scanf("%s", s2.address.city);
    printf("Enter state: ");
    scanf("%s", s2.address.state);
    printf("Enter zip: ");
    scanf("%d", &s2.address.zip);


    printf("\n--- GPA Comparison for Each Course ---\n");
    for(int i = 0; i < 2; i++) {
        if(s1.courses[i].gpa > s2.courses[i].gpa) {
            printf("In course %s, Student 1 has higher GPA.\n", s1.courses[i].name);
        } else if(s1.courses[i].gpa < s2.courses[i].gpa) {
            printf("In course %s, Student 2 has higher GPA.\n", s1.courses[i].name);
        } else {
            printf("In course %s, both students have equal GPA.\n", s1.courses[i].name);
        }
    }

    printf("\n\t CGPA Comparison \t \n");
    if(s1.cgpa > s2.cgpa) {
        printf("Student 1 has the highest CGPA.\n");
    } else if(s1.cgpa < s2.cgpa) {
        printf("Student 2 has the highest CGPA.\n");
    } else {
        printf("Both students have equal CGPA.\n");
    }

    return 0;
}

