#include <stdio.h>
//Mohammed Wadhah CT-091
int main() {
    int a = 1, b = 1, c;
    int sum = 0;

      printf("Fibonacci Series (up to 1000):\n");
     printf("%d %d ", a, b);

    for (c = a + b; c <= 1000; c = a + b) {
        printf("%d ", c);

        if (c % 3 == 0 || c % 5 == 0 || c % 7 == 0)
        sum += c;

            a = b;
        b = c;
    }

    printf("\n\nSum of numbers divisible by 3, 5, or 7 = %d\n", sum);

            return 0;
}
