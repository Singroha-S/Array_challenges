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

    int ans=2;
    int d=a[1]-a[0];
    int curr=2;
    int i=2;

    while(i<n)
    {
        if(a[i]-a[i-1]==d)
        {
            curr++;
        }
        else
        {
            d=a[i]-a[i-1];
            curr=2;
        }
        ans=max(ans,curr);
        i++;
    }

    cout<<ans;
    return 0;
}
