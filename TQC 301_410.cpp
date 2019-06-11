//a092. T301
#include <stdio.h>
#include <stdlib.h>
void Star();

int main () 
{
     printf("呼叫印出星星的函數!!!\n");
     Star();
     printf("我喜歡學C程式語言\n");
     Star();
     printf("結束函數的呼叫!!!\n");
     return 0;
}


//a093. T302
#include <stdio.h>
#include <stdlib.h>
int adjust(int);
int main () 
{
     int score, final;
     printf("請輸入您的分數: ");
     scanf("%d", &score);

     final = adjust(score); //final = 

     printf("調整後的分數: %d", final);
     return 0;
}

int adjust(int score)
{
	int temp; //宣告temp 
     if (score >= 60) 
          temp = score + 5; //5
     else 
          temp = score + 10; //10

     return temp;
}

//a094. T303
#include <stdio.h>
#include <stdlib.h>

int num = 100;
void subFun();
int main()
{
     printf("在main函數中的num為%d\n", num+100);
     subFun();
     return 0;
}

void subFun()
{
     printf("在subFun函數中的num為%d\n", num);
}
//a095. T304
#include <stdio.h>
#include <stdlib.h>

void callFun();
int main()
{
     int i;
     for (i=1; i<=5; i++) {
          callFun();
     }
     return 0;
}

void callFun()
{
     int ai=100;
	 static si=100;
	 //static 全域變數，
	 //全域宣告過後，重複宣告就沒意義，因此會累加。
     ai++;
     si++;
     printf("ai=%d, si=%d\n", ai, si); //\n
}

//a096. T305
#include <stdio.h>
#include <stdlib.h>
int x, y;
int callTotal();

int main()
{
     int tot;
     printf("請輸入x, y的值: ");
     scanf("%d %d", &x, &y);
     tot=callTotal();
     printf("%d+%d=%d\n", x, y, tot);
     return 0;
}

//CPD03-2.c的程式如下：
int callTotal()
{
     int sum,x,y;
     sum = x+y;
     return sum;
}

//a097. T306
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int arr[6]={10, 20, 30, 40, 50, 60}; //陣列[6] 
     int i, total=0;
     for (i=0; i<6; i++) { //i=0
          total += arr[i];
     }
     printf("總和為%d\n", total); //%d
     return 0;
}

//a098. T307
#include <stdio.h>
#include <stdlib.h>

int main()
{
     double arr2[2][3], total=0.0;
     int i, j;
     for (i=0; i<2; i++) 
          for (j=0; j<3; j++) {
               printf("請輸入arr[%d][%d]的值: ", i, j);
               scanf("%lf", &arr2[i][j]);
               total += arr2[i][j];
          }
     printf("總和為%.2f\n", total);
     return 0;
}
//a099. T308
#include <stdio.h>
#include <stdlib.h>

double sum(double a[], int n);
int main () 
{
     double arr[5],total=0; //total浮點數 
     int i;
     for(i=0; i<5; i++) {
          printf("請輸入陣列arr[%d]元素值: ", i);
          scanf("%lf", &arr[i]); //&
     }
     for(i=0; i<5; i++)
          printf("arr[%d]=%.2lf\n", i, arr[i]);
     total=sum(arr,i);
     printf("此陣列的總和為%.2lf\n", total);
     return 0;
}

double sum(double a[], int n) //double
{
     int k;
     double tot;
     for(k=0; k<n; k++) //k=0
          tot += a[k];
     return tot;
}

//a100. T309
#include <stdio.h>
#include <stdlib.h>

int max(int a[], int n);
int main () 
{
     int arr[5], i, maximum;
     for(i=0; i<5; i++) {
          printf("請輸入陣列arr[%d]元素值: ", i);
          scanf("%d", &arr[i]);
     }
     for(i=0; i<5; i++)
          printf("arr[%d]=%d\n", i, arr[i]);
     maximum = max(arr, 5);
     printf("此陣列最大值為%d\n", maximum);
     return 0;
}

