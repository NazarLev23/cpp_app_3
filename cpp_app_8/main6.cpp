#include <iostream>

using namespace std;

bool Palin(int n, int rev = 0)
{
    if (n == 0) {
        return n == rev;
    }
    else {
        return Palin(n / 10, rev * 10 + n % 10);
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (Palin(n)) {
        cout << n << " is a palindrome" << endl;
    }
    else {
        cout << n << " isn`t a palindrome" << endl;
    }
    return 0;
}