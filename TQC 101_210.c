//a072: T101
#include <stdio.h>
#include <stdlib.h>

int main(){  
   printf("Learning C now!\n");
   printf("You will enjoy it");
   return 0;
}


//a073: T102
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
     double a, b ,total; //宣告total 
     printf("請輸入兩個浮點數:");
     scanf("%lf %lf", &a, &b); //%lf  &
     total = a+b;
     printf("total=%lf", total); //double用%lf 
     return 0;
}


//a074: T103
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i=100, j=200;
     double d=123.456;
     printf("%d+%d=%d\n", i, j, i+j);
     printf("d=%.1f\n", d);
     return 0;
     
}


//a075: T104
#include <stdio.h>
#include <stdlib.h>

int main() 
{
     int unit;
     double price=23.34; 
     double total; //浮點數 
     printf("請問您要買幾瓶蘋果汁? ");
     	scanf("%d", &unit); //&
     total = unit*price;
     printf("我買了%d瓶100%的蘋果汁\n", unit);
     printf("花了%lf元", total); //lf 
     return 0;
}


//a076: T105
#include <stdio.h>
#include <stdlib.h>

int main () 
{
    int a, b, c, total;
    double average; 
    printf("請輸入第一個整數? ");
    	scanf("%d", &a);
    printf("請輸入第二個整數? ");
    	scanf("%d", &b); 
    printf("請輸入第三個整數? ");
    	scanf("%d", &c);
    	
    total = a+b+c;
    average = (float)total/3;
    /*(float)強制轉型*/ 

    printf("%d+%d+%d=%d\n", a, b, c, total);
    printf("平均數為%.2lf", average);
return 0;
}


//a077: T106
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int a, b, c, d ,x,y,z;
     printf("請輸入第一個整數? ");
     	scanf("%d", &a);
     printf("請輸入第二個整數? ");
    	 scanf("%d", &b); 
     printf("請輸入第三個整數? ");
    	 scanf("%d", &c);
     printf("請輸入第四個整數? ");
    	 scanf("%d", &d);
	x=a+b;
	y=c+d;
	z=(x/2-y/2)%2;
     printf("此式的餘數為%d\n", z);
     return 0;
}


//a078: T107
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int a, b, c, d, e, f;
     printf("請輸入第一個整數? ");
     	scanf("%d", &a);
     printf("請輸入第二個整數? ");
     	scanf("%d", &b); 
     printf("請輸入第三個整數? ");
   		scanf("%d", &c);
     printf("請輸入第四個整數? ");
   		scanf("%d", &d);
     printf("請輸入第五個整數? ");
     	scanf("%d", &e);
     printf("請輸入第六個整數? ");
    	scanf("%d", &f);

     printf("\n向右靠齊\n");
     printf("%10d %10d %10d\n", a, b, c);
     printf("%10d %10d %10d", d, e, f);

     printf("\n\n向左靠齊\n");
     printf("%-10d %-10d %-10d\n", a, b, c);
     printf("%-10d %-10d %-10d", d, e, f);

     return 0;
}


//a079: T108
#include <stdio.h>
#include <stdlib.h>

int main () 
{
double a, b, c, d, e, f;
printf("請輸入第一個浮點數: ");
scanf("%lf", &a); //%lf
printf("請輸入第二個浮點數: ");
scanf("%lf", &b); //%lf
printf("請輸入第三個浮點數: ");
scanf("%lf", &c); //%lf
printf("請輸入第四個浮點數: ");
scanf("%lf", &d); //%lf
printf("請輸入第五個浮點數: ");
scanf("%lf", &e); //%lf
printf("請輸入第六個浮點數: ");
scanf("%lf", &f); //%lf

printf("\n向右靠齊\n");
printf("%10.2lf %10.2lf %10.2lf\n", a, b, c); //%10.2lf
printf("%10.2lf %10.2lf %10.2lf\n", d, e, f); //%10.2lf

printf("\n\n向左靠齊\n");
printf("%-10.2lf %-10.2lf %-10.2lf\n", a, b, c); //%-10.2lf 
printf("%-10.2lf %-10.2lf %-10.2lf\n", d, e, f); //%-10.2lf

return 0;
}


//a080: T109
#include <stdio.h>
#include <stdlib.h>

