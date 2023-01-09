//merge sort

#include <iostream>

using namespace std;
void merge(int a[],int lb,int mid,int ub)
{
    int i=lb,j=mid+1,k=lb;
    int b[ub+1];
    while(i<=mid and j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++; k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++; k++;
        }
    }
    for(k=lb;k<=ub;k++)
    a[k]=b[k];
}
void sort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        sort(a,lb,mid);
        sort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int main()
{
    int n;
    cout<<"enter the no. of inputs:";
    cin>>n;
    int a[n];
    cout<<"enter the elements:";
    for(int i=0;i<n;i++)
    cin>>a[i];
    int lb=0,ub=n-1;
    sort(a,lb,ub);
    cout<<"sorted array:";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
