#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,x;
    cin>>n>>k>>x;
    long long arr[n];
    for(long long i=0; i<n; i++)
        cin>>arr[i];
    sort(arr, arr+n);
    long long sum=0, grp=1;
    for(long long i=1; i<n; i++)
    {
        if(arr[i]-arr[i-1]>x)
            grp++;
    }
    long long arr1[grp-1];
    long long j=0;
    for(long long i=1; i<n; i++)
    {
        if(arr[i]-arr[i-1]>x)
        {
            arr1[j]=arr[i]-arr[i-1];
            //cout<<arr1[j]<<" ";
            j++;
        }
    }
    for(long long i=0; i<j; i++)
    {
        arr1[i]=(arr1[i]-1)/x;
        //cout<<arr1[i]<<" ";
    }
    sort(arr1, arr1+j);
    for(long long i=0; i<j; i++)
    {
        if(k>=arr1[i])
        {
            grp--;
            k-=arr1[i];
        }
        else
            break;
    }
    cout<<grp<<endl;

}