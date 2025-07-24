/*Problem Statement: Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.

Examples
        Example 1:
        Input:N = 2

        Output:True

        Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).

        Example 2:
        Input:N =10

        Output: False

        Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10.   */


#include <bits/stdc++.h>
using namespace std;

int Prime(int num){
    int count = 0;
    for (int i = 1; i<=num; i++){
        if(num%i==0){
            count++;
        }
    }
    return(count==2);  // factors is exactly 2 Return true, indicating that the number is prime. If the number of factors is not 2. Return false, indicating that the number is not prime
}
int main()
{
    cout<<Prime(18);
    return 0;
}

// Time Complexity: O(N) 
// Space Complexity : O(1)