#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,l,r;
        cin>>n>>l>>r;
        long long arr[n];
        for(long long i=0; i<n; i++)
            cin>>arr[i];
        long long a=0, sum=0;
        sort(arr, arr+n);
        /*for(int i=0; i<n-1; i++)
        {
            if((arr[i]+arr[n-1])<l)
                continue;
            for(int j=i+1; j<n; j++)
            {
                long long b=arr[i]+arr[j];
                if(b<l)
                    continue;
                else if(b>r)
                    break;
                else
                {
                    a++;
                }
            }
        }*/
        for(int i=n-1; i>=1; i--)
        {
            for(int j=n-2; j>=0; j--)
            {
                
            }
        }
        cout<<a<<endl;

    }
}