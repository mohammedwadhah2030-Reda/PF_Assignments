#include <stdio.h>

// Mohammed Wadhah CT-25091
int calcTime(char type, char size) {
    int time = 0;

    switch (type) {
        case 'W':
        case 'w': {
            int water = 15, sugar = 15, mix = 20, coffee = 2, milk = 4;
            time = water + sugar + 2 * mix + coffee + milk;
            break;
        }
        case 'B':
        case 'b': {
            int water = 20, sugar = 20, mix = 25, coffee = 15;
            time = water + sugar + 2 * mix + coffee;
            break;
        }
        default:
            printf("Invalid coffee type!\n");
            return 0;
    }

   
    switch (size) {
        case 'D':
        case 'd':
            time += time * 50 / 100;
            
            break;
        case 'R':
        case 'r':
           
            break;
        default:
            printf("Invalid cup size!\n");
            return 0;
    }

    return time;
}


void showSteps(char type) {
    switch (type) {
        case 'W':
        case 'w':
            printf("1. Put water.\n");
            printf("2. Add sugar.\n");
            printf("3. Mix well.\n");
            printf("4. Add coffee.\n");
            printf("5. Add milk.\n");
            printf("6. Mix again.\n");
            break;

        case 'B':
        case 'b':
            printf("1. Put water.\n");
            printf("2. Add sugar.\n");
            printf("3. Mix well.\n");
            printf("4. Add coffee.\n");
            printf("5. Mix again.\n");
            break;

        default:
            printf("Invalid coffee type!\n");
    }
}

int main() {
    char type, size, mode;
    int totalTime;

    printf("Enter (W) for White coffee, (B) for Black coffee: ");
    scanf(" %c", &type);

    printf("Enter (R) for Regular, (D) for Double size: ");
    scanf(" %c", &size);

    printf("Enter (M) for Manual, (C) for Automatic: ");
    scanf(" %c", &mode);

    totalTime = calcTime(type, size);

    if (totalTime == 0) return 0;  

    switch (mode) {
        case 'M':
        case 'm':
            printf("\nManual Preparation Steps:\n");
            showSteps(type);
            printf("Whole process will take %d minutes.\n", totalTime);
            break;

        case 'C':
        case 'c':
            printf("\nAutomatic Process: Please wait for %d minutes.\n", totalTime);
            break;

        default:
            printf("Invalid input for mode.\n");
    }

    return 0;
}

