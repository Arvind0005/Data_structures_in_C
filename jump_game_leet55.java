class Solution 
{
    public boolean canJump(int[] nums) {
    boolean res[]= new boolean[nums.length];
    res[nums.length-1]=true;
    for(int i=nums.length-2;i>=0;i--)
    {
        if(i==nums.length-2)
        {
            if(nums[i]>=1)
                res[i]=true;
        }
        for(int j=i+1;j<=i+nums[i];j++)
        {
            if(res[j]==true)
            {
                res[i]=true;
                break;
            }
            if(res[j]!=true && j==i+nums[i])
            {
                res[i]=false;
            }
        }
    }
     return res[0];
    }
}
