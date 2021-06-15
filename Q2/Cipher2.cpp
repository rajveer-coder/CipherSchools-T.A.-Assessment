#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;cin>>t; ///Number of Test Cases User wants to Take.
    while(t--)
    {
        cout<<"Enter the number of gadgets"<<endl;
        ll n;cin>>n; /// Number of Gadgets
        ll gadgets[n];///price of gadgets
        cout<<"Enter the gadgets prices: "<<endl;
        for(ll i=0;i<n;i++)
        {
           cin>>gadgets[i];
        }
        cout<<"Enter the Customer Budget"<<endl;
        ll customer_budget;cin>>customer_budget;
        ll cnt=0; ///counter for counting whether customer can buy this or not;
        for(ll i=0;i<n;i++)
        {
           if(customer_budget%gadgets[i]==0)
           {
              cnt++; ///increment the count when the price is divisible
           }
        }
        cout<<" Hello i am a robot here's my prediction: ";
        ll robot_prediction;cin>>robot_prediction; ///Robot prediction
        if(cnt==robot_prediction)
        {
           cout<<"Right"<<endl;
        }
        else
        {
           cout<<"Wrong"<<endl;
        }
    }
}
