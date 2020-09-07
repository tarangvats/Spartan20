#include <stdio.h>

int main(void) 
{
	int t ;
	scanf("%d",&t);
	int a;
	scanf("%d",&a);
	int arr[a];
	for(int i = 0; i<a ;i++)
	{
		scanf("%d ",&arr[i]);
	}
	int l = arr[0];
	int k = 0;
	for(int i = 0 ; i<a ; i++)
	{
		if(l<arr[i])
		{
			l = arr[i];
			k = i ;
			
		}
			
	}
	int sum = l ;
	for(int i = 0 ; i<a ;i++)
	{
		if((sum < sum + arr[i]) && arr[i]!=l)
			sum = sum + arr[i] ;
	}
	
	printf("%d",sum);
	return 0;
}
