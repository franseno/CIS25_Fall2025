#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    // First compare n1 and n2
    if (n1 >= n2) {
        // If n1 is also >= n3, then n1 must be the largest
        if (n1 >= n3) {
            cout << "Largest number: " << n1 << endl;
        // Else n3 must be largest since n1 must be bigger than n2
        } else {
            cout << "Largest number: " << n3 << endl;
        }
    // If n2 is bigger then compare to n3
    } else {
        // Simple comparison, if n2 is bigger then n2 is largest, if n3 is bigger then n3
        if (n2 >= n3) {
            cout << "Largest number: " << n2 << endl;
        } else {
            cout << "Largest number: " << n3 << endl;
        }
    }

    // Note: Does not account for cases when numbers are equal
    return 0;
}