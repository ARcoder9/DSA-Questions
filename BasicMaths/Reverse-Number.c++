// Problem Statement : Given an integer N return the reverse of the given number.
// Note : If a number has trailing zeros, then its reverse will not include them.For e.g., reverse of 10400 will be 401 instead of 00401.

/* Example 1:
        Input:N = 12345

        Output:54321

        Explanation: The reverse of 12345 is 54321.

        Example 2:
        Input:N = 7789

        Output: 9877

        Explanation: The reverse of number 7789 is 9877. */



#include <bits/stdc++.h>
using namespace std;

int ReverseNum(int num){
    int revNum = 0;   // Initialize a variable 'revNum' to store the reverse of the input integer.
    while(num>0){     // Start a while loop to reverse the digits of the input integer.
        int m = num % 10;            // Extract the last digit of 'n' and store it in 'm'.
        revNum = revNum * 10 + m;    // Multiply the current reverse number by 10 and add the last digit.
        num /= 10;                   // Remove the last digit from 'num'.
    }
    return revNum;
}

int main()
{
    cout<<ReverseNum(1234);
    return 0;
}

// Time Complexity : O(log10N + 1)
// Space Complexity: O(1)



/* Algorithm


Step 1:Initialise an integer revNum to 0. This variable will store the reversed number.

Step 2: Using a while loop we iterate while n is greater than 0 and at each iteration:

Calculate the last digit of the number using the modulus operator (N%10) and store it in a variable last digit.
Update the reversed number by multiplying it with 10 and adding the last digit. This effectively appends the last digit to the end of the reversed number.
Remove the last digit of the number by dividing it by 10.

Step 3: After exiting the while loop, return the reversed number. */