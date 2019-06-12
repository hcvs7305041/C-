a153: T902****************************************************************************************************
/*
#include <iostream>

using namespace std;

int main() {
		printf("數字: 16 40 38 6 30 11");
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main() {
	int i ,a ,b;
	srand(time(NULL));
	cout << "數字:" ;
	for(i=0;i<6;i++){
		b=(rand()%49)+1;
		printf(" %d",b);
	}
	return 0;
}
//原解
