class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum1 =0;
        int res = INT_MAX;
        int j = 0;
        for(int i=0; i<n; i++)
        {
            sum1+= nums[i];

            while(sum1 >= target)
            {
                res=min(res,i-j+1);
                
                sum1-=nums[j];
                j++;
            }
        }

        return res == INT_MAX ? 0 : res;
    }
};
