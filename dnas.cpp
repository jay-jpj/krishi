#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char *p[n];
    for(int i=0;i<n;i++)
    {
        int s;
        cin>>s;
        s++;
        p[i]=(char*)malloc(s*sizeof(char));
        scanf("%s",p[i]);
    }
    char *pi[n];
    for(int i=0;i<n;i++)
    {
        int k=0,m=0;
        while(*(p[i]+k)!=0)
        {
            k++;
        }
        pi[i]=(char*)malloc(k*sizeof(char));
        while(*(p[i]+m)!=0)
        {
            char x= *(p[i]+m);
            switch(x)
            {
                case 'A': *(pi[i]+m)='T';   break;
                case 'T': *(pi[i]+m)='A';   break;
                case 'C': *(pi[i]+m)='G';   break;
                case 'G': *(pi[i]+m)='C';   break;
            }
            m++;
        }
        *(pi[i]+m)='/0';
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<pi[i];
    }

}
