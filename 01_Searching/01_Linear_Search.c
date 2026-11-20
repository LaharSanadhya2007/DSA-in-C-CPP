#include <stdio.h>
int main()
{
    int i,n,target;
    int  nums[] = {4, 2, 7, 1, 9};
    n=5;
    printf("enter target element:");
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        if(nums[i]==target)
        {
            printf("element found %d",i);
            return 0;
        }
    }
    
    printf("-1");
    return 0;
}
