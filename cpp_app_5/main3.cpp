#include <iostream>

using namespace std;

int sum(int arr[], int n)
{
    if (n == 1) {
        return arr[0];
    }
    else {
        return arr[0] + sum(arr + 1, n - 1);
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of elements: " << sum(arr, n) << endl;

    return 0;
}