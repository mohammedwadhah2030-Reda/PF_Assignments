#include <stdio.h>
//Mohammed Wadhah CT-091
int main() {
    int num, temp, digit, sum = 0, rev = 0, i, flag = 0;

 
    printf("Ender a 5-digit number: ");
    scanf("%d", &num);

    
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    printf("Sum of digits = %d\n", sum);

   
    if (sum % 2 == 0) {
        flag = 0;e
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("The number is PRIME.\n");
        else
            printf("The number is NOT PRIME.\n");
    }

  
    else {
        temp = num;
        while (temp > 0) {
          digit = temp % 10;
          rev = rev * 10 + digit;
          temp = temp / 10;
        }

        if (rev == num)
            printf("The number is PALINDROME.\n");
        else
            printf("The number is NOT PALINDROME.\n");
    }

    return 0;
}

