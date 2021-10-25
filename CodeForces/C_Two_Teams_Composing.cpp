#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr, arr+n);
        int dis=1,max=0,sum=0;
        for(int i=1; i<n; i++)
        {
            if(arr[i]==arr[i-1])
            {
                sum++;
            }
            else
            {
                dis++;
                sum=0;
            }
            if(sum>max)
                max=sum;
        }
        //cout<<max<<" "<<dis<<endl;
        if(n==1)
            cout<<0;
        else if(n>1 && max==0)
        {
                cout<<1;
        }
        else if(dis>max)
        {
            dis--;
            max++;
            if(max<=dis)
                cout<<max;
            else 
                cout<<dis;
        }
        else
        {
            if(max<=dis)
                cout<<max;
            else 
                cout<<dis;
        }
        cout<<endl;


    }
}