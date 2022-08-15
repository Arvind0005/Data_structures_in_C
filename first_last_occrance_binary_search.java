/*Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.
  
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]*/
class Solution {
    public int[] searchRange(int[] arr, int target) {
        int size = arr.length;
        int left = 0;
        int right = size-1;
        int result[] = new int[2];
        int mid = ((left+right)/2);
        int lindex=-1;
        boolean flag =false;
        while(left<=right)
        {
            mid = ((left+right)/2);
            if(target==arr[mid])
            {
                lindex = mid;
                right=mid-1;
                flag = true;
            }
            if(target<arr[mid])
            {
                if(flag)
                    break;
                right=mid-1;
            }
            else if(target>arr[mid])
            {
                left = mid+1;
            }
            if(left==right || left==mid)
            {
                if(arr[left]==target)
                    lindex =left;
                break;
            }
        }
        flag=false;
        left = 0;
        right = size-1;
        mid = ((left+right)/2);
        int rindex=-1;
        while(left<=right)
        {
            mid= ((left+right)/2);
            if(target==arr[mid])
            {
                rindex=mid;
                left = mid+1;
                flag=true;
            }
            if(target>arr[mid])
            {
                if(flag)
                    break;
                left=mid+1;
            }
            else if(target<arr[mid])
            {
                right=mid-1;
            }
            if(left==right || mid==right)
            {
                if(arr[right]==target)
                    rindex=right;
                break;
            }
        }
        result[0]=lindex;
        result[1]=rindex;
        return result;
    }
}
