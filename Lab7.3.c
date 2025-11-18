#include <stdio.h>
#include <string.h>
//Mohammed Wadhah    CT-25091
int main(){
	char Fname[50];
	char Lname[50];

	 printf(" pleas enter the first name: ");
	  scanf("%s", Fname);
	 printf(" pleas enter the last name: ");
	  scanf("%s", Lname);
	  
	  strcat (Fname, Lname);
	   printf("\nyour full name is:%s\n ",Fname);
	  
	  int length = strlen(Fname);
	  printf("\ntotal charecter in your full name is:%d ",length);
	  return 0; 
}
