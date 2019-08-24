void shellsort (int a[],int n);
void swap(int *a, int *b);



void shellsort (int a[],int n){
	n=n-1; //陣列0~9 
	int i, j , gro=n/2; 
	while(gro>0){  
		for(i=0;(i+gro)<n;i++){  
			if(a[i]>a[i+gro]){
				swap(&a[i],&a[i+gro]);
			}
		}
	//cout << gro <<  "  ";
	gro=gro/2;
	}	
}

void swap(int *a, int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
