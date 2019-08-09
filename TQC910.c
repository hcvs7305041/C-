//CPA09-1.c
#include <stdio.h>
#include <stdlib.h>

void exchange(int*,int*);
 
int main() {
	int a, b;
	printf("請輸入兩個數字(數字跟數字中間請以空白相隔)");
	 scanf("%d%d", &a, &b);
	printf("a:%d b:%d\n", a, b);
	exchange(&a,&b);
	printf("a:%d b:%d\n", a, b);	
	return 0;
}

exchange(int* a,int* b){
	int r;
	 r=*a;
	 *a=*b;
	 *b=r;
}
