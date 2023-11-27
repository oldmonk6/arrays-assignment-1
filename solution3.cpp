#include<iostream>
#include <climits>

using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    int smallest=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<smallest)smallest=a[i];
    }
    cout<<"the smallest is : "<<smallest;
    
}
    