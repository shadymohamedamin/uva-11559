/*
* Quick Sort Algorithm
* Language: C++
* 
*/

#include<iostream>

using namespace std;

int partition(int *a, int l, int r)
{
    int i,j,pindex,pivot;
    pindex = l;
  //  pivot = a[r];
    for(i=l;i<r;i++)
    {
        if(a[i] <=a[r]) //pivot)
        {
            swap(a[pindex], a[i]);
            pindex++;
        }
    }
    swap(a[pindex], a[r]);
    return pindex;
}

int quicksort(int *a, int l, int r)
{
    int index;
    if(l>=r)
        return 0;
    else 
    {
        index = partition(a,l,r);
        quicksort(a, l, index-1);
        quicksort(a, index+1, r);
    }
}

int main()
{
   // int a[]={1,1,1,1,1,1,1,1};
    int a[]={7,2,1,6,8,5,3,4};
    int i;
    quicksort(a,0,7);
    cout <<"After Sorting" << endl;
    for(i=0;i<8;i++)
        cout <<a[i] <<" ";
}
