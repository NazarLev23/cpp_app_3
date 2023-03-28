#include <iostream>

using namespace std;

int Factorial(int n)
{
    if (n == 0)
        return 1; 
    else
        return n * Factorial(n - 1); 
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << Factorial(n) << endl;
    return 0;
}