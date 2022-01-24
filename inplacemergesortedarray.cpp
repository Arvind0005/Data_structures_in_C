//merge two sorted array without creating a new array
#include<bits/stdc++.h>
using namespace std;
void solution(int arr1[],int arr2[],int n1,int n2)
{
	for(int i=0;i<n1;i++)
	{
		if(arr1[i]>arr2[0])
		{
			int temp= arr1[i];
			arr1[i]=arr2[0];
			arr2[0]=temp;
			for(int j=1;j<n2;j++)
			{
				if(arr2[j]<arr2[j-1])
				{
					int temp =arr2[j];
					arr2[j]=arr2[j-1];
					arr2[j-1]=temp;
				}
				else
				{
					break;
				}
			}
		}
	}
	for(int i=0;i<n1;i++)
	{
		cout<<arr1[i];
	}
	for(int i=0;i<n2;i++)
	{
		cout<<arr2[i];
	}
}
int main()
{
	int arr1[]={ 1, 4, 7, 8, 10 };
	int arr2[]={ 2, 3, 9 };
	int n1=sizeof(arr1)/sizeof(arr1[0]);
	int n2 =sizeof(arr2)/sizeof(arr2[0]);
	solution(arr1,arr2,n1,n2);
}

//#include <iostream>
//#include <algorithm>
//using namespace std;
// 
//// Utility function to print contents of an array
//void printArray(int arr[], int n)
//{
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
// 
//// Function to in-place merge two sorted arrays X[] and Y[]
//// invariant: `X[]` and `Y[]` are sorted at any point
//void merge(int X[], int Y[], int m, int n)
//{
//    // Consider each element `X[i]` of array `X` and ignore the element if it is
//    // already in the correct order; otherwise, swap it with the next smaller
//    // element, which happens to be the first element of `Y`.
//    for (int i = 0; i < m; i++)
//    {
//        // compare the current element of `X[]` with the first element of `Y[]`
//        if (X[i] > Y[0])
//        {
//            swap(X[i], Y[0]);
//            int first = Y[0];
// 
//            // move `Y[0]` to its correct position to maintain the sorted
//            // order of `Y[]`. Note: `Y[1…n-1]` is already sorted
//            int k;
//            for (k = 1; k < n && Y[k] < first; k++) {
//                Y[k - 1] = Y[k];
//            }
// 
//            Y[k - 1] = first;
//        }
//    }
//}
// 
//int main()
//{
//    int X[] = { 1, 4, 7, 8, 10 };
//    int Y[] = { 2, 3, 9 };
// 
//    int m = sizeof(X) / sizeof(X[0]);
//    int n = sizeof(Y) / sizeof(Y[0]);
// 
//    merge(X, Y, m, n);
// 
//    cout << "X: "; printArray(X, m);
//    cout << "Y: "; printArray(Y, n);
// 
//    return 0;
//}

