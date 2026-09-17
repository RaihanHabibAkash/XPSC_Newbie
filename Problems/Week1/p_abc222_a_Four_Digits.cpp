// Problem: A - Four Digits
// Platform: Atcoder
// Difficulty: ABC-A
// Link: https://atcoder.jp/contests/abc222/tasks/abc222_a
// Topics: Condition
/*
Time Limit: 2 sec / Memory Limit: 1024 MiB

Score : 
100 points

Problem Statement
You are given an integer 
N between 
0 and 
9999 (inclusive).

Print it as a four-digit string after appending to it the necessary number of leading zeros.

Constraints
0≤N≤9999
N is an integer.
Input
Input is given from Standard Input in the following format:

N
Output
Print the answer.

Sample Input 1
Copy
321
Sample Output 1
Copy
0321
321 has three digits, so we need to add one leading zero to it to make it have four digits.

Sample Input 2
Copy
7777
Sample Output 2
Copy
7777
Sample Input 3
Copy
1
Sample Output 3
Copy
0001
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a; cin >> a;
    if(a < 1000) cout << 0;
    if(a < 100) cout << 0;
    if(a < 10) cout << 0;
    cout << a << endl;

    return 0;
}