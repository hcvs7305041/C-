//a164: �\�@
#include <stdio.h>
#include<stdlib.h>

int main (void){
	printf("a003:�\�@\t�q�L��v\'93%\'\n");
	printf("\t^_^\n");
	printf("\t\"o\"\n")
	printf("\t\\^o^/"); 
	return 0;
}


//a165: ����P�褸������
#include <stdio.h>
#include<stdlib.h>

int main (void){
	int y=1912, x=2018;
	printf("��X1:\n");
	printf("%d\n", x/y);
	printf("��X2:\n");
	printf("%d", x-y+1);
}


//a166: �x�Ϊ����n
#include <stdio.h>
#include<stdlib.h>

int main (){
	int x=0 ,y=0;
	scanf("%d",&x);
	scanf("%d",&y);
	printf("%d\n",x*y);	
}


//a167: �ɶ�����(�@)
#include <stdio.h>
#include<stdlib.h>

int main (){
	int x=0;
	scanf("%d",&x);
	printf("%d\n",x-1911);	
}


//a168. �ɶ�����(�G)
#include <stdio.h>
#include<stdlib.h>

int main() {
	int H=0;
	scanf("%d",&H);
	printf("%d ",H/24);
	printf("%d",H%24);
}


//a170. �q���B�z�t�ת�����
#include <stdio.h>
#include<stdlib.h>

int main() {
	int G=0 ,A=0 ,U=0 ,T=0 , W=0;
	scanf("%d",&G);
	A = G+54;
	U = A*2-43;
	T = U*3-167;
	W = (T%1000/100*100)+(U%100/10*1000);
	printf("%d",W);
}


//a171: �ū��ഫ
#include <stdio.h>
#include<stdlib.h>

int main() {
	float C,F;
	scanf("%f",&F);
	C = (F-32)*5/9;
	printf("%.1f",C);
	
}


//a173. �d�ߦr����ASCII�X
#include <stdio.h>
#include<stdlib.h>

int main(){
    char a;
    scanf("%c",&a);  
    printf("%c=>%d",a,a);
}


//a174. �A���w������?
#include <stdio.h>
#include<stdlib.h>
int main()
{
    char a[100]={'\0'};
    scanf("%s",&a); 	 
    printf("�A���w%s�A���O�A���`�̱`�����ơA%s�O�A�@���H�ӳ��D�`���R���ơA�S���h%s�N�����A�F�C",a,a,a);
}


//a175. �ή�
#include<stdio.h>
#include<stdlib.h>

int main(){
	int a;
	scanf("%d",&a);
	if (60<=a)
		printf("PASS");
	else
		printf("FAIL");
}


//a177: ���Z���G
#include<stdio.h>
#include<stdlib.h>


int main(){
	int a;
	scanf("%d",&a);
	if(a<0||a>100)
		printf("Error");
	else if (55<=a&&a<=65)
		printf("YES");
	else 
		printf("NO");
}


//a178: �f��T�a
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,c,max,min;
	
	scanf("%d%d%d",&a,&b,&c);
		min=a;
	if(b<min)
		min=b;
	if(c<min)
		min=c;
	printf("%d",min);
}


//a179: �j�p���Y
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a=0,b=0;
	scanf("%d%d",&a,&b);
	if (b>a)
		printf("%d<%d",a,b);
	if(b<a)
		printf("%d>%d",a,b);
	if(b==a)
		printf("%d=%d",a,b);
}


//a180. �|�~�P�_
#include <stdio.h>
#include <stdlib.h>

int main() {
int a;
	scanf("%d",&a);
	if (((a%4==0) && (a%100!=0))||(a%40==0))
		printf("YES");
	else
		printf("NO");
}


//a181. ���Z����
#include <stdio.h>
#include <stdlib.h>

int main() {
int a;
	scanf("%d",&a);
	if(90<=a&&a<=100)
		printf("A");
	else if(80<=a&&a<90)
		printf("B");
	else if(70<=a&&a<80)
		printf("C");
	else if(60<=a&&a<70)
		printf("D");
	else
		printf("E");
}


//a183. �U�ȯ��ɶ�
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,H,M;
    scanf("%d%d",&H,&M); 
	a=H*60+M;
    if (a>=870&&a<=1010)
    	printf("YES");
    else
    	printf("NO");
}


