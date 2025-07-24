/* Problem Statement: Given an integer N, return true if it is a palindrome else return false.
A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.

Examples
        Example 1:
        Input:N = 4554

        Output:Palindrome Number

        Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number

        Example 2:
        Input:N = 7789

        Output: Not Palindrome

        Explanation: The reverse of number 7789 is 9877 and therefore it is not palindrome */

#include <bits/stdc++.h>
using namespace std;

int Palindrome(int num)
{
    int temp = num;
    int revNum = 0;
    while (num > 0)
    {
        int m = num % 10;
        revNum = revNum * 10 + m;
        num /= 10;
    }
   return (temp == revNum);
}

int main()
{
    cout<<Palindrome(1221);
    return 0;
}

// Time Complexity : O(log10N + 1)
// Space Complexity: O(1)

/* Algorithm

Step 1: Initialise an integer revNum to 0. This variable will store the reverse of the number.

Step 2: Make a duplicate of the original number and store it in an integer dup for later comparison.

Step 3: Run a while loop with the condition n>0 to reverse the number and at each iteration:

Get the last digit of n by using the modulus operator % with 10 and store it in a temporary variable ld.
Update the revNum by multiplying it by 10 and adding the last digit ld.
Update n by integer division with 10 effectively removing the last digit.
Step 4: After the loop, check if the original number dup is equal to the reversed number revNum.

If they are equal, return true indicating the number is a palindrome.
If they are not equal, return false indicating that the number is not a palindrome. */