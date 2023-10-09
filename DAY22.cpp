#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin >> t;
    while (t--)
    {
        string f, c;
        cin >> f;
        cin.ignore();
        getline(cin, c);
        int a[26] = {0};
        for (int i = 0; i < c.size(); i++)
        {
            if (c[i] >= 'a' && c[i] <= 'z')
                a[c[i] - 'a']++;
            else if (c[i] >= 'A' && c[i] <= 'Z')
                a[c[i] - 'A']++;
        }
        vector<pair<int, char>> v;
        for (int i = 0; i < 26; i++)
            v.push_back({a[i], ('a' + i)});
        sort(v.begin(), v.end());
        unordered_map<char, char> m;
        for (int i = 0; i < 26; i++)
            if (v[i].first != 0)
                m[v[i].second] = f[i];
        for (int i = 0; i < c.size(); i++)
        {
            if (c[i] >= 'a' && c[i] <= 'z')
                cout << m[c[i]];
            else if (c[i] >= 'A' && c[i] <= 'Z')
                cout << char('A' + (m['a' + (c[i] - 'A')] - 'a'));
            else
                cout << c[i];
        }
        cout << "\n";
    }
	return 0;
}
