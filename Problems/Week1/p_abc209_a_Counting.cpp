// Problem: Counting
// Platform: Atcoder
// Difficulty: ABC-A
// Link: https://atcoder.jp/contests/abc209/tasks/abc209_a
// Topics: Condition
/*
Time Limit: 2 sec / Memory Limit: 1024 MiB

Score : 
100 points

Problem Statement
How many integers not less than 
A and not more than 
B are there?

Constraints
1≤A≤100
1≤B≤100
A and 
B are integers.
Input
Input is given from Standard Input in the following format:

A 
B
Output
Print the number of integers not less than 
A and not more than 
B.

Sample Input 1
Copy
2 4
Sample Output 1
Copy
3
We have three integers not less than 
2 and not more than 
4: 
2, 
3, 
4, so we should print 
3.

Sample Input 2
Copy
10 100
Sample Output 2
Copy
91
Sample Input 3
Copy
3 2
Sample Output 3
Copy
0
We have no integers not less than 
3 and not more than 
2, so we should print 
0.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;

    if(a > b) cout << 0 << endl;
    else cout << b - a + 1 << endl;

    return 0;
}