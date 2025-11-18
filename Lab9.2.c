#include <stdio.h>
//Mohammed Wadhah CT-25091
void CheckPosition()
{
    int marks, experience;

    printf("Eter test marks: ");
    scanf("%d", &marks);

    if (marks < 50)
    {
        printf("Sorry, you are not selected\n");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("Selected as Trainee Engineer.\n");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("Enter years of experience: ");
        scanf("%d", &experience);

        if (experience >= 1)
            printf("Selected as Assistant Developer.\n");
        else
            printf("Not eligible for Assistant Developer needs 1 year experience \n");
    }
    else if (marks >= 70)
    {
        printf("Enter years of experience: ");
        scanf("%d", &experience);

        if (experience >= 2)
            printf("Selected as Associate Developer\n");
        else if (experience >= 1)
            printf("Selected as Assistant Developer (not enough for Associate)\n");
        else
            printf("Selected as Trainee Engineer (no experience)\n");
    }}
int main()
{
    CheckPosition(); 

    return 0;
}

