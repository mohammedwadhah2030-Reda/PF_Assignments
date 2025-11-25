#include <stdio.h>

int main(){
	
	int num;
	
	printf("\n*****************************************************\n");
	
	printf("welcome to my program\n");
	printf("please enter the number to show the multiplcation table.\n");
	printf("or enter -1 to exit.\n");
	scanf("%d",&num);
	
	while(num!=-1)
	{
		for(int i=0 ; i<=12 ; i++)
		{
			printf("%d x %d = %d\n",num,i, num*i);
		}
		
		printf("please enter a new number or -1 to exit.");
	
		scanf("%d",&num);
	}
	
	printf("\nThankyou for using our program\n");
}
