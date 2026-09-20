#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);;

    int n, Q;
    cin >> n >> Q;
    vector<int> a(n);

    for (int &value: a) {
        cin >> value;
    }

    int left = 0, maxLength = 0;
    long long windowSum = 0;

    for (int right = 0; right < n; right++) {
        windowSum += a[right];

        while (left <= right && windowSum > Q) {
            windowSum -= a[left];
            left++;
        }

        if (left <= right) {
            int currentLength = right - left + 1;
            maxLength = max(maxLength, currentLength);
        }
    }

    if (maxLength == 0) cout << -1 << "\n";
    else cout << maxLength << "\n";
    return 0;
}
