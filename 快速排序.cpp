void puicksort (int a[],int left,int right)
{
	int i, j, key;
	if(left<right)  
	{
		key=a[left];	//設第一個為基準 
		i=left+1;		//從陣列第二個開始 (0~10->0~9) 
		j=right-1;		//從陣列最後一個開始 (0~10->0~9) 
		while(i<j)
		{ 
			while(a[i]<key) i++;	//向右找比key小的 
			while(a[j]>key) j--;	//向左找比key大的 
			if (i<j) swap(a[i],a[j]);	//比key大放到右邊 和比key小放到左邊  
		}
		swap(a[left],a[j]);  //基準值交換 
		puicksort(a,left,j-1);  //"開頭"到中間基準的上一個 
		puicksort(a,j+1,right); //中間基準的下一個到"結尾"
	}
}

void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
