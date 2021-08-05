#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="vfdvgdgg";
    int a[26];
    for(int i=0;i<26;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<s.size();i++)
    {
        a[s[i]-'a']++;
    }
    char ans;
    int maxfreq=-1;
    for(int i=0;i<26;i++)
    {
        if(a[i]>maxfreq)
        {
            maxfreq=a[i];
            ans = 'a'+i;
        }
    }
    cout<<maxfreq<<endl;
    cout<<ans;

    return 0;
}
