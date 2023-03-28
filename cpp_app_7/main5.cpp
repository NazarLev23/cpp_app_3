#include <iostream>

using namespace std;


int Dil(int a, int b)
{

    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }
    else {
        return Dil(b, a % b);
    }
}

int main()
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Dil of " << a << " and " << b << " is: " << Dil(a, b) << endl;

    return 0;
}