#include<stdio.h>
int comb(int n,int r)
{
    if(r==0 || r==n)
        return 1;
    return ((n-r+1)*comb(n,r-1))/r;
}

int main()
{
    int n,r;
    scanf("%d%d",&n,&r);
    printf("%d",comb(n,r));
}