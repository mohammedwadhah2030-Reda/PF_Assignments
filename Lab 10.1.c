#include <stdio.h>
//Mohammed Wadhah                   CT-25091
void swaped(int *aPtr, int *bPtr, int *cPtr) {
    int temp = *bPtr; 
    *bPtr = *aPtr;    
    *aPtr = *cPtr;    
    *cPtr = temp;     
}
int main() {
    int a, b, c;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Enter value for c: ");
    scanf("%d", &c);
    printf("\nBefore swapping: a = %d, b = %d, c = %d\n", a, b, c);

    swaped(&a, &b, &c);

    printf("After swapping:  a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}

