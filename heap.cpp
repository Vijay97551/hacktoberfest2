#include<bits/stdc++.h>
using namespace std;
int heapify(int a[],int n,int i)
{
    int largest = i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && a[largest]<a[l])
    {
        largest=l;
    }
    if(r<n && a[largest]<a[r])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}
void heapSort(int a[],int n)
{
    int i;
    for(i=n/2-1; i>=0; i--)
        heapify(a,n,i);
    for(i=n-1; i>=0; i--)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}

int main()
{
    int n,i,j,c=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    heapSort(a,n);
    for(i=0; i<n; i++)
    {
        cout<<a[i];
    }

}
