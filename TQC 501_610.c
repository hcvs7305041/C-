//a112. T501
#include <stdio.h>
#include <stdlib.h>
int main () 
{
	struct  student {
	char name[10];
	int score;
	};

	struct student st1;
	printf("請輸入姓名:");
    scanf("%s", &st1.name);
    
    printf("請輸入分數:");
    scanf("%d", &st1.score);
 
    printf("%s的成績是%d\n", st1.name, st1.score);
 
    if (st1.score >=60)
       printf("恭喜您通過了");
    else {
       printf("抱歉您被當了");
    }
    return 0;
}
//a113. T502
#include <stdio.h>
#include <stdlib.h>
int main () {
    struct  circle {
        int x, y;
        double radius;
    };
 
    double area;
    struct circle c1={10, 10, 2.5};

    area = c1.radius*c1.radius*3.14159;
 
    printf("此圓的圓心為(%d, %d), 面積為%.2f\n", c1.x, c1.y, area);
    return 0;
}
//a113. T502
#include <stdio.h>
#include <stdlib.h>
int main () 
    {
        struct  circle {
        int x, y;
        double radius;
    };
 
    double area;
    struct circle c1={10, 10, 2.5};
    struct circle *pc=&c1;

    area = (*pc).radius*(*pc).radius*3.14159;
 
    printf("此圓的圓心為(%d, %d), 面積為%.2f\n", (*pc).x, (*pc).y, area);
    return 0;
}
//a115. T504
#include <stdio.h>
#include <stdlib.h>
struct rect {
	int length, width;
	};
	
int callarea(struct rect *pr);
int main () {

    int area;
    struct rect r1={20, 18};
    area = callarea(&r1);
    printf("此矩形的長為%d, 寬為%d, 面積為%d\n", r1.length, r1.width, area);
    return 0;
}

int callarea(struct rect *pr){
    int area;
    area = pr->length * pr->width;
    return area;
}
//a116. T505
#include <stdio.h>
#include <stdlib.h>

struct rect {
    int length, width;
};
int callarea(struct rect *pr);
int main () 
{ 
    int area;
    struct rect r1={20, 18};
  
    area = callarea(&r1);
 
    printf("此矩形的長為%d, 寬為%d, 面積為%d\n", r1.length, r1.width, area);
    return 0;
}
int callarea(struct rect *pr)//指標方法存取
{
    int area;
    area = pr->length * pr->width;//指標方法存取 存取方式必須使用箭頭
    return area;
}
//a117. T506
#include <stdio.h>
#include <stdlib.h>
struct circle {
    int x, y;
    double radius;
};

double callarea(struct circle *pr);
int main () 
{ 
    double area;
    struct circle c1={10, 10, 8.5};

    area = callarea(&c1);
 
    printf("此圓的圓心為(%d,　%d), 半徑為%.2f, 面積為%.2f\n", c1.x, c1.y, c1.radius, area);
    return 0;
}

