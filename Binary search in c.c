//Binary search in c.
//It is the fastest search algoritm in array.
//The array is divided into parts by the mid value and searches the element. 
//In order to binary search the array should be sorted in assending order
#include<stdio.h>
int main()
{
	int arr[8]={1,2,3,4,5,6,7,8};			//Array arr is declared with the size 8.
	int i,LB,UB,mid,found=0,item,z=0; 
	scanf("%d",&item);						//The item to be searched is got from the user 
	LB=0;									//The least index of the array is stored in the LB. 
	UB=8;									//The most index of the array is stored in the UB.
	mid=(LB+UB)/2;							//The mid value of the array is stored in the mid. 
	for(i=0;i<=UB;i++)						//For loop runs all the elements in the array. 
	{
		if(item==arr[mid])					// if the item equals to the mid array value the value is stored in the found			
		{
			found=arr[mid];
			z=i;
			break;
		}
		if(item>arr[mid])					//if the item is greater than the mid value the least index is moved to the next index of mid
		{
			LB=mid+1;
		}
		else								//if the item is lesser than the mid array value the most index is moved to the before index of mid
		{
			UB=mid-1;
		}
		mid=(LB+UB)/2;
	}
	if(found==0)
	{
		printf("there is no %d element in the array",item);
	}
	if(found==item)							//printing the output when the element is found.							
	{
		printf("The given element %d is present in the array",found);
	}
	return 0;
}
