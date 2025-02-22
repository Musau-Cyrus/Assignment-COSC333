#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1; // Use unsigned long long to handle large factorials

    // Prompt the user to enter a number
    cout << "Enter a positive integer: ";
    cin >> n;

    // Check if the input is valid
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Calculate the factorial
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }

        // Display the result
        cout << "Factorial of " << n << " = " << factorial << endl;
    }

    return 0;
}

/*In this program, we first declare a variable  n  to store the user input. We also declare a variable  factorial  of type  unsigned long long  to store the result of the factorial calculation.
We then prompt the user to enter a positive integer and read the input using  cin .
Next, we check if the input is negative. If it is, we display an error message. Otherwise, we calculate the factorial using a  for  loop and display the result.
Note:  The use of  unsigned long long  is necessary to handle large factorials, as the result of the factorial calculation can grow very quickly.
Compile and Run the Program
To compile the program, open a terminal and run the following command:
g++ main.cpp -o factorial

This will generate an executable file named  factorial . To run the program, use the following command:
./factorial

You will see the following output:
Enter a positive integer: 10*/