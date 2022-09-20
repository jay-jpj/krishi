#include<iostream>
using namespace std;
int gcd(int,int);
int main()
{
    //cout<<"GCD of two numbers"<<endl;
    int x,y;
    cin>>x>>y;
    int res= gcd(x,y);
    cout<<res;
}

int gcd(int x,int y)
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