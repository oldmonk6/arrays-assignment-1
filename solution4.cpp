#include<iostream>
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
   
    bool flag=false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(a[i]==a[j])
        flag=true;
        }
    }
    if(flag==true)cout<<"duplicates are present";
    else cout<<"duplicates are not present ";
    
    
}
    
