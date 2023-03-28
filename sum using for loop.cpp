#include<iostream>
using namespace std;
int main()
{
    int sum =0;
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    for (int i = 1; i<=n; i++)
    {
        // sum = sum + i;
        sum += i;
        cout<<sum<<endl;
    }
    cout<<'\n'<<sum<<endl;
}
