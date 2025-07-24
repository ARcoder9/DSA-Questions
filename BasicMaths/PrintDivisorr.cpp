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
// Space Complexity : O(N)