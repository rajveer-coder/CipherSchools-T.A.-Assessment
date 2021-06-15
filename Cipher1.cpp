#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;cin>>n; ///Size of the array;
    ll arr[n]; ///Declaring the array
    ll val=1,i,flag=0;
    if(n%2!=0)
    {
        n--; flag=1; ///Decrement if N is odd
    }
    for(i=0;i<n;i+=2)
    {
        arr[i]=val;
        arr[i+1]=(-1*val);
        val++;
    }
    if(flag==1)
    {
        arr[n]=0; ///If n is odd then assign the last element as 0 so the sum will not be affected
        n++;
    }
    for(ll j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    return 0;
}
