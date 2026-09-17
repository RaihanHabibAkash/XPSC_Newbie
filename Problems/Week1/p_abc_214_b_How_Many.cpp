// Problem: B - How many?
// Platform: Atcoder
// Difficulty: ABC-B
// Link: https://atcoder.jp/contests/abc214/tasks/abc214_b
// Topics: Nested Loops
/*
Time Limit: 2 sec / Memory Limit: 1024 MiB

Score : 
200 points

Problem Statement
How many triples of non-negative integers 
(a,b,c) satisfy 
a+b+c≤S and 
a×b×c≤T?

Constraints
0≤S≤100
0≤T≤10000
S and 
T are integers.
Input
Input is given from Standard Input in the following format:

S 
T
Output
Print the number of triples of non-negative integers 
(a,b,c) satisfying the conditions.

Sample Input 1
Copy
1 0
Sample Output 1
Copy
4
The triples 
(a,b,c) satisfying the conditions are 
(0,0,0), 
(0,0,1), 
(0,1,0), and 
(1,0,0) ― there are four of them.

Sample Input 2
Copy
2 5
Sample Output 2
Copy
10
Sample Input 3
Copy
10 10
Sample Output 3
Copy
213
Sample Input 4
Copy
30 100
Sample Output 4
Copy
2471
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, cnt = 0; cin >> a >> b;

    for(int i = 0; i <= a; i++)
        for(int j = 0; j <= a; j++)
            for(int k = 0; k <= a; k++)
                if(i+j+k <= a && i*j*k <= b) 
                    cnt++;

    cout << cnt << endl;

    return 0;
}