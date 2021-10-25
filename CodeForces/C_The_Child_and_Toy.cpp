#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    long long ans=0;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        ans+=min(arr[a-1], arr[b-1]);
        
    }
    cout<<ans;
}