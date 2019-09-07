#include<iostream>
#include<stdlib.h>
#include <string>
#include <fstream>
#include <ctype.h>
#include <time.h>
#define size 9999


using namespace std;

int main (){
	int math[size]={0};
	int num[size]={0};
	int a[size]={0};
	int n=0,s=0,i=0,j=0;
	char str[1000][200];
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
//==========================================================
//cout << s;
	scanf("%d",&n);
	srand(time(NULL));
	for(i=0;i<n;i++){
		num[i]=rand()%s;
		for(j=n;j>=0;j--){
			if(a[i]==a[j]&&s!=j)
				num[i]=rand()%s;
		}

		cout << str[num[i]] << endl ;
	}
//==========================================================
	first.close();
	system("pause");
	return 0;
}
