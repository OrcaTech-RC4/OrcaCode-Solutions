/*
 * Essentially, instead of concatenating all the strings together,
 * we keep track of which element is to be printed next.
 */

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll N; cin >> N;
    vector<string> S(N);
    vector<int> next(N + 1); // Given the string number, next[num] gives the next string to be printed
    vector<int> end(N + 1);  // A helper vector to give us the end of the "string list" in O(1) time

    for (int i = 0; i <= N; i ++) end[i] = i; 

    for (int i = 0; i < N; i++) cin >> S[i];
    
    int a, b;
    ll sum = 0;
    for (int i = 0; i < N - 1; i++) {
        cin >> a >> b;
        next[end[a]] = b;
        end[a] = end[b];
        sum += b;
    }

    // Find the index of the first string we need to print
    sum = N * (N + 1) / 2 - sum;

    while (sum) {
        cout << S[sum - 1];
        sum = next[sum];
    }
}
