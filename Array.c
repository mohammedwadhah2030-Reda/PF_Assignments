 #include <stdio.h>

int main() {
    char month[12][10]= {"January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"};
    int numOfMonth;
	int days [12]= {31,28,31,30,31,30,31,31,30,30,30,30};
     
      while(1){
	printf("Pleas Enter the Number of month\n");
     scanf("%d",&numOfMonth);
     
      if (numOfMonth >=1 && numOfMonth <= 12){
      break;
	  } 
       else {
       	printf("Invalid number!! pleas Enter a number between 1,12");
       }}
       
       printf("month %s\n",month[numOfMonth-1]);
       	printf("days %d\n", days[numOfMonth-1]);
    return 0;

}
