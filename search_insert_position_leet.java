/*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2*/


class Solution {
    public int searchInsert(int[] arr, int target) {
        int size=arr.length;
        int left = 0;
        int right = size-1;
        int mid = (left+right)/2;
        while(left<=right)
        {
            mid = (left+right)/2;
            if(arr[mid]==target)
            {
                return mid;
            }
            if(target<arr[mid])
            {
                right= mid-1;
            }
            else if(target>arr[mid])
            {
                left=mid+1;
            }
        }
    //    return mid;
        if(target>arr[mid])
        {
            return mid+1;
        }
        else
        {
            if(mid!=0)
                if(arr[mid-1]<target)
                    return mid;
                else
                    return mid-1;
            return mid;
        }
    }
}