//a184. ���֧I��(�@)
#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,n1,n2;
	scanf("%d",&a);
	n1=a/10;
	n2=a%10;	
	if (n2%3==2)
		printf("200"); 
	else if(n1%2==1)
		printf("100");
	else if(n1==n2)
		printf("50");
	else
		printf("0");
}


//a185: ���֧I��(�G)
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,n1,n2;
	scanf("%d",&a);
	n1=a/10;
	n2=a%10;
	if (n2%3==2)
		b+=200;
	if(n1%2==1)
		b+=100;
	if(n1==n2)
		b+=50;			
	else
		b+=0;	
	printf("%d",b);		
}


//a186: �ڰQ������
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	scanf("%d",&a);
	while(a%2==0){
	a=a/2;
	}
	printf("%d",a);
}


//a187: �ӵ��c��
#include <stdio.h>
#include <stdlib.h>

int main() {
	float N,M,T=0;
	scanf("%f%f",&N,&M);
	while(N<M){
	N=N*2.5;
	T=T+1;
	}
	printf("%.f",T);
}


//a188. 3N+1
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b=1;
	scanf("%d",&a);
	while(a>1)
	{ 
		if(a%2==0)
			a=a/2;
		else if(a%2==1)
			a=3*a+1; 
		b++;
	}
	printf("%d",b);
}


//a189. �Ҧ���ƩM
#include <stdio.h>
#include <stdlib.h>

int main() {
int N,a,s=0;
	scanf("%d",&N);
	while(N>0)
	{
	    a=N%10;	
		N=N/10; 	
		s=s+a;
	}
	printf("%d",s);
}


//a190. �Ʀr����
#include <stdio.h>
#include <stdlib.h>

int main() {
int N,a,b;
	scanf("%d",&N);
	while(N!=0)
	{
	    a=N%10;
	   
		N=N/10; 
		b=b*10+a;
			
	}
	 printf("%d",b);
}


//a191. �@�d�M�ڷR�A
#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y;
	scanf("%d",&x);
	for(y=0;y<x;y++)
		printf("I love you.\n");
}


//a192. �s���Ƭۥ[
#include <stdio.h>
#include <stdlib.h>

int main(){
	int A,B,x;
	scanf("%d%d",&A,&B);
	while(A>B)
	{
		x=x+A;	
		printf("%d+",A);
		A--;
	}
	while(A<B)
	{
		x=x+A;
		printf("%d+");	
		A++;
	}
printf("%d=%d",B,x+B);
}


//a193. �˼ƭp��
#include <stdio.h>
#include <stdlib.h>

int main(){
	int A;
	scanf("%d",&A);
	printf("%d ",A);
	while(A--)
	{
		if(A>0)
		printf("%d ",A);
	}
	printf("0");
}


//a194. �p�p�񪺼ƾǲ��D
#include <stdio.h>
#include <stdlib.h>

int main(){
	int A,C;
	char B;
		scanf("%d%c%d",&A,&B,&C);
		if(B=='+')
			printf("%d",A+C);
		if(B=='-')
			printf("%d",A-C);	
		if(B=='*')
			printf("%d",A*C);
}


//a195: �������ԧ�(N�檩)
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N,A,B;
	scanf("%d",&N);
	
	for(;N>0;N--)
	{	
	scanf("%d%d",&A,&B);
		if(A>B)
			printf("A %d\n",A-B);
		if(A<B)
			printf("B %d\n",B-A);
		if(A==B)
			printf("0\n");
	}	
}


//a196: �������ԧ�(0����)
#include <stdio.h>
#include <stdlib.h>

int main() {
	int A,B;
	while(scanf("%d%d",&A,&B))
	{	
		if(A==0&&B==0)
			break;
		if(A>B)
			printf("A %d\n",A-B);
		if(A<B)
			printf("B %d\n",B-A);
		if(A==B)
			printf("0\n");
if(A==0&&B==0)
			break;
	}	
}


//a197: �̫�˼�
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,i;
	int arr[11];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n;i>0;i--)
	{
		printf("%d ",arr[i]);
	}
}
/*#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[11];  
	int n,i;
		scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);  
	}  	
}*/

 
//a198: ��̤j��
#include <stdio.h>
#include <stdlib.h>

int main() {
	int b=0,n=0,i=0,max=0;
	int arr[11]={0};
		scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>=max)
		{
			max=arr[i];
			b=i;
		}
	}
	printf("%d %d",b,max);
}


