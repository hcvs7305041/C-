//a132: T701
#include <stdio.h>
#include <stdlib.h>
int main () 
{
    char string[20];
    double output;
    printf("請輸入一數字的字串: ");
    scanf("%s", string);
    output=atof(string); //atoi() 字串轉成int格式 atof() 字串轉成浮點數
    printf("%s轉換後的浮點數為%f\n", string, output);
    return 0;
}

//a133. T702
#include <stdio.h>
#include <stdlib.h>
int main () 
{
    char string[20];
    double output;
    printf("請輸入一數字的字串: ");
    scanf("%s", string);
    output=atoi(string); //atoi 字符串 轉整數
    printf("%s轉換後的整數為%.0f\n", string, output); //%.0f 
    return 0;
}
 
//a134. T703
#define NTRATE 31.34;
#include <stdio.h>
#include <stdlib.h>
int main () 
{
    double USdollar, NTdollar;
    printf("請輸入您有多少美金: ");
    scanf("%lf", &USdollar); //lf
    NTdollar = USdollar * NTRATE;
    printf("您可以換%.2f台幣\n", NTdollar);
    return 0;
}

//a135. T704 
#define TRIPLE(x) x*x*x; //定義一個方程式
#include <stdio.h>
#include <stdlib.h>
int main (){
     int num, triple_num;
     printf("請輸入一個整數: ");
     scanf("%d", &num);
     triple_num = TRIPLE(num);
     printf("%d的三次方為%d\n",num, triple_num); //少num 
     triple_num = TRIPLE((4+1)); //括號 
     printf("5的三次方為%d\n", triple_num);
     return 0;
}

//a136. T705
#include <stdio.h>
#include <stdlib.h>
int main () {
     enum classify
		{
          Freshman, Sophomore, Junior, Senior
     };
     struct student {
          char *name;
          enum classify id;
     };
     struct student st1;
     st1.name="Peter";
     st1.id=Junior; //為enum不用引號 ↑
     printf("%s是大三的學生\n", st1.name); //名字 
return 0;
}

//a137. T706
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () {
     int x, y;
     double result;
     printf("請輸入x, y的值: ");
     scanf("%d %d", &x, &y);
     result=(exp(5) * sqrt(pow(x, y)+log(100)) / pow(x, 2) * pow(y, 3)); //少括號
     printf("result=%f\n", result);
     return 0;
}

//a138. T707
struct student {
char name[20];
int score;
};

typedef struct student ST; //typedef 位置 
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //要用 
int main () {
     ST stname;
     strcpy(stname.name,"Jonh"); //把字串複製進去該記憶體
     stname.score=90;
     printf("%s的分數為%d\n", stname.name, stname.score);
     return 0;
}

//a139. T708
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define random(x) rand()%x+1 //rand()%x +1
int main() 
{
     int i, j;
     int x;
     printf("隨機數的最大值為: ");
     scanf("%d", &x);
     for (i=0; i<5; i++) { //i=0
          for (j=0; j<4; j++) { //j=0
               printf("%5d ", random(x));
          }
          printf("\n");
     }
     return 0;
}

//a140. T709
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () 
{
     double result;
     double a, b, c, d, e, f;
     printf("請輸入a, b, c的值: ");
     scanf("%lf %lf %lf", &a, &b, &c);
     printf("請輸入d, e, f的值: ");
     scanf("%lf %lf %lf", &d, &e, &f);
     result = fabs(a)*floor(b)+pow(c, d)*sqrt(e)+log10(f); 
	 	//fabs絕對值  floor最大整數值小於或等於x  pow"x的y次"  sqrt平方根 log10"x的常用對數"
     printf("result = %f", result);
     return 0;
}
//a141. T710
#include <stdio.h>
#include <stdlib.h>
/* 若沒有定義Knum, 則加以定義為1000 */
#ifndef Knum
#define Knum 1000
#endif
/* 將Knum解除定義, 之後再定義為200 */
#undef Knum
#define Knum 200

