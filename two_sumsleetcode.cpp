#include<vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            if(umap.find(target-nums[i])!=umap.end())
            {
                
                result.push_back(i);
                result.push_back(umap[target-nums[i]]);
                return result;
            }
            umap[nums[i]]=i;
        }
        return result;
     
    }
};