int main () {
     int score;

     printf("請輸入您的分數: ");
     scanf("%d", &score);
     if (60<=score&&score<=100) 
	 {
          printf("及格");
     }
     else 
	 {
          printf("不及格");
     }

     int x;
     printf("\n\n請輸入x值: ");
     scanf("%d", &x);
     if (x%2==0)
	  {
          printf("%d是偶數", x);
     }
     else 
	 {
		  printf("%d是奇數", x);
     }
     return 0;
}


//
a081: T110
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int a, b, c;
     printf("請輸入變數a的值: ");
     	scanf("%d", &a);
     printf("請輸入變數b的值: ");
     	scanf("%d", &b); 
     printf("請輸入變數c的值: ");
     	scanf("%d", &c);
     printf("%d\n", 60<=a&&a<100); //&&
     printf("%f\n", (b+1)/10.);
     printf("%d\n", a>c?a:c); //a>c? a : c  
     return 0;
}

//a082: T201
#include <stdio.h>
#include <stdlib.h>

int main() 
{
     int i;
     printf("請輸入i值: ");
     	scanf("%d", &i);
     if (i%2==0)
          printf("%d是偶數\n", i);
     else 
          printf("%d是奇數\n", i);
     return 0;
}


//a083: T202
#include <stdio.h>
#include <stdlib.h>

int main() 
{
     int score, adjust;
     printf("請輸入分數:");
     scanf("%d", &score); //&
     if (score >= 60) //不要; 
          adjust = score+10;
     else 
          adjust = score+5;
     printf("調整後的分數為%d", adjust);
     return 0;
}



//a084: T203
#include <stdio.h>
#include <stdlib.h>

int main () 
{
int floor; 
printf("請問您住哪一層樓(1-4): ");
scanf("%d", &floor);
switch (floor)
	 {
    case 1:
        printf("您住在一樓\n");break;
    case 2:
        printf("您住在二樓\n");break;
    case 3:
        printf("您住在三樓\n");break;
    case 4:
        printf("您住在四樓\n");break;
    default:
        printf("您輸入的樓層不正確\n");
    }
return 0;
}


//a085: T204
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     char ch; 
     printf("請問您的身份:以字母表示分別如下：\nU:表示大學生，M:表示研究生，P:表示博士生 ");
     scanf("%c", &ch); //&
     switch (ch) { //字元' ' 和break; 
  	  	case 'U':
    		printf("您是大學生\n"); break;
   	 	case 'M':
   	    	printf("您是研究生\n"); break;
   	 	case 'P':
        	printf("您是博士生\n"); break;
    	default:
        	printf("您輸入身份不正確\n"); break;
     }
return 0;
}



//a086. T205
#include <stdio.h>
#include <stdlib.h>

int main () 
{
int i, num;
int num1=0, num2=0, num3=0, num4=0, others=0;
for (i=1; i<=10; i++) {
    printf("\n班長候選人如下:\n1: 小王\n2: 小李\n3: 小蔡\n4: 小陳\n");
    printf("請問您要選哪位候選人(1-4):");
    scanf("%d", &num);
    switch (num) {
        case 1:
            num1++;
            break;
        case 2:
            num2++;
            break;
        case 3:
            num3++;
            break;
        case 4:
            num4++;
            break;
        default:
            printf("您輸入的號碼不正確\n");others++;break;
        }
printf("目前得票數\n小王:%d, 小李:%d, 小蔡:%d, 小陳:%d, 廢票:%d\n", 
num1, num2, num3, num4, others);
	}
return 0;
}


//a087. T206 
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i=0, total=0;
     while (i<100)
     {
        i++;
        total += i;
     } 
     printf("1加到100的總和:%d\n", total);
     return 0;
}


//a088. T207 
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i=0, total=0;
     while (i < 100)
     {
          
          i++;
          total += i;
     }
     printf("1加到100的總和:%d\n", total);
     return 0;
}


//a089. T208
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i, total=0; 
     for (i=1; i<=100; i++)
	    if(i%2==0)
         total += i;
     printf("1到100的偶數和: %d\n", total);
     return 0;
}


//a090. T209
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i=0, total=0; 
     do {
          i++;
          if(i%2==1)
          total += i;
     } while (i<100);
     printf("1到100的奇數和: %d\n", total);
     return 0;
}


//a091. T210
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i=1, total=0; 
     do {
          i++;
          if(i%2==0)
          total += i;
     } while (i<=100);
     printf("1到100的偶數和: %d\n", total);
     return 0;
}

