#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    cin>>k;
  //  ll search[k];
//    for(ll i=0;i<k;i++)
  //  cin>>search[i];
    vector<ll>v;
    for(ll i=0;i<k;i++)
    {
        ll a;
        cin>>a;
        //ll ss=search[i];
        ll l=0,r=n-1;
        ll ans=-1;
        while(l<=r)
        {
            if(l>r) break;
            ll mid=(((r-l)/2)+1);
            --mid;
            //cout<<r<<" ";//<<" "<<mid<<" ";
            if(arr[mid]==a)
            {
                ans=mid;
                break;
            }
            else if(a>arr[mid])
            {
                r=mid-1;
            }
            else if(a<arr[mid])
            {
                l=mid+1;
            }
        }
        //5 1 5 8 12 13
        //5 8 1 23 1 11
        //cout<<ans<<" ";
        v.push_back(ans);
    }
    for(auto &i:v) cout<<i<<" ";
    return 0;
}
