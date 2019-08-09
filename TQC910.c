
#include<stdlib.h>
#include<stdio.h>

int main(){    
 	struct node{
  		char name[10];
  		int score;
 		struct node* next;
 	};
 	struct node *a,*b,*c,*current;
 	a=malloc(sizeof(struct node));//配置動態記憶體大小方式
 	printf("請輸入第一位學生姓名: ");
 	 scanf("%s",a->name);
 	printf("分數: ");
 	 scanf("%d",&a->score );
 	a->next=NULL;
 	
 	b=malloc(sizeof(struct node));
 	printf("請輸入第二位學生姓名: ");
 	 scanf("%s",b->name);
 	printf("分數: ");
 	 scanf("%d",&b->score );
	a->next=b;
	b->next=NULL;
	
	c=malloc(sizeof(struct node));
	printf("請輸入第三位學生姓名: ");
	 scanf("%s",c->name);
	printf("分數: ");
	 scanf("%d",&c->score );
	b->next=c;
	c->next=NULL;
 /*----------------------下面面-----------------------------*/
	printf("\n輸出...\n");
	current = a;
	while(current!=NULL){
		printf("學生: %s\n",(*current).name);
		printf("分數: %d\n\n",(*current).score);
		current=(*current).next;//每顯示完畢後一次，將指標指給下一個
	}
	free(a);//釋放記憶體
	free(b);
	free(c);

	return 0;
}
