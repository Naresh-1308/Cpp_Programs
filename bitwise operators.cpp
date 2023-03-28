#include<iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;
    cout<<"and or xor and not\n";
    cout << "a & b = " << (a & b) <<endl;        // AND operator
    cout << "a | b = " << (a | b) <<endl;        // OR  operator
    cout << "a ^ b = " << (a ^ b) <<endl;        // XOR operator
    cout << "~a = " << (~a) <<endl;              // NOT operator

//left shift ( << )   and    right shift ( >> )

// agr bade number ke case mein left shift maaroge to vo usey negative number bana dega   !!!!
    cout<<"\nleft shift and right shift  \n";
    cout<< ( 17 >> 1)<<endl;            // 17 right shifts like 17/2 = 8 because shifting only 1 time 
    cout<< ( 17 >> 2)<<endl;            // 17 right shifts like 17/2 = 8 , 8/2 = 4 because shifting 2 times
    cout<< (19 << 1)<<endl;             // 19 left shifts like 19*2 = 38 because shifting only 1 time
    cout<< (21 << 2)<<endl;             // 21 left shifts like 21*2 = 42 , 42*2 = 84 because shifting 2 times

// increament and decreament
cout<<"\nincreament and decreament\n";
int i = 7;
cout<< (a = i++) <<endl;
cout<< (a = ++i) <<endl;
cout<< (a = i--) <<endl;
cout<< (a = --i) <<endl;
cout<<endl;

int x, y = 1;
x = 10;
if (++x)
cout << y;
else
cout << ++y;

}
