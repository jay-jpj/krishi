#include<iostream>
using namespace std;

long long gcd(long long x,long long y)
{
    if(x==1 || y==1)
        return 1;
    if(x==0 || y==0)
        return x+y;
    else if(x>=y)
        return gcd(x-y,y);
    else
        return gcd(x,y-x);
}

long long lcm(long long x, long long y)
{
    return (x*y)/gcd(x,y);
}
int main()
{
    long long x,y;
    cin>>x>>y;
    long long z=lcm(x,y);
    cout<<z;
}