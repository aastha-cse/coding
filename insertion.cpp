//insertion sort

#include <iostream>

using namespace std;

void sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
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
    sort(a,n);
    cout<<"sorted elements:";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    return 0;
}
