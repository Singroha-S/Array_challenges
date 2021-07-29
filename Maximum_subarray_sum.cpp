#include<bits/stdc++.h>
using namespace std;
int main()
{
    //CUMMULATIVE SUM APPROACH OF O(n^2)
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int currSum[n+1];
    currSum[0]=0;
    for(int i=1;i<=n;i++)
    {
        currSum[i]=currSum[i-1]+a[i-1];
    }

    int maxSum=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=0;j<i;j++)
        {
            sum=currSum[i]-currSum[j];
            maxSum=max(sum,maxSum);
        }
    }
    cout<<maxSum;

    return 0;
}

/*BRUTE FORCE APPROACH OF O(n^3)
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=a[k];
            }
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum;
    return 0;
}
*/
