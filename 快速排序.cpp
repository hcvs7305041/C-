void puicksort (int a[],int left,int right)
{
	int i, j, key;
	if(left<right)
	{
		key=a[left];
		i=left+1;
		j=right-1;
		while(i<j)
		{ 
			while(a[i]<key) i++;
			while(a[j]>key) j--;
			if (i<j) swap(a[i],a[j]);
		}
		swap(a[left],a[j]);  //基準值交換 
		puicksort(a,left,j-1);
		puicksort(a,j+1,right);
	}
}

void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
