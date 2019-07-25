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

/*----------------------------------------------------------------------------------------------*/
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



/*----------------------------------------------------------------------------------------------*/
//a114. T503
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


/*----------------------------------------------------------------------------------------------*/
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

/*----------------------------------------------------------------------------------------------*/
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

/*----------------------------------------------------------------------------------------------*/
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

/*----------------------------------------------------------------------------------------------*/
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

/*----------------------------------------------------------------------------------------------*/
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

/*----------------------------------------------------------------------------------------------*/
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

/*----------------------------------------------------------------------------------------------*/
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

/*----------------------------------------------------------------------------------------------*/
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

/*----------------------------------------------------------------------------------------------*/
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
     //strcmp()比較字串，前大於後 true=1，相等0，小於-1
     if (n>0) {
          printf("%s大於%s\n", str2, str4);
     } else if (n==0) { //n==0
          printf("%s等於%s\n", str2, str4);
     } else {
          printf("%s小於%s\n", str2, str4);

     }
     n=strncmp(str2, str4, 5);
     if (n>0) {
          printf("%s前五個字元大於%s前五個字元\n", str2, str4);
     } else if (n==0) {  //n==0
          printf("%s前五個字元等於%s前五個字元\n", str2, str4);
     } else {
          printf("%s前五個字元小於%s前五個字元\n", str2, str4);
     }
     return 0;
}

/*----------------------------------------------------------------------------------------------*/
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

/*----------------------------------------------------------------------------------------------*/
//a125. T604
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main () 
{
    char ch, ch2;
    printf("請輸入一小寫的英文字母: ");
	scanf("%c",&ch);
	//將下列的字元轉為大寫
    	ch2=toupper(ch); //toupper
    printf("\n%c的大寫是%c", ch, ch2); //\n

	getchar(); //getchar();

	//將下列的字元轉為小寫
    printf("\n請輸入一大寫的英文字母: ");
    scanf("%c", &ch);
    	ch2=tolower(ch); //tolower
    printf("%c的小寫是%c", ch, ch2);
return 0;
}

/*----------------------------------------------------------------------------------------------*/
//a126. T605
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
     char ch, ch2;
     printf("請輸入一小寫的英文字母: ");
     scanf("%c", &ch);
//將下列的字元轉為大寫
     ch2=toupper(ch);
     printf("%c的大寫是%c", ch, ch2);
     while (getchar() != '\n') {//將使用者多輸入的東西消耗掉
        continue;
     }
//將下列的字元轉為大小寫
     printf("\n請輸入一大寫的英文字母: ");
     scanf("%c", &ch);
     ch2=tolower(ch);
     printf("%c的小寫是%c", ch, ch2);
     return 0;
}

/*----------------------------------------------------------------------------------------------*/
//a127. T606
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
int main () {
	char chrary[10];
	int i,k;
	char ch;
    k=0;
    printf("請輸入一字元: ");
    	scanf("%c", &ch);
//將一行多餘的字元丟掉
    while (getchar()!='\n') {
    	continue;
    
    while(ch!='*'){
    	chrary[k]=ch;
    	k++;
        printf("請輸入一字元: ");
    	    scanf("%c", &ch);
//將一行多餘的字元丟掉
    while (getchar() != '\n'){
        continue;
        } 
    }
    printf("\n以下是您輸入的資料:\n");
     for(i=0;i<k;i++)
    	printf("  %c\n",chrary[i]);
    	

return 0;
}

/*----------------------------------------------------------------------------------------------*/
//a128. T607
#include <stdio.h>
#include <stdlib.h>
int main () 
{
     char str[9];
     char *pstr;
     printf("請輸入str字串: ");
     	scanf("%s", str);
     printf("請輸入pstr字串: ");
     pstr=(char *)malloc(sizeof(char ));
    	 scanf("%s", pstr);
     printf("\n您輸入str字串如下: %s\n", str);
     printf("您輸入pstr字串如下: %s\n", pstr);
     return 0;
}

/*----------------------------------------------------------------------------------------------*/
//a129. T608
#include <stdio.h>
#include <stdlib.h>
int main () 
{
     char str[20]="Apple iPhone 4"; //空間不夠 
     char sttr[]={'i', 'P', 'a', 'd','\0'}; //,'\0' 結尾
     char *pstr="Apple iPod";
     printf("str字串如下: %s\n", str);
     printf("sttr字串如下: %s\n", sttr);
     printf("pstr字串如下: %s\n", pstr);
     return 0;
}

/*----------------------------------------------------------------------------------------------*/
//a130. T609
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () 
{
     char str1[]="iPhone 4";
     char str2[40]="Apple iPod";
     char str3[40]="Apple ";
     char str4[40];
     strncat(str3,str1, 5);
     strncpy(str4, str2+6, 5);
     printf("%s\n", str3);
     printf("%s\n", str4);
     return 0;
}

/*----------------------------------------------------------------------------------------------*/
//a131. T610
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
      char name[10][20];
      int score[10];
      char na[20];
      int sc;
      int k=0,i;
      printf("請輸入姓名: ");
      scanf("%s",&na);
      printf("請輸入分數: ");
      scanf("%d",&sc);
      while(sc!=-100) {
            strcpy(name[k],na);
            score[k]=sc;
            printf("請輸入姓名: ");
            scanf("%s",na);
            printf("請輸入分數: ");
            scanf("%d",&sc);
            k++; //k++
      }
      printf("\n以下是您輸入的資料:\n");
      for(i=0;i<k;i++){ //i<k
            printf("%-10s %3d\n", name[i], score[i]);
      }
}
