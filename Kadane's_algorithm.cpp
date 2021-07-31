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
    int cs=0;
    int ms=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cs+=a[i];
        if(cs<0)
        {
            cs=0;
        }
        ms=max(cs,ms);
    }
    cout<<ms;

    return 0;
}
