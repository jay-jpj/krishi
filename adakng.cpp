#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<math.h>
using namespace std;
void moves(int,int,int);
int count_moves(int r,int c,int k);
int in_square(int r,int c);
int main() {
	// your code goes here
	int n;
	cin>>n;
	int b[n];
	for(int i=0;i<n;i++)
	{
	    int r,c,k;
	    cin>>r>>c>>k;
	    b[i]=count_moves(r,c,k);
	}
	for(int i=0;i<n;i++)
	{
	    cout<<b[i]<<endl;
	}
    
	return 0;
}
void moves(int r,int c,int p[][8])
{
    int a[][2]={{0,0},{0,1},{1,0},{0,-1},{-1,0},{1,1},{-1,-1},{-1,1},{1,-1}};
    for(int i=0;i<9;i++)
    {
        if(in_square(r+a[i][0],c+a[i][1]))
        {
            p[r+a[i][0]-1][c+a[i][1]-1]=1;
        }
    }
}
int count_moves(int r,int c,int k)
{
    int p[8][8]={0};
    int a[][2]={{0,0},{0,1},{1,0},{0,-1},{-1,0},{1,1},{-1,-1},{-1,1},{1,-1}};
    int count=0;
    int s=k;
    moves(r,c,p);
    k--;
    while(k)
    {

            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    if(p[i][j]==1 && ((abs(r-i-1)<=s-1) && (abs(c-j-1)<=s-1)))
                    {
                        moves(i+1,j+1,p);
                    }
                }
            }
        
        k--;
    }
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(p[i][j]==1)
            {
                count++;
            }
        }
    }
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    return count;
}
int in_square(int r,int c)
{
    return ((r>=1 && r<=8) && (c>=1 && c<=8));
}