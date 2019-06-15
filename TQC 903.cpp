//a154: T903****************************************************************************************************
#include <iostream>
void greater60(int* ,int );
using namespace std;

int main() {
	int i ,data[6];
	for(i=0;i<6;i++){
		printf("輸入第%d個分數: ",i+1);
		cin >> data[i];
	}
	cout << endl << "您輸入的資料如下" << endl ;
	for(i=0;i<6;i++){
		printf("data[%d]:%d\n",i,data[i]);
	}
	greater60(data,6);
	return 0;
}

void greater60(int* arr,int n){
	int i ,k=0 ;
	for(i=0;i<n;i++){
		if(arr[i]>=60) {
			k++;
		}
	}
		printf("大於等於60分的有:%d個",k);

}