int main () 
{
/* 印出最後的Knum值 */
     printf("Knum = %d\n", Knum);
/* 下列的變數d和i共用8個Bytes, 不是12個Bytes */
     union dataType {
          double d;
          int i;
     };
     union dataType dT; //union
     printf("請輸入d的變數值: "); //改字 
     scanf("%lf", &dT.d); //去%d 將兩數分開
	 printf("%lf\n",dT.d); //%lf\n 輸出dT.d 
/* 印出dT變數中的d和i */
	 printf("請輸入i的變數值: "); //改字(自己補) 
     scanf("%d", &dT.d); //輸入 改%d 將兩數分開 &
     printf("%d\n",dT.i); //\n
     return 0;
}
//a142. T801
#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,n;
    int i=0,j=0;
	while(1){
	printf("輸入三角型形狀代號(1-4)及星星數量(1-10):");
		scanf("%d%d",&m,&n);
		if(m>4||m<1||n>10||n<1)break;
	if((m>=1)&&(m<=4)||(n>=1)&&(n<=10)){
		switch (m){
    	   	case 1:{
				for(i=1;i<=n;i++)
				{
 					for(j=0;j<i;j++)printf("*");
 					printf("\n");
					}
				break;
				}
    	   	case 2:{
				for(i=1;i<=n;i++)
				{
 					for(j=i;j<=n;j++)printf("*");
 					printf("\n");
				}
				break;
				}
    	  	case 3:{ 
				for(i=1;i<=n;i++)
				{
					for(j=i;j<n;j++) printf(" ");
					for(j=0;j<i;j++) printf("*");
 				printf("\n");
				} 
			break;
			}
    	  	case 4:{ 
				for(i=1;i<=n;i++)
				{
 					for(j=1;j<i;j++) printf(" ");
 					for(j=i;j<=n;j++) printf("*");
				printf("\n");
				}
			break;
			}
			default:break;
   		}
    }
    }
return 0;
}
//a143. T802
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a=0;
	while(1){
		printf("(1)教授\n(2)副教授\n(3)助理教授\n(4)都不是\n(5)結束\n請輸入您的職稱代號:");
		scanf("%d",&a);
		switch (a)
		{
			case 1: printf("\n您的職稱是教授\n");break;
			case 2: printf("\n您的職稱是副教授\n");break;
			case 3: printf("\n您的職稱是助理教授\n");break;
			case 4: printf("\n您的職稱沒有在這選項內\n");break;
			case 5: break;
			default: printf("\n您的職稱沒有在這選項內\n");
		}
	if(a==5)break;
	}
return 0;
}

//a144. T803
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	double a,data[6];
	for(i=0;i<6;i++){
	printf("請輸入第%d個浮點數:",i+1 );
	scanf("%lf",&data[i]);
}

printf("\n您輸入的陣列值如下\n");
 for(i =0;i<6;i++)
  printf("\ndata[%d]:%.2f",i,data[i]);

for(i=0;i<6;i++){
	a+=data[i];
	
}
a=a/6;
 printf("\n平均:%.2f",a);
}
=================================================================================================================
=================================================================================================================
/*#include<stdio.h>
#include<stdlib.h>
int main(){
	int i=10, a=0, b=0, c=0;
	char x;
	while(i--){
		printf("(1)小蔡\n(2)小王\n(3)小史\n請您投票:");
		scanf("%s",&x);
		if(x=='1') a++;
		else if(x=='2') b++;
		else if(x=='3') c++;
		else i++;
		if(x=='1'||x=='2'||x=='3') printf("小蔡得票數:%d\n小王得票數:%d\n小史得票數:%d\n",a,b,c); //1 2 3才顯示 
	}
return 0;
}*/

//a145. T804
#include <iostream> 

using namespace std;

