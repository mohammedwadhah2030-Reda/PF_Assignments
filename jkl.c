#include <stdio.h>


int main(){
	int choice , number;
	do {
	printf("pleas enter the number\n");
	scanf("%d", &number);
	
	for (int i =1; i<=10;i++ ){
		printf(" %d * %d = %d \n", i , number , i * number);
	}

       printf("do you want to try another number? enter 1 for Yes and 0 for No \n");
	   scanf("%d", &choice);
	   
	   if (choice !=0 ||choice !=1){
	   	printf("your choice is invalid\n");
	   }
}
	   while(choice == 1);
	   
	   printf("the program End");	
	return 0;
}
