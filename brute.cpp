/*#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long t,m=0;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<n;j++){
            if(i!=j){
                if(m<(t=a[i]*a[j])){
                    m=t;
                }
            }
            else
            continue;
        }
    }
    cout<<m;
}
*/
#include<iostream>
using namespace std;
int main(){
    long long x=100000;
    long long y=90000;
    long long z=x*y;
    cout<<z;
}