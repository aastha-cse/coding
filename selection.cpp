//selection sort

#include <iostream>

using namespace std;

void sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0 and a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
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
