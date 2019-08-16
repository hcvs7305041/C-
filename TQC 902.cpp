//a153: T902****************************************************************************************************
/*
#include <iostream>

using namespace std;

int main() {
		printf("數字: 16 40 38 6 30 11");
}
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main() {
	int a[6], i, j;
	srand(time(NULL));
	for(i=0;i<6;i++){
		a[i]=rand()%49+1;
		for(j=6;j>=0;j--)
		 if(a[i]==a[j]&&i!=j){
		 	a[i]=rand()%49+1;
		 }
		printf("%d ",a[i]);
	}
	return 0;
}
