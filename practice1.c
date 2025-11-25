#include <stdio.h>

int main( ){
int y = 5;
int z = 6;

int *yPtr;
yPtr = &y;

printf("%d\n", *yPtr);
yPtr = &z;
printf("%d\n", *yPtr);
return 0;
}
	