int max(int a[], int n)
{
     int k, M;
     M=a[0];  
     for(k=1; k<n; k++){
          if (a[k]>M) {
               M=a[k];
          }
     }
     return M;
}
//a101. T310
#include <stdio.h>
#include <stdlib.h>
int main () 
{
     int arr[5]={100, 200, 300, 400, 500};
     int i;
     printf("\n表達陣列元素的值方式一:\n");
     for (i=0; i<5; i++) //i=0
     {
        printf("arr[%d]=%d\n", i, arr[i]);
     }
     printf("\n表達陣列元素的值方式二:\n");
     for (i=0; i<5; i++) //i=0
     {
        printf("arr[%d]=%d\n", i, *(arr+i));
     }
     printf("\n表達陣列元素的值方式三:\n");
     int *p=arr;
     for (i=0; i<5; i++,p++)
     {
        printf("arr[%d]=%d\n", i,*p); //%p位址改 %d
     }
     printf("\n陣列元素的位址比較:\n");
      for (i=0; i<5; i++) //i=0
      {
           printf("&arr[%d]==arr+%d is %s\n", i, i,(arr[i]==*(arr+i)?"yes":"no"));
      }
     return 0;
}

//a102. T401
#include <stdio.h>
#include <stdlib.h>
int main () 
{
 int num=100, *pointer;
 pointer=&num;
 printf("num=%d, *pointer=%d\n", num, *pointer);
 return 0;
}
//a103. T402
#include <stdio.h>
#include <stdlib.h>
int main () 
{
 int num=100;
 int *pointer=&num;
 printf("num=%d, *pointer=%d\n", num, *pointer);
 return 0;
}
//a104. T403
#include <stdio.h>
#include <stdlib.h>
int main () 
{
    int arr[]={100, 200, 300, 400, 500};
    int *pointer=arr;
    int i;
  
    for (i=0; i<5; i++) {
       printf("arr[%d]=%d\n", i, arr[i]);
    }
 
 //另一種表示方法
    printf("\n另一種表示方法\n");
    for (i=0; i<5; i++) {
        printf("arr[%d]=%d\n", i, *(arr+i));
    }
 
 //第三種表示方法
    printf("\n第三種表示方法\n");
    for (i=0; i<5; i++) {
       printf("arr[%d]=%d\n", i, *(pointer+i));
    }
    return 0;
}
//a105. T404
#include <stdio.h>
#include <stdlib.h>
int main () 
{
    int arr[2][3];
	int i, j;
	for (i=0; i<2; i++) {
		for (j=0; j<3; j++) {
        	printf("請輸入陣列arr[%d][%d]元素值:", i, j);
        	scanf("%d", &arr[i][j]);
  		}
	}
 
	for (i=0; i<2; i++) {
		for (j=0; j<3; j++) {
        printf("arr[%d][%d]=%d\n", i, j, arr[i][j]);
  		}
  	}
 
//另一種表示方法
	printf("\n另一種表示方法\n");
	for (i=0; i<2; i++) {
		for (j=0; j<3; j++) {
			printf("arr[%d][%d]=%d\n", i, j, *(arr[i]+j));
		}
	}
  
//第三種表示方法
	printf("\n第三種表示方法\n");
	for (i=0; i<2; i++) {
		for (j=0; j<3; j++) {
			printf("arr[%d][%d]=%d\n", i, j, *(*(arr+i)+j));
		}
	}
return 0;
}
//a106. T405
#include <stdio.h>
#include <stdlib.h>
int main () 
{
    int arr[2][3]={100, 200, 300, 400, 500, 600};
    int *ptr2[2]={arr[0], arr[1]};
    int i, j;
 
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++) {
           printf("arr[%d][%d]=%d\n", i, j, arr[i][j]);
       }
    }
 
//另一種表示方法
    printf("\n另一種表示方法\n");
    for (i=0; i<2; i++) {
       for (j=0; j<3; j++) {
          printf("arr[%d][%d]=%d\n", i, j, *(arr[i]+j));
       }
    }
 
