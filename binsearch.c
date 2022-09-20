#include<stdio.h>
int binary_search(int *nums,int numsSize,int target)
{
    if(numsSize==1 && nums[numsSize]== target)
        return 1;
    else if(nums[numsSize/2-1]==target)
    {
        return numsSize/2;
    }
    else if(nums[numsSize/2-1]>target && target>nums[0])
    {
        return binary_search(nums,&nums[numsSize/2-1]-nums+1,target);
    }
    else if(nums[numsSize/2-1]<target && target<nums[numsSize-1])
    {
        nums+=(numsSize/2);
        return numsSize/2 +binary_search(nums,numsSize-numsSize/2+1,target);
    }
}
int search(int* nums,int numsSize,int target)
{
    int a;
    a=binary_search(nums,numsSize,target);
    if(nums[a-1]==target)
        return a-1;
    else
        //printf("%d",a);
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
    printf("%d",search(nums,numsSize,target));
}