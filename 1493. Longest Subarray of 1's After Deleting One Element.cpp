class Solution {
public:
   int findLongest(vector<int>& nums,int skip_index)
   {
       int count=0;
       int maxint=0;
        int n=nums.size();
       for(int j=0;j<n;j++)
       {
           if(j==skip_index)
            continue;
            if(nums[j]==1)
            {
                count++;  
                maxint=max(count,maxint);
            }
            else{
                count=0;
            }

       }
       return maxint;
   }
    int longestSubarray(vector<int>& nums) {
        
        int n= nums.size();
        int result=INT_MIN;
        int countZero =0;

        for(int i=0;i < n;i++)
        {
            if(nums[i]==0)
            {
                countZero++;
                result =max(result,findLongest(nums,i));
            }
        }

        if( countZero==0)
        {
            return n-1;
        }
        
            return result;
        
    }
};
