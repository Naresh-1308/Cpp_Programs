#include<iostream>
using namespace std;

void printarray(int arr[], int size)
{
    cout<<"\n printing the array: \n\n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n\n printing done";
}

int main()
{
    int third[5]={1,2,3,4,5};

    printarray(third,5);
}
