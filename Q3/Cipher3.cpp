#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[10000][10000];
bool v[10000][10000];
ll calc(ll strt,ll end,ll* wt,ll* val,ll n)
{

    if (strt<=0)
        return 0;

    if (end==n)
        return 100000;

    if (v[strt][end])
        return dp[strt][end];

    v[strt][end]=1;
    dp[strt][end]=min(calc(strt,end+1,wt,val,n),wt[end]+calc(strt-val[end],end+1,wt,val,n));
    return dp[strt][end];
}
int main()
{
    cout<<"Enter the Elements n:";
    ll n;cin>>n;
    ll wt[n],val[n];
    cout<<"Enter the Weights: ";
    for(ll i=0;i<n;i++)
    {
        cin>>wt[i];
    }
    cout<<"Enter the Values: ";
    for(ll i=0;i<n;i++)
    {
        cin>>val[i];
    }
    ll W;
    cout<<"Enter the Capacity: ";cin>>W;
    ll res=0;
    for (ll i=10000;i>=0;i--)
    {
        if (calc(i,0,wt,val,n)<=W)
        {
            res=i;
            break;
        }
    }
    cout<<"Maximum Value: "<<res<<endl;
    return 0;
}
