#include<iostream>
#include <cstdlib>
#include<time.h>
using std::cin;
using std::cout;
using std::endl;
long long brute(int* a,int n){
    long long t,m=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(m<(t=a[i]*a[j])){
                    m=t;
                }
            }
            else
            continue;
        }
    }
    return m;
}

long long effici(int* a,int n){
    int x=0,m;
    for(int i=0;i<n;i++){
        if(*(a+i)>x){
            x=(*(a+i));
            m=i;
        }
        else
            continue;
    }
    *(a+m)=0;
    return x;
}
int main(){
    int n;
    srand(time(0));
    n=rand()%10 + 2;
    int a[n];
    for(int i = 0; i < n; i++)
        a[i]=rand()%100;
    while(true){
        long long x=brute(a,n);
        long long y=effici(a,n);
        long long z=y*(effici(a,n));
        if(x!=z){
            cout<<x<<endl<<y;
            for(int i=0;i<n;i++){
                cout<<a[i]<<"  ";
            }
            break;
        }
        else
        cout<<x<<"   "<<z;
        break;
    }

    return 0;
}