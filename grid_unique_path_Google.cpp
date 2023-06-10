class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m==1 || n==1)
            return 1;
    
        int right_side=uniquePaths(m -1, n);
        int down_side=uniquePaths(m,n -1);
    return right_side + down_side;
    }
};
