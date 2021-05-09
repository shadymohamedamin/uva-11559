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
        // pivot_index;
    }
    return pivot_index;
}
int quicksort(vector<ll>&v, ll l, ll r)
{   //int index;
    if(l<r) 
    {
        int index = partition(v,l,r);
        quicksort(v, l, index-1);
        quicksort(v, index+1, r);
    }
}

int main()
{
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





/*#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll partition(vector<ll>&arr,ll l,ll r)
{
    ll pivot=arr[l];
    ll pivot_index=l;
    for(ll i=l+1;i<=r;i++)
    {
        if(arr[i]<=pivot)
        {
            pivot_index++;
            swap(arr[i],arr[pivot_index]);
           // pivot_index++;
        }
    }
    swap(arr[l],arr[pivot_index]);
    return pivot_index;
}

void quick(vector<ll>&arr,ll l,ll r)
{
    if(l<r)
    {
        ll index=partition(arr,l,r);
        quick(arr,index+1,r);
        quick(arr,l,index-1);
    }
}
int main()
{
    ll n;
    cin>>n;
    vector<ll>arr(n,0);
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    quick(arr,0,n-1);
    for(ll i=0;i<n;i++)
    cout<<arr[i]<<" ";
    //cout<<"Hello World";

    return 0;
}*/
