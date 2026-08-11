#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5];
	int i;
	int key;
	
	int mid;
	int n=5;
	int low = 0;
	int high = n - 1;
	
	int find = 0;
	
	printf("enter 5 numbers sorted(in assending order) \n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter number to be found\n");
	scanf("%d",&key);
	
	for(i=0 ; i<5 ; i++)
	{
		mid = (low+high)/2;
		
		if (key == arr[mid])
		{
			find = 1;
			break;
		}
		else if(arr[mid]<key)
		{
			low = mid + 1;
		}
		else 
		{
			high = mid - 1;
		}
	}
	
	if (find == 1)
	{
		printf("number %d found at index %d",key,arr[mid]);
	}
	else
	{
		printf("number not found");
	}
	getch();
	
}
