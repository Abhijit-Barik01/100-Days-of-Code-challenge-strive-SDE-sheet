#include<bits/stdc++.h>
using namespace std;
long long maxSub(int arr[], int n)
{
    long long maxi = LONG_MIN;
    long long sum=0;

    int start =0;
    int ansStart=-1, ansEnd =-1;
     for(int i=0; i< n ;i++)
     {

       if(sum ==0) start=i;

        sum+= arr[i];
        if(sum > maxi)
        {
            maxi= sum;
            
            ansStart=start;
            ansEnd=i;

        }
        if(sum < 0)
        {
            sum=0;
        }


     }

     for( int i=ansStart; i<ansEnd; i++)
     {
        cout<< arr[ansStart++]<<endl;
     }

}

int main()
{

    int arr[]={-2,1,-3, 4, -1, 2, 1, -5, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    long long maxSum= maxSub(arr,n);
     cout << "maximum sub array sum is:"<<maxSum<<endl;

     return 0;
}
