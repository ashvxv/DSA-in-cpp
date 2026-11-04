/* Recursion - When a function calls itself, it is called recursion. Recursion is a powerful technique that allows for elegant solutions to problems that can be broken down into smaller subproblems. In this file, we will explore the concept of recursion and how it can be implemented in C++ using the C++14 language standard version.
*/
#include<bits/stdc++.h>
using namespace std;

// void print (){
//     cout<< 1<<endl;
//     print();
// }
// int main(){
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif
//     print();
//     return 0;
// }
/*stack memory is used to store the function calls and their local variables. Each time a function is called, a new stack frame is created, and when the function returns, the stack frame is removed. This allows for the preservation of the state of each function call, enabling recursive functions to work correctly.

stack overflow occurs when the stack memory is exhausted due to too many nested function calls, which can happen in cases of deep recursion. To avoid stack overflow, it is important to ensure that the base case is reached in a reasonable number of recursive calls.
*/
