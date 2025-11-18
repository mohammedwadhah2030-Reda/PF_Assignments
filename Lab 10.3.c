#include <stdio.h>
//Mohammed Wadhah                             CT-25091
float secondHighest(float *arr, int size) {
    float highest, second;

    if (arr[0] > arr[1]) {
        highest = arr[0];
        second = arr[1];
    } else {
        highest = arr[1];
        second = arr[0];
    }

    for (int i = 2; i < size; i++) {
        if (*(arr + i) > highest) {
            second = highest;      
            highest = *(arr + i);  
        } else if (*(arr + i) > second && *(arr + i) < highest) {
            second = *(arr + i);   
        }
    }

    return second;
}

int main() {
    float Array[20];
    int size = 20;

    printf("Enter 20 float numbers:\n");
    for (int i = 0; i < size; i++) {
        scanf("%f", &Array[i]);
    }

    float second = secondHighest(Array, size);

    printf("The second highest element is: %.2f\n", second);

    return 0;
}

