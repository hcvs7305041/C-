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
    double output; //int
    printf("請輸入一數字的字串: ");
    scanf("%s", string);
    output=atof(string);
    printf("%s轉換後的浮點數為%f\n", string, output); //%d
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
#define random(x) rand()%x+1
int main() 
{
     int i, j;
     int x;
     printf("隨機數的最大值為: ");
     scanf("%d", &x);
     for (i=0; i<5; i++) {
          for (j=0; j<4; j++) {
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
     union dataType dT;
     printf("請輸入d的變數值: "); //將兩數分開
     scanf("%lf", &dT.d); 
     printf("%lf\n",dT.d);
     printf("請輸入i的變數值: "); //將兩數分開
     scanf("%d", &dT.d); 
     printf("%d\n",dT.i);
/* 印出dT變數中的d和i */

     return 0;
}
//a142. T801
//a143. T802
//a144. T803
//a145. T804
//a146. T805
//a147. T806
//a148. T807
//a149. T808
//a150. T809
//a151. T810
