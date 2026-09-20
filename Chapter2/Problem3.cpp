#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long M;
    cin >> n >> M;

    vector<long long> a(n);
    for (long long &value: a) {
        cin >> value;
    }

    sort(a.begin(), a.end());

    int left = 0, right = n - 1;
    long long pairCount = 0;

    while (left < right) {
        long long currSum = a[left] + a[right];

        if (currSum == M) {
            pairCount++;
            ++left;
            --right;
        } else if (currSum > M) {
            --right;
        } else {
            ++left;
        }
    }

    cout << pairCount << '\n';
    return 0;
}
