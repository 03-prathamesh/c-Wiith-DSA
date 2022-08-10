#include <bits/stdc++.h>
using namespace std;

void fun(int arr[], int n)
{

    int start = 0;
    int end = n - 1;

    for (int i = 0; start<end; i++)
    {

       
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << "  ";
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};

    int n = sizeof(arr) / sizeof(arr[0]);

    fun(arr, n);

    return 0;
}