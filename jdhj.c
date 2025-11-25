#include <stdio.h>

int main(){
	int a = 0, b =1,next,i=2;
	
	while(a<=500){
			if (a>=300){	
	break;
	}
     
     if(a % 5 == 0 && a !=0){
     	next = a+b;
     	a = b;
     	b = next;
     	continue;
	 }
	

     printf("\n%d", b);
     
     a = b;
     b = next;
     next = a+b;
      
}
  return 0;
}

