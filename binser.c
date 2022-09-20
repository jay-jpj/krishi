//BINARY SEARCH IMPLEMEMTATION
/*#include<stdio.h>
#define true 1
int binary_search(int *nums,int numsSize,int target)
{
    int start=0;
    int end=numsSize-1;
    int a=0;
    if(numsSize==1 && nums[0]==target)
    {
            return 0;
    }
    else if(numsSize==1)
    {
        return -1;
    }
    while(1)
    {
        //printf("x");
        if(nums[(start+end)/2]==target)
        {
            a=(start+end)/2;
            break;
        }
        else if(nums[(start+end)/2]<target && target<=nums[numsSize-1])
        {
            //printf("%d%d",start,end);
            start=(start+end)/2+1;
            if(start==end && nums[start]!=target)
            {
                break;
            }
            
        }
        else if(nums[(start+end)/2]>target && target>=nums[0])
        {
            //printf("%d%d",start,end);
            end=(start+end)/2-1;
            if(start==end && nums[start]!=target)
            {
                break;
            }
        }
        else    
            break;
    }
    if(nums[a]==target)
        return a;
    else 
       return -1;
}
int main()
{
    int numsSize;
    int target;
    scanf("%d",&numsSize);
    scanf("%d",&target);
    int a[numsSize];
    for(int i=0;i<numsSize;i++)
    {
        scanf("%d",&a[i]);
    }
    int *nums=a;
    printf("%d",binary_search(nums,numsSize,target));
}
*/
#include<stdio.h>
int bad;
int isBadVersion(int version)
{
    return version==bad;
}

int firstBadVersion(int n)
{
    int start=0;
    int end=n-1;
    int a;
    if(n==1)
    {
        if(isBadVersion(n))
            return 1;
        else
            return 0;
    }
    while(1)
    {
    }
    return a;
}
int main()
{
    int bad;
    int n;
    scanf("%d%d",&n,&bad);
    printf("%d%d",firstBadVersion(n));
    return 0;
}