int main (){
	int i, j;
	double data[6],a=0;
	for(i=0;i<6;i++)
	{
		printf("請輸入第%d個浮點數:",i+1);
		cin >> data[i] ;
	}
	printf("\n您輸入的陣列值如下\n");
	for(i=0;i<6;i++)
	{
		printf("data[%d]:%.2lf\n",i,data[i]);
		a+=data[i];
	}
	a=a/6;
	printf("\n平均:%.2lf",a);
}

//a146. T805
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void CPD08_1(void);
void CPD08_2(void);
int main (){
	CPD08_1();
    CPD08_2();
    return 0;
}

void CPD08_1(void)
{
	int arr[3][4] ,i ,j , x=0;
	for(i=0;i<3;i++){	//輸入2維陣列  
		cout << "請輸入四個數字(數字之間請以空白為間隔):" << endl;
		for(j=0;j<4;j++){
			cin >> arr[i][j];
			x=x+arr[i][j];
		}
	}
	cout << endl;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){ 
			cout <<	arr[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "sum:" << x << endl;	//平均 
}


void CPD08_2(void)
{
	int arr[5][2] ,i ,j , x=0;
	for(i=0;i<5;i++){	//輸入2維陣列
		cout << "請輸入二個數字(數字跟數字之間請以空白為間格):" << endl;
		for(j=0;j<2;j++){
			cin >> arr[i][j];
			x=x+arr[i][j];
		} 
	}
	cout << endl;
	for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			cout <<	arr[i][j] << " ";
		}
	cout << endl;
	}
	
	cout << "sum:" << x;	//平均
}

//a147. T806
#include<stdio.h>
#include <stdlib.h>

void multiply(int);
void printStar(int);

int main(){ 
	int m,p;
	printf("請輸入您要幾乘幾的乘法表(最多10):");
		scanf("%d",&m);
	printf("請輸入您要多少個星星:");
		scanf("%d",&p);
	printStar(p);
	if(m<=10){
		multiply(m);
	}
	printStar(p);
return 0;
}

void multiply(int n){//乘法 
	int a,b;
	for ( a=1;a<=n;a++ ) 
		{ 
			for ( b=1;b<=n;b++)
			{ 
				printf("%2d*%2d=%2d ",a,b,a*b);
			}
		printf("\n");
		}
}

void printStar(int n){//星星 
	int i;
	for(i=0;i<n;i++){
		printf("*");
	} 
printf("\n");
}
=================================================================================================================
=================================================================================================================
/*#include <iostream>
using namespace std;
void star(int);
void math(int);

int main() {
	int m, s;
	cout << "請輸入您要幾乘幾的乘法表(最多10):" ;
	 cin >> m ;
	cout << "請輸入您要多少個星星:" ;
	 cin >> s ; 
	star(s);
	if(m<=10) math(m);
	star(s);
return 0;
}
void star(int n){
	int i;
	for(i=0;i<n;i++) cout << "*" ; 
	cout << endl;
}
void math(int n)
{
	int a, b;
	for(a=1;a<=n;a++){
	 for(b=1;b<=n;b++){
	 	printf("%2d*%2d=%2d ",a,b,a*b);
	 } 
	cout << endl;
	}	
}*/
	
//a148. T807
	
//a149. T808
#include <stdio.h>
#include <stdlib.h>
void sorting(int*,int);
int main() {
	int scoredata[10];
	int i;
	printf("請輸入十個數...\n");
		for(i=0;i<10;i++){
			printf("第 %d 個: ",i+1);
			scanf("%d",&scoredata[i]);
		}
	printf("排序前: ");
		for(i=0;i<10;i++){
			printf(" %d",scoredata[i]);
		}
		
	sorting(scoredata,10);
	
	printf("\n排序後: ");
		for(i=0;i<10;i++){
			printf(" %d",scoredata[i]);
		}
return 0;
}
void sorting(int* data2,int n){
	int i, j ,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(data2[j]>data2[j+1]){
				temp = data2[j+1];
				data2[j+1] = data2[j];
				data2[j] = temp;
			}
		}
	}
}

//a150. T809
//a151. T810
