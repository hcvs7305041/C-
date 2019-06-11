a152: T901****************************************************************************************************
#include <iostream>

using namespace std;
void exchangeInt(int * ,int *);
void exchangeDouble(double * ,double *);
int main(){
	int a ,b ;
	double c ,d ;
	printf("請輸入兩個數字(數字跟數字之間請以空白間隔)");
		scanf("%d %d",&a,&b);

	printf("請輸入兩個浮點數字(數字跟數字之間請以空白間隔)");
		scanf("%lf %lf",&c,&d);

	printf("a:%d b:%d\n",a,b);
		exchangeInt(&a,&b);
	printf("a:%d b:%d\n",a,b);

	printf("c:%lf d:%lf\n",c,d);
		exchangeDouble(&c,&d);
	printf("c:%lf d:%lf\n",c,d);
}

void exchangeInt(int *a ,int *b ){
	int n;
	n = *a;
	*a = *b;
	*b = n;
}

void exchangeDouble(double *c ,double *d ){
	double n;
	n = *c;
	*c = *d;
	*d = n;
}

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
