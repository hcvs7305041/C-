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
//a139. T708
//a140. T709
//a141. T710
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
