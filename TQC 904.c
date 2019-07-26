//CPA09-1
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *std;
	char name[20];
	int score;
	std=fopen("score.dat","w");
	do{
		printf(" 請輸入學生的姓名(分數輸入負分時結束)：");
		 scanf("%s",&name);
		printf("此學生C語言分數：");
		 scanf("%d",&score);
		if(score>=0) {
			fprintf(std ,"%s %d" , name, score);}
	}while(score>=0);
	fclose(std);
	system("PAUSE");
	return 0;
}

/*----------------------------------------------------------------------------------------------*/
//CPA09-2
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *std;
	char name[20];
 	int score;
 	std=fopen("score.dat", "r");
 	while(fscanf(std,"%s %d",name ,&score) != EOF){
 		printf("%s的C語言分數是%d\n",name,score);
	}
 	fclose(std);
 	system("pause");
	return 0;
}

/*---------------------------------------------------------------------------------------------*/

/*
Peter
90
Mary
80
Nancy
88
John
-2
*/
