#include <iostream>
using namespace std;

// Declaration
int SUMARRAY(int arr[], int n);

int main()
{
    int n = 0;
    cout <<"Enter the Array Size : ";cin>>n;
    int arr[n] = {};
    for(int i=0;i<n;i++)
    {
        cout <<"Enter the "<<i+1<<" Number: ";cin>>arr[i];
    }
    
    int sum = SUMARRAY(arr, n);

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}

// Definition
int SUMARRAY(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    return SUMARRAY(arr, n - 1) + arr[n - 1];
}

