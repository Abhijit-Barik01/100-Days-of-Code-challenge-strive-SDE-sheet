#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int median(vector<vector<int>>&matrix,int R, int C)
 {
 int N =R*C;
 int start=1;
 int end=2000;
 int medianIndex = N/2;
  while(start <=end)
  {

      int assumemedian = start +(end -start)/2;
      

       int lesserElements = findSmallerElement(matrix,assumemedian);
       if(lesserElements <= medianIndex )
       {
        start= assumemedian +1;
       }
       else{
        end=assumemedian-1;
       }




  }

  return start;


 }

int findSmallerElement(vector<vector<int>>matrix,int assumedmedian){
int noOfSmallerEelement=0;
for(int i=0; i< matrix.size();i++)
{

 int start=0;
 int end= matrix[i].size() -1;

 while (start <= end)
 {
    int mid= start+(end- start)/2;
    if(matrix[i][mid] <= assumedmedian)
    {
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    
 }
 
noOfSmallerEelement+=start;

}

return noOfSmallerEelement;

 }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
