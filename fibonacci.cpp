#include<iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i = 1; i<=n; i++)
    {
        int fibonacci = a + b;      //kyuki peeche ke do numbers se aage ka number aaega or start a & b se hi hua hai
        cout<<fibonacci <<" ";

        a = b;                      //ab number aaya hai toh usey aage badhana padega toh jo b hai usey a mein daal do and naye ko b mein 
        b = fibonacci;
    }
}
