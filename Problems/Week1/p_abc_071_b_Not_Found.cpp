// Problem: B - Not Found
// Platform: Atcoder
// Difficulty: ABC-B
// Link: https://atcoder.jp/contests/abc071/tasks/abc071_b
// Topics: Frequency Array, Conditions, Loop
/*
Time Limit: 2 sec / Memory Limit: 256 MiB

Score : 
200 points

Problem Statement
You are given a string 
S consisting of lowercase English letters. Find the lexicographically (alphabetically) smallest lowercase English letter that does not occur in 
S. If every lowercase English letter occurs in 
S, print None instead.

Constraints
1≤∣S∣≤10 
5
  (
∣S∣ is the length of string 
S.)
S consists of lowercase English letters.
Input
Input is given from Standard Input in the following format:

S
Output
Print the lexicographically smallest lowercase English letter that does not occur in 
S. If every lowercase English letter occurs in 
S, print None instead.

Sample Input 1
Copy
atcoderregularcontest
Sample Output 1
Copy
b
The string atcoderregularcontest contains a, but does not contain b.

Sample Input 2
Copy
abcdefghijklmnopqrstuvwxyz
Sample Output 2
Copy
None
This string contains every lowercase English letter.

Sample Input 3
Copy
fajsonlslfepbjtsaayxbymeskptcumtwrmkkinjxnnucagfrg
Sample Output 3
Copy
d
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    bool freq[26];
    memset(freq, false, sizeof(freq));

    string s; cin >> s;
    for(char x : s)
        if(!freq[x - 'a'])
            freq[x - 'a'] = true;
            
            
    for(int i = 0; i < 26; i++)
        if(!freq[i]) {
            cout << (char)(i+'a') << endl;
            return 0;
        }

    cout << "None" << endl;

    return 0;
}