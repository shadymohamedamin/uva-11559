#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll partition(vector<ll>&v,ll l,ll r)
{
    ll i=l,j=r,pivot_index=i;
    while(true)
    {
        while(v[pivot_index]<=v[j]&&pivot_index!=j) {j--;}
        if(pivot_index==j) break;
        else if(v[pivot_index]>v[j]){swap(v[pivot_index],v[j]);pivot_index=j;}
        while(v[pivot_index]>=v[i]&&pivot_index!=i) {i++;}
        if(pivot_index==i) break;
        if(v[pivot_index]<v[i]) {swap(v[pivot_index],v[i]);pivot_index=i;}
        return pivot_index;
    }
}
int quicksort(vector<ll>&v, ll l, ll r)
{
    int index;
    if(l>=r)
        return 0;
    else 
    {
        index = partition(v,l,r);
        quicksort(v, l, index-1);
        quicksort(v, index+1, r);
    }
}

int main()
{
   // int a[]={1,1,1,1,1,1,1,1};
    //int a[]={7,2,1,6,8,5,3,4};
    //int i;
    //quicksort(a,0,7);
    //5
   //2 3 9 2 2
    ll n;
    cin>>n;
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++)
    cin>>v[i];
    quicksort(v,0,n-1);
    cout <<"After Sorting" << endl;
    for(int i=0;i<v.size();i++)
        cout <<v[i] <<" ";
}
