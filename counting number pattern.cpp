/*
printing numbers pattern as counting integers like 
123
123
123
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int i=1;
    
    while(i<=n)
    {
        int j=1;
        while(j<=n)     // to print numbers like 123....
        {
            cout<<j;
            j=j+1;
        }

        while(j<=n)
        {
            cout<<n-j+1;
            j=j+1;             // to print the numbers from last  like 321....
        }
        cout<<endl;
        i=i+1;
    }
}
