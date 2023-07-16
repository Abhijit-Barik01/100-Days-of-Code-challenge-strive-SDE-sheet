class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
            int count =0;
            int row =grid[0].size();
            int column = grid.size();
            int i= row -1;
           for(auto rowArr : grid)
           {
               while( i >= 0 && rowArr[i] < 0 )
               {
                   i--;
               }
               count+= (row - (i+1));
           }
     return count;
    }
};
