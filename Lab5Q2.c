#include <stdio.h>
   //Mohammed Wadhah   CT-25091
int main() {
	
    char coffeeType, size, mode;
    int time = 0;

    printf("Enter (W) for White coffee or (B) for Black coffee: ");
    scanf(" %c", &coffeeType);

    switch (coffeeType) {
        case 'W':
        case 'w':
            {
                int water = 15, sugar = 15, mix = 20, coffee = 2, milk = 4;
                time = water + sugar + 2 * mix + coffee + milk;
            }
            break;

        case 'B':
        case 'b':
            {
                int water = 20, sugar = 20, mix = 25, coffee = 15;
                time = water + sugar + 2 * mix + coffee;
            }
            break;

        default:
            printf("Invalid coffee type.\n");
            return 0;
    }

    printf("Enter (D) for Double size or (R) for Regular size: ");
    scanf(" %c", &size);

    switch (size) {
        case 'D':
        case 'd':
            time += time * 50 / 100; 
            break;
        case 'R':
        case 'r':
          
            break;
        default:
            printf("Invalid cup size.\n");
            return 0;
    }

    printf("Enter (M) for Manual or (C) for Automatic: ");
    scanf(" %c", &mode);

    switch (mode) {
        case 'M':
        case 'm':
            if (coffeeType == 'W' || coffeeType == 'w') {
                printf("Steps for White Coffee:\n");
                printf("1. Put water\n2. Add sugar\n3. Mix well\n4. Add coffee\n5. Add milk\n6. Mix again\n");
            } else {
                printf("Steps for Black Coffee:\n");
                printf("1. Put water\n2. Add sugar\n3. Mix well\n4. Add coffee\n5. Mix again\n");
            }
            printf("Total time = %d minutes\n", time);
            break;

        case 'C':
        case 'c':
            if (coffeeType == 'W' || coffeeType == 'w') {
                printf("White Coffee will be ready in %d minutes.\n", time);
            } else {
                printf("Black Coffee will be ready in %d minutes.\n", time);
            }
            break;

        default:
            printf("Invalid choice for manual/automatic.\n");
            return 0;
    }

    return 0;
}

