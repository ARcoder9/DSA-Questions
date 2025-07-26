/* Problem Statement: Given an integer N, return all divisors of N.
A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.

Examples
        Example 1:
        Input:N = 36
        
        Output:[1, 2, 3, 4, 6, 9, 12, 18, 36]
        
        Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.
                                
        Example 2:
        Input:N =12                
        
        Output: [1, 2, 3, 4, 6, 12]
        
        Explanation: The divisors of 12 are 1, 2, 3, 4, 6, 12.    */                        

// Brute Force Approach

#include <bits/stdc++.h>
using namespace std;

void Divisor(int num){
    for(int i=1; i<=num; i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }
}

int main()
{
   Divisor(36);
   return 0;
}

// Time Complexity : O(N)
// Space Complexity : O(1)



// optimal approach


/*
#include <bits/stdc++.h>
using namespace std;

vector<int> divisors;
void getDivisors(int num)
{
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
            if (i != num / i)
            {
                divisors.push_back(num / i);
            }
        }
    }
}

int main()
{
    getDivisors(36);
    vector<int> answers = vector<int>(divisors);
    reverse(answers.begin(), answers.end());
    for (int i = 0; i < answers.size(); i++)
    {
        cout << answers[i] << " ";
    }
    return 0;
}
    */

// Time Complexity : O(sqrt(N))
// Space Complexity : O(1) for the output, O(N) for storing divisors


// Note: The output is printed in ascending order, so we reverse the vector before printing.
// The optimal approach reduces the number of iterations by only going up to the square root of N, which significantly speeds up the process for larger numbers.
// The divisors are collected in a vector and printed in ascending order after reversing the order of the second half of the divisors found (those greater than the square root). This ensures that all divisors are printed in ascending order without needing to sort them explicitly.
// This approach is efficient and works well for larger integers, making it suitable for competitive programming and other applications where performance is critical.
// The optimal approach is particularly useful when dealing with large numbers, as it reduces the number of iterations needed to find all divisors, making it much faster than the brute force method. The use of the square root allows us to find pairs of divisors efficiently, ensuring that we only need to check up to the square root of the number, which is a significant reduction in computational effort for large integers.

