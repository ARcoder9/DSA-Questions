/* Problem Statement: Given two integers N1 and N2, find their greatest common divisor.
The Greatest Common Divisor of any two integers is the largest number that divides both integers.

Examples
        Example 1:
        Input:N1 = 9, N2 = 12
        
        
        Output:3
        Explanation:Factors of 9: 1, 3 and 9
        Factors of 12: 1, 2, 3, 4, 6, 12
        Common Factors: 1, 3 out of which 3 is the greatest hence it is the GCD.
                        
        Example 2:
        Input:N1 = 20, N2 = 15
        
        
        Output: 5
        Explanation:Factors of 20: 1, 2, 4, 5
        Factors of 15: 1, 3, 5
        Common Factors: 1, 5 out of which 5 is the greatest hence it is the GCD. */


#include <bits/stdc++.h>
using namespace std;

/* Brute Force Approach */

int findGcd(int n1, int n2)
{
    // Initialize gcd to 1
    int gcd = 1;

    // Iterate from 1 up to
    // the minimum of n1 and n2
    for (int i = 1; i <= min(n1, n2); i++)
    {
        // Check if i is a common
        // factor of both n1 and n2
        if (n1 % i == 0 && n2 % i == 0)
        {
            // Update gcd to the
            // current common factor i
            gcd = i;
        }
    }

    // Return the greatest
    // common divisor (gcd)
    return gcd;
}  


/* Better Force Approach */

int findGcd(int n1, int n2)
{
    // Iterate from the minimum of
    // n1 and n2 down to 1
    // Start from the minimum of n1 and n2
    // because the GCD cannot
    // exceed the smaller number

    for (int i = min(n1, n2); i > 0; i--)
    {
        // Check if i is a common
        // factor of both n1 and n2
        if (n1 % i == 0 && n2 % i == 0)
        {
            // If i is a common factor,
            // return it as the GCD
            return i;
        }
    }
    // If no common factors are found,
    // return 1 (as 1 is always a
    // divisor of any number)
    return 1;
} 

// Time Complexity: O(min(N1, N2))
// Space Complexity: O(1)


/* Optimal Approach */

/* Algorithm / Intuition
The Euclidean Algorithm is a method for finding the greatest common divisor of two numbers. It operates on the principle that the GCD of two numbers remains the same even if the smaller number is subtracted from the larger number.

To find the GCD of n1 and n2 where n1 > n2:

Repeatedly subtract the smaller number from the larger number until one of them becomes 0.
Once one of them becomes 0, the other number is the GCD of the original numbers.
Eg, n1 = 20, n2 = 15:

gcd(20, 15) = gcd(20-15, 15) = gcd(5, 15)

gcd(5, 15) = gcd(15-5, 5) = gcd(10, 5)

gcd(10, 5) = gcd(10-5, 5) = gcd(5, 5)

gcd(5, 5) = gcd(5-5, 5) = gcd(0, 5)

Hence, return 5 as the gcd. */
int gcd2(int a, int b){
        // Continue loop as long as both
        // a and b are greater than 0
        while (a > 0 && b > 0)
    {
        // If a is greater than b,
        // subtract b from a and update a
        if (a > b)
        {
            // Update a to the remainder
            // of a divided by b
            a = a % b;
        }
        // If b is greater than or equal
        // to a, subtract a from b and update b
        else
        {
            // Update b to the remainder
            // of b divided by a
            b = b % a;
        }
    }
    // Check if a becomes 0,
    // if so, return b as the GCD
    if (a == 0)
    {
        return b;
    }
    // If a is not 0,
    // return a as the GCD
    return a;
}

int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return (a==b) ? b : a; // If a is 0, return b; otherwise return a
}

// Time Complexity: O(min(N1, N2))
// Space Complexity: O(1)

int main()
{
    cout<<gcd(5,10);
    
    return 0;
}