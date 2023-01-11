//randomised quick sort

#include <iostream>

using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int a[],int l,int h)
{
   int p=a[h],i=l-1;
   for(int j=l;j<h;j++)
   {
       if(a[j]<p)
       {
           i++;
           swap(&a[i],&a[j]);
       }
   }
   swap(&a[i+1],&a[h]);
   return i+1;
}
int par_random(int arr[], int low, int high)
{
    int random = low + rand() % (high - low);
    swap(arr[random], arr[high]);
 
    return partition(arr, low, high);
}
void sort(int a[],int l,int h)
{
    if(l<h)
    {
        int p=par_random(a,l,h);
        sort(a,l,p-1);
        sort(a,p+1,h);
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
    sort(a,0,n-1);
    cout<<"sorted array:";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
