#include<stdio.h>
int binary_search_rec(int *arr,int n,int se,int low, int high)
{
	if(low>high) return -1;
	else{
	
	int mid;
    mid=(low+high) / 2;
    if(se==arr[mid]) return mid;
	else
	if(se>arr[mid])
	binary_search_rec(arr,n,se,mid+1,high);
	if(se<arr[mid])
	binary_search_rec(arr,n,se,low,mid-1);
    
}
	return -1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int se;
	scanf("%d",&se);
	int res = binary_search_rec(arr,n,se,0,n-1);
	if(res == -1)
	{
		printf("Element is not found");
	}
	else
	{
		printf("found at index %d",res);
	}
	
	
	
}
