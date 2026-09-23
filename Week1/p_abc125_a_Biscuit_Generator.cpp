// Problem: A - Biscuit Generator
// Platform: Atcoder
// Difficulty: ABC-A
// Link: https://atcoder.jp/contests/abc125/tasks/abc125_a
// Topics: Conditions, Loop
/*
Time Limit: 2 sec / Memory Limit: 1024 MiB

Score : 
100 points

Problem Statement
A biscuit making machine produces 
B biscuits at the following moments: 
A seconds, 
2A seconds, 
3A seconds and each subsequent multiple of 
A seconds after activation.

Find the total number of biscuits produced within 
T+0.5 seconds after activation.

Constraints
All values in input are integers.
1≤A,B,T≤20
Input
Input is given from Standard Input in the following format:

A 
B 
T
Output
Print the total number of biscuits produced within 
T+0.5 seconds after activation.

Sample Input 1
Copy
3 5 7
Sample Output 1
Copy
10
Five biscuits will be produced three seconds after activation.
Another five biscuits will be produced six seconds after activation.
Thus, a total of ten biscuits will be produced within 
7.5 seconds after activation.
Sample Input 2
Copy
3 2 9
Sample Output 2
Copy
6
Sample Input 3
Copy
20 20 19
Sample Output 3
Copy
0
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;

    int bis = 0;

    for(int i = 1; i < 25; i++) {
        if(a * i <= c) bis += b;
        else break;
    }

    cout << bis << endl;

    return 0;
}