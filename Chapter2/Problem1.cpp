#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int S[100001] = {0};
    for (int i =1;i<=n;i++) {
        int temp; cin >> temp;
        S[i] = temp + S[i-1];
    }

    int q; cin >> q;
    while (q--) {
        int i; cin >> i;
        int j; cin >> j;
        cout << S[j] - S[i-1] << endl;
    }
    return 0;
}