#include <stdio.h>
#include "power.h"

int main ()
{
	int x,y;
	printf("Enter a number:\n");
	scanf("%d",&x);
	printf("Enter 2 if you want to the Square of your Number ");
	printf("or 3 if you want the Cube\n");
	scanf("%d",&y);
	
	if (y==2)
	{	
		printf("The Square of (%d) is: %d",x,SquareOfNumber(x));
	}
	
	else if (y==3)
	{	
		printf("\nThe Cube of (%d) is: %d",x,CubeOfNumber(x));
	}
	else 
	{
		printf("Invalide input");
	}

	return 0;
}
