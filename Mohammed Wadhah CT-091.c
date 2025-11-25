#include<stdio.h>

int main(){
	int n, fact=1;
	
		printf("pleas enter the number %d", n);
		scanf("%d", &n);
		
	for (int i=n; i >= 1 ;i--){
			printf(" %d * %d = %d\n",i,fact,fact*i);
		 fact *= i; 
	
	}
		return 0;
}	




