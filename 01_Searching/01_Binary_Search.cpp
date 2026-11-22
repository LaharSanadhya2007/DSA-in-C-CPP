#include <iostream>
using namespace std;
int main()
{
    int target,B,E,mid;
    int nums[] = {-1, 0, 3, 5, 9, 12};
    B=0;
    E=5;
    cout<<"enter the element u want to search: ";
    cin>>target;
    while(B<=E)
    {
        mid=(B+E)/2;
    
    if(target==nums[mid])
    {
        cout<<"searched element is at index: "<<mid<<endl;
        return 0;
    }
    else if(nums[mid] < target)
    {
        B=mid+1;
    }
    else
    {
        E=mid-1;
    }
}
    cout<<"-1";
    return 0;

}