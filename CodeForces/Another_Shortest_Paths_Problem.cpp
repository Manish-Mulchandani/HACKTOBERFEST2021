#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,m,x,y;
        long long c;
        cin>>n>>m>>x>>y;
        n--;
        m--;
        if(y<x)
        {
            c=max(m,n)*y;
            if((m&1)!=(n&1))
                c+=x-y;
            cout<<c<<"\n";
            continue;
        }
        long long a=(min(n,m)*y)+(abs(m-n)*x);
        long long b=(m+n)*x;
        cout<<min(a,b)<<"\n";
    }
}