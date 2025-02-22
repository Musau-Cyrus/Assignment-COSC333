**REG_NO** : EB3/61528/22  
**NAME**: Cyrus Musau
---

In this program, we first declare a variable  n  to store the user input. We also declare a variable  factorial  of type  unsigned long long  to store the result of the factorial calculation.
We then prompt the user to enter a positive integer and read the input using  cin .
Next, we check if the input is negative. If it is, we display an error message. Otherwise, we calculate the factorial using a  for  loop and display the result.
Note:  The use of  unsigned long long  is necessary to handle large factorials, as the result of the factorial calculation can grow very quickly.
Compile and Run the Program
To compile the program, open a terminal and run the following command:
g++ main.cpp -o factorial

This will generate an executable file named  factorial . To run the program, use the following command:
./factorial

You will see the following output:
Enter a positive integer: 10