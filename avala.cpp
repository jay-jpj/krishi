#include<iostream>
using namespace std;
int main()
{
    int temp;
    int a[]={6,1};
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<2;j++)
        {
            if(a[i]<a[j])
            {
                continue;
            }
            else
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<2;i++)
    {
        cout<<a[i]<<endl;
    }
}