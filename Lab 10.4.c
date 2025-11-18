#include <stdio.h>
//mohammed Wadhah                       CT-25091
void SortFunction(int *arr, int *size, int order) {
    int n = *size;
    for (int i = 0; i < n - 1; i++) {
     for (int j = 0; j < n - i - 1; j++) {
          if (order == 1) { 
           if (*(arr + j) > *(arr + j + 1)) {
          int temp = *(arr + j);
           *(arr + j) = *(arr + j + 1);
        *(arr + j + 1) = temp;
                }
    } else if (order == 2) { 
          if (*(arr + j) < *(arr + j + 1)) {
             int temp = *(arr + j);
             *(arr + j) = *(arr + j + 1);
              *(arr + j + 1) = temp;
       }
     }
     }
   }
}

int main() {
    int Array[10];
    int size = 10;
    int order;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &Array[i]);
    }

    printf("Enter 1 for Ascending, 2 for Descending: ");
    scanf("%d", &order);

    SortFunction(Array, &size, order);
    printf("Sorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(Array + i));
    }
    printf("\n");

    return 0;
}

