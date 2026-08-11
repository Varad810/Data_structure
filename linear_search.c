#include<stdio.h>
int main()
{
	int arr[]={55,66,77,19,67,90,80};
	int key;
	int i,j=0;
	
	printf("enter number to be found\n");
	scanf("%d",&key);
	
	for(i=0;i<7;i++)
	{
		if(arr[i] == key){
			printf("element %d found at index %d\n",key,i);
			j++;
		}
		else if (i==6 && j==0) {
			printf("element not present\n");
		}
	}
	getch();
}