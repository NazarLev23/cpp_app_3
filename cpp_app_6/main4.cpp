#include <iostream>
using namespace std;

int Step(int a, int n) {
    if (n == 0) {
        return 1;
    }
    else if (n == 1) {
        return a;
    }
    else {
        return a * Step(a, n - 1);
    }
}

int main() {
    int a, n;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter the Step: ";
    cin >> n;
    int result = Step(a, n);
    cout << a << " Step of " << n << " is " << result << endl;
    return 0;
}