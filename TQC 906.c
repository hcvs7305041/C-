#include <stdio.h>
#include <stdlib.h>

int main() {
	struct student{
		char name[20];
		int score;
	};
	
 	struct student st[5];
	int i;
	for(i=0;i<5;i++){
		printf("請輸入第%d位同學的姓名:",i+1);		
		 scanf("%s",&st[i].name);
		printf("請輸入第%d位同學C語言的分數:",i+1);
		 scanf("%d",&st[i].score);
 	}
 	printf("\n");
 	for(i=0;i<5;i++){
 		printf("%-20s  %3d",st[i].name,st[i].score);
 		printf("\n");
	}
	return 0;
}

/*
Petet
90
Jennifer
98
Amy
92
Nancy
80
Mary
78
*/
