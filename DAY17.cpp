//Codechef streak
#include <bits/stdc++.h>
using namespace std;
#ifdef tabr
#include "library/debug.cpp"
#else
#define debug(...)
#endif

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        auto f = [&](vector<int> c) {
            int t = 0;
            for (int i = 0, j = 0; i < n; i = j) {
                if (c[i] == 0) {
                    j = i + 1;
                    continue;
                }
                while (j < n && c[j]) {
                    j++;
                }
                t = max(t, j - i);
            }
            return t;
        };
        if (f(a) > f(b)) {
            cout << "Om" << '\n';
        } else if (f(a) < f(b)) {
            cout << "Addy" << '\n';
        } else {
            cout << "Draw" << '\n';
        }
    }
    return 0;
}
