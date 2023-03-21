#include<iostream>
using namespace std;

int getMax(int ar[], int n)  // these are the funtions made after the int main() 
{
    int i;
    int maxi = INT_MIN;    // let assume that minumum value is stored in max

    for(i = 0; i < n; i++)
    {
        maxi =  max(maxi, ar[i]);  // these are the predefined funtions  ar[i] & maxi mein se jo maximum hai usey maxi mein store kr dega

        //or 

        if(ar[i] > maxi)
        {
            maxi = ar[i];
        }
    }
    return maxi;
}

int getMin(int ar[], int n)
{
    int i;
    int mini = INT_MAX;    // let assume that maximum value is stored in min

    for(i = 0; i < n; i++)
    {
        mini =  min(mini, ar[i]);  // these are the predefined funtions  ar[i] & mini mein se jo minimum hai usey maxi mein store kr dega

        // or 

        if(ar[i] < mini)
        {
            mini = ar[i];
        }
    }
    return mini;
}

int main()
{
    int size;
    int num[100];
    int i;

    cout<<endl<<"enter the number of elements in array: ";
    cin>>size;

    for(i = 0; i < size; i++)
    {
        cout<<"enter the element "<<i<<" in array: ";
        cin>>num[i];
    }

    cout<<"the array is: ";
    for(i = 0; i < size; i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl<<endl;

    cout<<"The maximum value is: "<<getMax(num,size)<<endl;
    cout<<"The minimum value is: "<<getMin(num,size)<<endl;
}
