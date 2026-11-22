#include <iostream>
using namespace std;
int main()
{
    int nums[100],i,n,j,swap;
    cout<<"enter number of elements : ";
    cin>>n;
    cout<<"enter array : ";
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(nums[j]>nums[j+1])
            {
                swap=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=swap;
            }
    
        }
    }
        cout << "Sorted array: ";
for(i=0; i<n; i++)
{
    cout << "[" << nums[i] << "]";
}

  

}