//第三種表示方法
    printf("\n第三種表示方法\n");
    for (i=0; i<2; i++) {
       for (j=0; j<3; j++) {
          printf("arr[%d][%d]=%d\n", i, j, *(*(ptr2+i)+j));
       }
    }
    return 0;
}
//a107. T406
#include <stdio.h>
#include <stdlib.h>
void change(int *, int *);
int main ( ) 
{
	int i=100, j=200;
	printf("交換前i與j的值: \n");
	printf("i=%d, j=%d\n", i, j);

	change(&i, &j);
	printf("交換後i與j的值: \n");
	printf("i=%d, j=%d\n", i, j);

	return 0;
}

void change(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
//a108. T407
#include <stdio.h>
#include <stdlib.h>
int sum(int *, int n);
int main ( )
{
 int arr[]={10, 20, 30, 40, 50};
 int total, i;
 for (i=0; i<5; i++) {
  printf("arr[%d]=%d\n", i, arr[i]);
 }
 total=sum(arr, 5);
 printf("total=%d\n", total);

 return 0;
}
int sum(int *p, int n)
{
 int i, tot=0;//加總初始值記得要歸0
 for (i=0; i<n; i++) {//開始的位置為i=0
  tot += *(p+i);//把記憶體的資料累加
 }
 return tot;
}
//a109. T408
#include <stdio.h>
#include <stdlib.h>

int Max(int *, int n);
int main ( ) 
{
	int arr[5];
	int maximum, i;
 
	for (i=0; i<5; i++) {
		printf("請輸入arr[%d]元素值: ", i);
		scanf("%d", &arr[i]);
	}
 
	printf("\n陣列的元素值分別如下:\n");
	for (i=0; i<5; i++) {
		printf("arr[%d]=%d\n", i, arr[i]);
}
  
	maximum= Max(arr, 5);
	printf("\n此陣列的最大值為%d\n", maximum);
 

return 0;
}

int Max(int *p, int n)
{
	int i, maxi_value=*p;
	for (i=0; i<n; i++) {
		if (maxi_value < *(p+i)) {
			maxi_value=*(p+i);
		}
	}
return maxi_value;
}
//a110. T409
#include <stdio.h>
#include <stdlib.h>
int sum(int *p, int n, int m);
int main ( ) 
{
    int arr2[2][3];
    int total, i, j;
 
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++) {
            printf("請輸入arr[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
 
    printf("\n陣列之值如下:\n");
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++) {
            printf("arr[%d][%d]=%d\n", i, j, arr2[i][j]);
        }
     }
  
    total=sum(arr2, 2, 3);
    printf("\n此陣列的總和為%d\n", total);
    return 0;
}

int sum(int *p, int x, int y)
{
    int i, j, tot=0;
    for (i=0; i<x; i++) {
        for (j=0; j<y; j++) {
            tot += *(p+i*y+j);
        }
    }
    return tot;
}
//a111. T410
#include <stdio.h>
#include <stdlib.h>
int Max(int *p, int n, int m);
int main ( ) 
{
	int arr2[2][3];
	int maximum, i, j;

	for (i=0; i<2; i++) {
		for (j=0; j<3; j++) {
			printf("請輸入arr[%d][%d]: ", i, j);
			scanf("%d", &arr2[i][j]);
		}
	}
 
	printf("\n陣列之值如下:\n");
	for (i=0; i<2; i++) {
		for (j=0; j<3; j++) {
			printf("arr[%d][%d]=%d\n", i, j, arr2[i][j]);
		}
	}
  
	maximum=Max(&arr2[0][0], 2, 3);
	printf("\n此陣列的最大值為%d\n", maximum);
	return 0;
}
int Max(int *p, int x, int y)
{
	int i, j, maxi_value=*p;
	for (i=0; i<x; i++) {
		for (j=0; j<y; j++) {
			if (maxi_value < *(p+i*y+j)) {
				maxi_value = *(p+i*y+j);
			}
 		}
	}
	return maxi_value;
}
