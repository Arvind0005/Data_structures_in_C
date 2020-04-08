//Linear search in c.
//To find weather a given element(5 here) is present in the array or not by linear search algorithm.
//linear search dosent require the array to be sorted but we'll use sorted array here.
//linear runs all the elements in the array in order fo find the given element 
#include<stdio.h>
int main()
{
	int i,arr[]={1,2,3,4,5},item;	//array arr is declared and initialized.
	scanf("%d",&item);				//item to be searched is got from the user.
	for (i=0;i<=4;i++)				//for loop for searching the given element in the array arr with the size of 4.
	{
		if(arr[i]==item)			//if condition to find the arr[i] is equal to the given element.
		{
			printf("%d is present as %d element in the array",arr[i],i);
		}
	}
	return 0;
}
