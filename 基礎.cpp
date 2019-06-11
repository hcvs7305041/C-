/*==========函式庫========== */
#include <stdio.h>      //標準輸入輸出函數
#include <stdlib.h>     //數值與字串轉換.記憶體配置.亂數與其他有用函數
#include <iostream.h>   //標準輸入輸出函數
#include <math.h>       //數算運算函數
#include <string.h>     //C-形態字串處理函數
#include <algorithm.h>  //標準資料庫容器處理資料庫的函數
#include <functional.h> //標準資料庫演算的類別與函數
#include <time.h>       //處理時間日期函數
#include <memory.h>     //標準資料庫記憶體配置的類別與函數

/*==========主程式========== */
int main() {
	
/*-----宣告-----*/
int x;    //(short、int)     宣告整數變數 x
float y;  //float、double    宣告浮點數(小數)變數 y
char z;	  //宣告字元變數 z
	
/*-----輸入-----*/	
scanf("%d",&x); //輸入整數	
scanf("%f",&y); //輸入浮點數
scanf("%c",&z); //輸入字元
scanf("%s",&z); //輸入字串
	
/*-----輸出-----*/
printf("%d",x); //輸出整數
printf("%f",x); //輸出浮點數
printf("%c",x); //輸出字元
printf("%s",x); //輸出字串
	
/*-----迴圈-----*/
while(i>0)            //while(條件) 
for(int i=0;i<10;i++) //for(設定i=0;條件;)
while(true)           //沒有中斷的情況下，會永遠執行下去
	break;        //放在迴圈中 用於中斷迴圈
	
/*-----如果&否則-----*/
if( i=0 )//if( 條件 )
{
    //如果條件成立時做什麼...
}
else
{
    //否則做什麼...
}
	
/*-----陣列-----*/
int a[10]; //宣告陣列a[0]~a[9]
	
	
/*==========================*/	
	system("pause");   //暫停畫面
	return 0;          //程式結束，int傳回一個整數值
}
