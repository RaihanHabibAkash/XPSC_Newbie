// Problem: Heat Wave
// Platform: CodeChef
// difficulty: 284
// Link: https://www.codechef.com/problems/HEATWAVE
// Solved: Condition
/*
During a scorching heat wave, the temperature in a Chefland reached a record high of 
X
X degrees.

The next day, the recorded temperature was 
Y
Y degrees. Find whether this was a new record high or not.

Input Format
The first and only line of input will contain two space separated integers 
X
X and 
Y
Y denoting the highest recorded temperature and the temperature on a given day respectively.
Output Format
Output on a new line, YES, if a new high was created. Otherwise print NO.

You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

Constraints
100
≤
X
,
Y
≤
150
100≤X,Y≤150
Sample 1:
Input
Output
135 110
NO
Explanation:
The temperature recorded is 
110
110 which is less than the highest recorded temperature. Thus, it did not make a new high.

Sample 2:
Input
Output
121 121
NO
Explanation:
The temperature recorded is 
121
121 which is equal to the highest recorded temperature. Thus, it did not make a new high.

Sample 3:
Input
Output
101 150
YES
Explanation:
The temperature recorded is 
150
150 which is greater than the highest recorded temperature. Thus, it made a new high.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;

    if(a < b) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}