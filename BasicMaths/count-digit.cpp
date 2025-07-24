// Problem Statement : Given an integer N, return the number of digits in N.

// Example 1:
//          Input:N = 12345
        
//          Output:5
         
//          Explanation:  The number 12345 has 5 digits.
                                 
//          Example 2:
//          Input:N = 7789                
         
//          Output: 4
         
//          Explanation: The number 7789 has 4 digits.      



#include <bits/stdc++.h>
using namespace std;

// Function to count the number
// of digits in an integer 'n'.
int CountDigit(int num){
    int count = 0;    // Initialize a counter variable 'count' to store the count of digits.

    while(num>0){         // While loop iterates until 'n' becomes 0 (no more digits left).
        num = num / 10;    // Divide 'n' by 10 to remove the last digit.
        count++;         // Increment the counter for each digit encountered.

    }
    return count;
}

int main()
{
    cout<<CountDigit(12345);
    return 0;
}

// Time Complexity : O(log10N + 1)
// Space Complexity : O(1)




// // Optimal Approach


// // Calculate the count of digits in 'n'
// // using logarithmic operation log10(n) + 1.
// int countDigits(int n)
// {
//     // Initialize a variable 'cnt' to
//     // store the count of digits.
//     int cnt = (int)(log10(n) + 1);

//     // The expression (int)(log10(n)+1)
//     // calculates the number of digits in 'n'
//     // and casts it to an integer.

//     // Adding 1 to the result accounts
//     // for the case when 'n' is a power of 10,
//     // ensuring that the count is correct.

//     // Finally, the result is cast
//     // to an integer to ensure it is rounded
//     // down to the nearest whole number.

//     // Return the count of digits in 'n'.
//     return cnt;
// }

// Time Complexity : O(1)
// Space Complexity : O(1)


/* Algorithm:

Step 1:Initialise a counter to store the number of digits.

Step 2:While N is greater than 0, execute the following:

Increment the counter by 1
Update N by removing its last digit by performing a modulo 10 (%10) operation on it.
Step 3:After exiting the while loop, we return the counter as the number of digits. */
