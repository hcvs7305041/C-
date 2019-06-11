#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(){
	int a ,b ,c ,i ;
	printf("總人數:");
		scanf("%d",&a);
	printf("多少:");
		scanf("%d",&b);
	srand(time(NULL));
	for(i=0;i<b;i++){
		c=(rand()%a)+1;
		printf("%d ",c);
	}
	system("PAUSE");
}
