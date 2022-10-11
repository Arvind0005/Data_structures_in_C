/*Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums of unique elements, return the minimum element of this array.*/

class Solution {
    public int findMin(int[] nums) {
        int start=0,end=nums.length-1,mid=(start+end)/2;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(nums[start]<=nums[mid] && nums[start]<=nums[end])
            {
                return nums[start];
            }
            else if(nums[start]>nums[end] && nums[mid]>nums[end])
            {
                    start=mid+1;
            }
            else
            {
                if((mid-start)>1 && nums[mid-1]<nums[mid])
                    end=mid-1;
                else
                    end= mid;
            }
        }
        return 0;
    }
}
