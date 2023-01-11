//Count Sort

#include <iostream>
using namespace std;

void sort(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    int a[max+1]={0};
    for(int i=0;i<n;i++)
    {
        a[arr[i]]++;
    }
    int j=0;
    for(int i=0;i<max+1;i++)
    {
        if(a[i]>0)
        {
            arr[j]=i;
            j++;
            a[i]--;
        }
    }
}
int main()
{
	int n;
	cout<<"enter number of inputs:";
	cin>>n;
	int arr[n];
	cout<<"enter array:";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,n);
	cout<<"sorted array:";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}

