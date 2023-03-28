#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        cout<<i<<endl;
    }
 cout<<"\n\n";

    // or we can write for loop as -->

    int i = 1;
    for(; ;)

    //for(yaha wala upar likh diya ; yaha wala if ke andar ; or yaha waala if ke bahar iteration banane ke liye )
    
    {
        if(i<=n)
        {
            cout<<i<<endl;
        }
        else
        {
            break;
        }
        i++;
    }
cout<<"\n\n";
    // or we can write for loop as -->

    for(int a = 0, b = 1, c = 2; a>=0, b>=1, c>=2; a--, b--, c--)
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}
