#include "bits/stdc++.h"
using namespace std;

int main() {
    int T;
    int data[26];
    cin >> T;

    for (int i = 1; i <= T; i++) {
        
        for (int j = 0; j < 26; j++) {
            cin >> data[j];
        }

        int N;
        cin >> N;

        set<string> S;
        for (int j = 0; j < N; j++) {
            string W;
            cin >> W;

            string EnC = "";
            for (char c : W) {
                EnC += to_string(data[c - 'A']);
            }

            S.insert(EnC);
        }
        cout << "Case #" << i << ": ";
        if (S.size() < N) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
