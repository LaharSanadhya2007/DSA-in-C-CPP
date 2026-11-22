#include <iostream>
using namespace std;
int main()
{
    int n,target,i,nums[100],count=0;
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements:";
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    
    cout<<"enter target element:";
    cin>>target;
    
    for(i=0;i<n;i++)
    {
        if(nums[i]==target)
        {
            cout<<"element found at index : "<< i <<endl;
            count=count+1;
        }
    
    }
    cout<<"element occurance:"<<count<<endl;
}