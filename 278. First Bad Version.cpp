// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=0;
        int high= n;
        int ans=INT_MAX;

        while(start <= high)
        {
            int mid = start+(high-start)/2;

            bool res= isBadVersion(mid);

            if(res){
                ans=min(ans,mid);
                high=mid-1;
            }
            else{
                start=mid+1;
            }

        }
        return ans;
        
    }
};
