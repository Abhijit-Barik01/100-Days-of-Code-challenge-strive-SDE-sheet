class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int k=0;
         vector<int>c(m+n);
        while(i <m && j< n)
        {
            if(nums1[i] <= nums2[j])
            {
                c[k]=nums1[i];
                k++;
                i++;
            }
            else{
                c[k]=nums2[j];
                j++;
                k++;
            }
        }
        
        while(i <m)
        {
           c[k++]=nums1[i];
                i++; 
        }
        
         
        while(j <n)
        {
           c[k++]=nums2[j];
                j++; 
        }
        for(int i=0;i<n+m;i++)
        {
            nums1[i]=c[i];
        }
        
    }
};
