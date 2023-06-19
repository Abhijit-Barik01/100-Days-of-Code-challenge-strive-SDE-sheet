#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.


int ans =-1;
sort(arr.begin(),arr.end());
for(int i=0;i<n; i++)
{
  int val =arr[i];
  val =val^arr[i+1];
  if(val ==0)
  {
    ans= arr[i];
    break;
  }
  
}
//cout<<val;
return ans;


}
