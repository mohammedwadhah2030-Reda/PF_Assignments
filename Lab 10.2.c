#include <stdio.h>
// Mohammed Wadhah                              CT-25091
int sum_Array (int Arr[], int size){
	int sum = 0;
	for (int i=0;i<size;i++)
	{
		sum += *(Arr + i);
	}
	 return sum;
}
int main(){
	int Array[5];
	int size =5;
	
	printf("enter the elimtes of array:\n ");
	for (int i=0;i<size;i++){
	scanf("%d",&Array[i]);	
	}
	int total = sum_Array(Array,size);
	printf("sum eliments of array = %d",total);
	
	return 0;
	
}
