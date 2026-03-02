#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int lastFour = num % 10000;

    if (lastFour % 16 == 0)
        cout << num << " is divisible by 16";
    else
        cout << num << " is not divisible by 16";

    return 0;
}
