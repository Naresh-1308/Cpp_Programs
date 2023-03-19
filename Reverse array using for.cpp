#include <iostream>
using namespace std;

int main()
{
    int n, ar[n],rev[n],i;
    cout<<"enter the value of n: ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cout<<"enter the element at "<<i<<": ";
        cin>>ar[i];
    }
    
    cout<<"The final array is: ";
    for(i=0; i<n; i++)
    {
        cout<<ar[i]<<' ';
    }
    cout<<endl<<endl;
    
    cout<<"The reversed array is: ";
    for(i=0; i<n; i++)
    {
        rev[i] = ar[n-1-i];
        cout<<rev[i]<<' ';
    }
    cout<<endl;
    return 0;
}
