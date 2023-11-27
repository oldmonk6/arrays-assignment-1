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
    int max=0;
    int smax=0;
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(a[i]>a[j])
        {
            max=a[i];
            smax=a[j];
            j--;
        }
        else{
            max=a[j];
            smax=a[i];
            i++;
        }
        if(smax<a[i] && a[i]!=max)
        smax=a[i];
    }
    cout<<"the second largest element is"<<smax<<endl;
}
    