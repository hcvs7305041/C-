#include <stdio.h>
#include <stdlib.h>
void sorting(int* ,int);
 
int main () {
	//a056. 1050305 第 1 題 成績指標
  int	a,i;
	int	b[999];
	scanf("%d",&a);
		for(i=0;i<a;i++){
			scanf("%d",&b[i]);
		}
	sorting (b,a);
		for(i=0;i<a;i++){
			printf("%d ",b[i]);
		}
	for(i=0;i<a;i++){
		if(b[i]>=60)break;
	}
		if(b[0]>=60)
			printf("\nbest case"); 
			else 
				printf("\n%d",b[i-1]);
		if(b[a-1]<60)
			printf("\nworst case"); 
			else 
				printf("\n%d",b[i]); 
	
}

void sorting (int *x,int n){
	int a,b,c;
	for(a=0;a<n;a++){
		for(b=0;b<n;b++){
			if(x[b]>x[a]){
				c=x[b];
				x[b]=x[a];
				x[a]=c;
			}
		}
	}
}


