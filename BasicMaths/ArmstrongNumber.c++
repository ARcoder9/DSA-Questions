/* Problem Statement: Given an integer N, return true it is an Armstrong number otherwise return false.
An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

Examples
                Example 1:
                Input:N = 153
               
                Output:True
                
                Explanation: 13+53+33 = 1 + 125 + 27 = 153
                                        
                Example 2:
                Input:N = 371                
                
                Output: True
                
                Explanation: 33+53+13 = 27 + 343 + 1 = 371  */


#include <bits/stdc++.h>
using namespace std;

int Armstrong(int num){
    int k = to_string(num).length();   // convert the number to the string and then check its length.
    int cnt = (int)(log10(num) + 1);   // Another way to count a digit.
    int temp = num;
    int arm = 0;
    while(num>0){
        int m = num % 10;
        arm += pow(m,k);
        num /= 10;
    }
    return (temp == arm);
}

int main()
{
    cout<<Armstrong(153);
    return 0;
}

// Time Complexity : O(log10N + 1)
// Space Complexity: O(1)

/* Algorithm
Step 1:Calculate the number of digits in the input number and store it in k.

Step 2: Initialise a variable sum to 0. This variable will store the sum of each digit raised to the power of number of digits in number.
    Make a copy of the original number to store it in a temporary variable.

Step 3: Run a while loop with the condition n>0 and at each iteration:

Get the last digit of n by using the modulus operator % with 10 and store it in a temporary variable ld.
Add the digit ld raised to the power of k of the sum.
Update n by integer division with 10 effectively removing the last digit.

Step 4: After the loop, check if the original input number is equal to the sum of the digits raised to the power of the number of digits in the number.

If they are equal, return true indicating the number is an Armstrong number.
If they are not equal, return false indicating that the number is not an Armstrong number. */