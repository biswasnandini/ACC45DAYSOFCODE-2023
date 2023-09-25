//Buying new tablet
#include <iostream>
using namespace std;

int main() {
    int t, n, b, i;
    cin >> t;
    while (t--) {
        cin >> n >> b;
        int area[n];
        int max = 0;
        int p[n], w[n], h[n];
        int count = 0;
        for (i = 0; i < n; i++) {
            cin >> w[i] >> h[i] >> p[i];
        }
        for (i = 0; i < n; i++) {
            if (p[i] <= b) {
                area[i] = w[i] * h[i];
                if (area[i] > max) {
                    max = area[i];
                    count++;
                }
            }
        }
        if (count == 0) {
            cout << "no tablet" << endl;
        } else {
            cout << max << endl;
        }
    }
    return 0;
}