double callarea(struct circle *pr)
{
    double area;
    area = pr->radius * pr->radius * 3.14159;
    return area;
}
//a118. T507
#include <stdio.h>
#include <stdlib.h>
int main () 
{
    struct  company {
        char name[10];
        int hour;
        double pay;
    };
 
    struct company employee[5]={
        "John", 20, 100.34,
        "Mary", 30, 99.78,
        "Peter", 25, 89.45, 
        "Nancy", 33, 87.42,
        "Tom", 54, 77.89,
    };
 
    double salary[5];
    int i;
    for(i=0; i<5; i++)
    {
        salary[i]=employee[i].hour*employee[i].pay;
        printf("%-10s 的薪水為　%.2f\n",employee[i].name,salary[i]);
    }
  
     return 0;
}
//a119. T508
#include <stdio.h>
#include <stdlib.h>
int main () 
{
    struct  company {
       char name[10];
       int hour;
       double pay;
    };
 
    struct company employee[5];  
 
    double salary[5];
    int i;
 
    for (i=0; i<5; i++) 
    {
        printf("請輸入第%d位員工的姓名: ", i+1);
        scanf("%s", &employee[i].name);
        printf("請輸入第%d位員工的工作時數: ", i+1);
        scanf("%d", &employee[i].hour);
       printf("請輸入第%d位員工一小時的工資: ", i+1);
       scanf("%lf", &employee[i].pay);
    }
 
 
    for(i=0; i<5; i++)
    {
       salary[i]=employee[i].hour*employee[i].pay;
       printf("%-10s 的薪水為　%.2f\n", 
          employee[i].name,salary[i]);
    }
return 0;
}
//a120. T509
#include <stdio.h>
#include <stdlib.h>
int main () 
{
    struct  triangle {
        int width;
        int height;
    };
	struct triangle *ptri;  
	double area;
	
    ptri = malloc(sizeof(struct triangle));
    
    printf("請輸入三角形的底為多少: ");
    	scanf("%d", &(*ptri).width);
    printf("請輸入三角形的高為多少: ");
		scanf("%d", &(*ptri).height);
 
    area = (ptri->width * ptri->height)/2.;
		printf("三角形的面積為%.2lf\n", area);
    return 0;
}
//a121. T510
#include <stdio.h>
#include <stdlib.h>
int main () 
{
    struct  circle {
       int x, y;
       int radius;
       struct circle *next;
    };
 
    struct circle *a, *b, *c, *current;  
 
    a = (struct circle *)malloc(sizeof(struct circle));
    printf("請輸入第一個圓的圓心(x, y): ");
    	scanf("%d %d", &a->x, &a->y);
    printf("請輸入第一個圓的半徑: ");
    	scanf("%d", &a->radius);
    a->next = NULL;
 
    b = (struct circle *)malloc(sizeof(struct circle));
    printf("請輸入第二個圓的圓心(x, y): ");
    	scanf("%d %d", &b->x, &b->y);
    printf("請輸入第二個圓的半徑: ");
    	scanf("%d", &b->radius);
    b->next = NULL;
    a->next= b;
 
    c = (struct circle *)malloc(sizeof(struct circle));
    printf("請輸入第三個圓的圓心(x, y): ");
    	scanf("%d %d", &c->x, &c->y);
    printf("請輸入第三個圓的半徑: ");
    	scanf("%d", &c->radius);
    c->next=NULL;
    b->next=c;
	current = a ;
    int i=1;
    while (current != NULL) {
       printf("第%d個圓的圓心為(%d, %d), 半徑為%d\n",         
          i, current->x, current->y, current->radius);
       i++;
       current=current->next;
    }
    free(a);
    free(b);
    free(c);
    return 0;
}
//a122. T601
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
    char str[]="Apple iPhone 4";
    char pstr2[20]="Apple";
    char pstr1[]=" iPod";
    char str3[20];
    printf("str字串的長度是%d\n", strlen(str));//取得字串長度函數為strlen()
    printf("pstr2連結pstr1後的字串為:%s\n", strcat(pstr2, pstr1));//字串串聯函數為strcat()
    printf("str3字串如下:%s\n", strcpy(str3, pstr1));//字串複製函數為strcpy()
return 0;
}
//a123. T602
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
     char str2[]="Apple iPod";
     char str4[]="Apple iPad";
     int n;
     n=strcmp(str2, str4);
	//strcmp()比較字串的函式，如果前面大於後面則是true=1，相等為0，小於則是-1
     if (n>0) {
          printf("%s大於%s\n", str2, str4);
     } else if (n==0) {
          printf("%s等於%s\n", str2, str4);
     } else {
          printf("%s小於%s\n", str2, str4);

     }
     n=strncmp(str2, str4, 5);
     if (n>0) {
          printf("%s前五個字元大於%s前五個字元\n", str2, str4);
     } else if (n==0) {
          printf("%s前五個字元等於%s前五個字元\n", str2, str4);
     } else {
          printf("%s前五個字元小於%s前五個字元\n", str2, str4);
     }
     return 0;
}
//a124. T603
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
     char str2[]="Apple iPod";
     char str4[]="Apple iPad";
     int n;
     n=strcmp(str2, str4);
     if (n>0) {
          printf("%s大於%s\n", str2, str4);
     } else if (n==0) {
          printf("%s等於%s\n", str2, str4);

     } else {
          printf("%s小於%s\n", str2, str4);
     }
     n=strncmp(str2, str4, 5);
     if (n>0) {
          printf("%s前五個字元大於%s前五個字元\n", str2, str4);
     } else if (n==0) {
          printf("%s前五個字元等於%s前五個字元\n", str2, str4);
     } else {
          printf("%s前五個字元小於%s前五個字元\n", str2, str4);
     }
     return 0;
}
//a125. T604
//a126. T605
//a127. T606
//a128. T607
//a129. T608
//a130. T609
//a131. T610

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//void abc(int);
int main () 
{
    char ch, ch2;
    char a;
    printf("請輸入一小寫的英文字母: ");
     	ch=scanf("%c",&ch);
 /*   	if((ch>='A')&&(ch<='Z')){
 		ch=a;
 	   ch+=32;//利用ASCII  加上32變成小寫
 	}
	else if((ch>='a')&&(ch<='z')){
		ch=a;
 	   ch-=32;//利用ASCII  加上32變成大寫
 	}*/
    printf("%c的大寫是%c", ch, ch2);
    
  /*  printf("\n請輸入一大寫的英文字母: ");
   	 scanf("%c", &ch2);
   	abc(ch2);
    printf("%c的小寫是%c", ch, ch2);*/
    return 0;
}
/*
void abc(int ch){
int a;
	if((ch>='A')&&(ch<='Z')){
 		ch=a;
 	   ch+=32;//利用ASCII  加上32變成小寫
 	}
	else if((ch>='a')&&(ch<='z')){
		ch=a;
 	   ch-=32;//利用ASCII  加上32變成大寫
 	}
}*/
