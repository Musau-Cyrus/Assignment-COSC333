#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    // Prompt the user to enter the number of terms they need displayed in the terminal.
    cout << "Enter the number of terms: ";
    cin >> n;

    // Print the Fibonacci series
    cout << "Fibonacci Series: ";

    // Loop to generate the Fibonacci series
    for (int i = 1; i <= n; ++i) {
        // Print the first term
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        // Print the second term
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        // Calculate the next term in the series
        nextTerm = t1 + t2;
        // Update the previous two terms
        t1 = t2;
        t2 = nextTerm;

        // Print the next term
        cout << nextTerm << ", ";
    }
    return 0;
}
