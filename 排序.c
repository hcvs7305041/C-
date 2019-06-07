void sorting (int*,int);

void sorting (int *x,int n){ //大到小
	int a,b,c;
	for(a=0;a<n;a++){
		for(b=0;b<n;b++){
			if(x[b]>x[a]){
				c=x[b];
				x[b]=x[a];
				x[a]=c;
			}
		}
	}
}

/*
void sorting (int *x,int n){ //小到大
	int a,b,c;
	for(a=0;a<n;a++){
		for(b=0;b<n;b++){
			if(x[b]<x[a]){
				c=x[b];
				x[b]=x[a];
				x[a]=c;
			}
		}
	}
}
*/
