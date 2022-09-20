#include<iostream>
using namespace std;
int last_dig_fib(int n)
{
    int x=0;
    int y=1;
    int z=0;
    if(n==0)
        return x;
    else if(n==1)
    {
        return y;
    }
    else
    {
        for(int i=0;i<(n-1);i++)
        {
            z=x+y;
            x=y%10;
            y=z%10;
        }
    }
    return z%10;
}
int main()
{
    //int x=0;
    //int y=1;
    int n;
    cin>>n;
    //unsigned long long fib=fibon(n);
    int fib=last_dig_fib(n);
    string res= to_string(fib);
    cout<<res.back();
}