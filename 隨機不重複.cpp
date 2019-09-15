#include<iostream>
#include<stdlib.h>
#include <string>
#include <fstream>
#include <ctype.h>
#include <time.h>
#define size 51

using namespace std;

int main (){
	int math[size]={0};
	int num[size]={-1};
	int n=0,s=0,i=0,j=0;
	char str[51][200];
//==========================================================	
	fstream first;
	first.open("1.txt",ios::in );
	if(!first){
		cout << "檔案無法開啟\n";
		first.close();
		return 0;
	}
	else
	{
		do{
			first.getline(str[s],sizeof(str[s])); 
			//cout << str[s] << endl ;
			s++;
		}while(!first.eof());
	}
	first.close();
//==========================================================
	printf("輸入數量:");
	scanf("%d",&n);
	srand(time(NULL));
	if(n<s){
		for(i=0;i<n;i++){
			num[i]=rand()%s;
			for(j=i-1;j>=0;j--){
				if(num[i]==num[j])
				 	i--;
			}
		}
		for(i=0;i<n;i++){
			cout << str[num[i]] << endl ;
		}
	}
	else{
		cout << "數量過多" << endl ; 
	}
//==========================================================
	system("pause");
	return 0;
}
