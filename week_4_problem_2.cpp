#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/*ll majority(vector<ll>&v)
{
    
    for(ll i=0;i<v.size();i++)
    {
        ll ce=v[i],c=0;
        for(ll j=0;j<v.size();j++)
        if(ce==v[j])
        c++;
        if(c>v.size()/2)
        return 1;
    }
    return 0;
}*/
ll majority(vector<ll>&v)
{
    vector<ll>count(v.size(),0);
    for(ll i=0;i<v.size();i++)
    count[v[i]]++;
    //ll c=0;
    for(ll i=0;i<count.size();i++)
        if(count[i]>v.size()/2) 
        return 1;
        
    return 0;
}
int main()
{
 ll n;
 cin>>n;
 vector<ll>v(n,0);
 for(ll i=0;i<n;i++)
 cin>>v[i];
 cout<<majority(v);
    return 0;
}
