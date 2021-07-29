#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    const int N = 1e6+2;
    int idx[N];
    for(int i=0;i<N;i++)
    {
        idx[i]=-1;
    }

    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(idx[a[i]]!=-1)
        {
            ans=min(ans,idx[a[i]]);
        }
        else
        {
            idx[a[i]]=i;
        }
    }
    if(ans==INT_MAX)
    {
        cout<<"-1";
    }
    else
    {
        cout<<ans+1;
    }

    return 0;
}
