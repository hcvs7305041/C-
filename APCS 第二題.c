//a061: 1051029 第 2 題 最大和

#include <stdio.h>
#include <stdlib.h>

int main(){
	int m,n,i,j;
	int x,s=0,y[20]={0}; //歸0
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		int max=0;
		for(j=0;j<n;j++){
			scanf("%d",&x);
			if(x>max) max=x;
		}
	y[i]=max;
	s+=max;
	}
	printf("%d\n",s);
	int a=0;
	for(i=0;i<m;i++){

		if(s%y[i]==0){
			if(a) printf(" ");
			printf("%d",y[i]);
			a=1;
		}
	}
	if(!a) printf("-1");
return 0;
}
