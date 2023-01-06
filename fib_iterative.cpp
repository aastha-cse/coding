//fibonacci iterative

#include <iostream>

using namespace std;

int fib(int n) 
{
    int prev=0,cur=1;
    if(n==0) return n;
    for(int i=2;i<=n;i++)
    {
        int sum=prev+cur;
        prev=cur;
        cur=sum;
    }
    return cur;
}

int main()
{
    int n;
    cin>>n;
    cout<<fib(n);

    return 0;
}
