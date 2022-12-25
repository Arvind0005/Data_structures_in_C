class Solution {
    public void quickSort(int[] nums,int start,int end)
    {
        if(start<end)
        {

            int i=start,p=start,j=end,temp=0;
            while(i<j)
            {
                while(nums[i]<=nums[p] && i<end)
                    i++;
                while(nums[j]>nums[p] && j>=0)
                    j--;
                if(i<j)
                {
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
                // i++;
                // j--;
            }

            temp=nums[j];
            nums[j]=nums[p];
            nums[p]=temp;
            quickSort(nums,start,j-1); //left side of peviot
            quickSort(nums,j+1,end); //right side of piviot
        }
    }
    public void sortColors(int[] nums) {
        quickSort(nums,0,nums.length-1);
    }
}
