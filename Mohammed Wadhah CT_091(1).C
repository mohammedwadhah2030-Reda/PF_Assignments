#include <stdio.h>
//Mohammed Wadhah    CT-25091
int main(){
	int n;
	printf("Pleas enter the size of arrays: ");
	 scanf("%d",&n);
	 
	int arr[n];
     printf("Pleas enter the elemit of array: ");
	
	for (int i=0; i<n; i++){
    	printf("Pleas enter the elemit of array: ");
    	scanf("%d",&arr[i]);
    }
     float sum=0; int count=0;
      for (int i=0; i<n; i++){
      	if(arr[i] > 0){
      		sum += arr[i];
      		count++;
		  }
	  }
	  float average = 0;
	  if (count > 0){
	  	average = sum / count;
	  }
	   printf("\n sum of positive numbers are:%f ",sum);
	   printf("\n average of positive numbers are/ %f",average);
	   return 0;
}

