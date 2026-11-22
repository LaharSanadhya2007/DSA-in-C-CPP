#include <iostream>
using namespace std;
int main()
{
    int B,E,target,mid,first,last;
    int A[]={5, 7, 7, 8, 8, 10};
    B=0;
    E=5;
    first=-1;
    last=-1;
    cout<<"enter element to search: ";
    cin>>target;
    while(B<=E)
    {
        mid=(B+E)/2;
        if(A[mid]==target)
        {
            first=mid;
            E=mid-1;
            
        }
        else if(A[mid]<target)
        {
            B=mid+1;
        }
        else
        {
            E=mid-1;
        }
    }
    B=0;
    E=5;

        while(B<=E)
    {
        mid=(B+E)/2;
        if(A[mid]==target)
        {
            last=mid;
            B=mid+1;
            
        }
        else if(A[mid]<target)
        {
            B=mid+1;
        }
        else
        {
            E=mid-1;
        }
    }
    cout<<"["<<first<<","<<last<<"]";
}