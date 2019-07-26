#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
	int j, i;
		srand(time(NULL));
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%5d ",rand()%1000+1);
 		}
 		printf("\n");
	}
	system("pause");
	return 0;
}
