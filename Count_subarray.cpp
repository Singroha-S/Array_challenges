#include<bits/stdc++.h>
using namespace std;
int countsubset(int a[],int n)
{
    return (1<<n);
}
int main()
{
    int a[]={1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<countsubset(a,n);
    return 0;
}

