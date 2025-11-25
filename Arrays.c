#include <stdio.h>
int main(){
	int n,l,y;
	printf("Enter size of matrix:");
	scanf("%d",&n);
	printf("Enter size of matrix:");
	scanf("%d",&y);
	int a[n][y];
	
	printf("Enter %d *%d ELement of matrix:", n,n);
	for (int i=0; i<n; i++){
		for (int j=0; j<y; j++){
			scanf("%d", & a[i][j]);
			printf("%d  ", a[i][j]);
		}
	}
//	printf("\n matrix entered :\n");
	
	//for (int i=0; i<n; i++){
		//for (int j=0; j<y; j++){
		//	printf("%d  ", a[i][j]);
		//}
	//	printf("\n");
	//}
	
}
