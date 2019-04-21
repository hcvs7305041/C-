//a056. 1050305 第 1 題 成績指標
#include <stdio.h>
#include <stdlib.h>
void sorting(int* ,int);

int main () {
	int a,i;
	int b[999];
	scanf("%d",&a);
	 for(i=0;i<a;i++)scanf("%d",&b[i]);
	sorting(b,a);
	 for(i=0;i<a;i++)printf("%d ",b[i]);
	for(i=0;i<a;i++){
		if(b[i]>=60)break;
	}
	if(b[0]>=60)printf("\nbest case");
		else printf("\n%d",b[i-1]);
	if(b[a-1]<60)printf("\nworst case");
		else printf("\n%d",b[i]);
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

//a060: 1051029 第 1 題 三角形辨別
#include <stdio.h>
#include <stdlib.h>

void sorting (int*,int);
int main() {
	int x[3],i;
	int a,b,c;
	for(i=0;i<3;i++) {scanf("%d",&x[i]);}
	sorting(x,3);
	for(i=0;i<2;i++) {printf("%d ",x[i]);}
					  printf("%d\n",x[2]);
	a=x[0];
	b=x[1];
	c=x[2];
	if(a+b<=c)printf("No");
	else if( (a*a) + (b*b) < (c*c) )printf("Obtuse");
	else if( (a*a) + (b*b) == (c*c) )printf("Right");
	else if( (a*a) + (b*b) > (c*c) )printf("Acute");	
return 0;
}

void sorting (int* x,int n){  
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
//====================================



//a068: 1061028 第 1 題 邏輯運算子(Logic Operators)
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c;	
	scanf("%d %d %d",&a,&b,&c);
	//c=!!c; not判斷 c是否=0or1 
	if (a>0)a=1;  //題目規定a=0or1 
	if (b>0)b=1;  //題目規定b=0or1 
	if ((a&b)==c){
		printf("AND\n");
	}
	if ((a|b)==c){
		printf("OR\n");
	}
	if ((a^b)==c){
		printf("XOR\n");
	}
	if ((a&b)!=c && (a|b)!=c && (a^b)!=c){
	printf("IMPOSSIBLE\n");
	}
return 0;
}











