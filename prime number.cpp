#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int i=2;
    while(i<n)
    {
        // cout<<i;
        //i=i+1;
    
    if(n%i==0)
    {
        cout<<"the number is not prime for "<<i<<endl;
    }
    else
    {
        cout<<"the number is prime for "<<i<<endl;
    }
    i=i+1;
    }
}
