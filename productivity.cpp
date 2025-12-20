#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    const int MAXA = 10000;


    vector<int> spf(MAXA + 1);
    for (int i = 1; i <= MAXA; i++) spf[i] = i;
    for (int i = 2; i * i <= MAXA; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= MAXA; j += i) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }

    unordered_map<int, vector<int>> mp;

    for (int x : a) {
        unordered_map<int, int> cnt;
        while (x > 1) {
            int p = spf[x];
            cnt[p]++;
            x /= p;
        }
        for (auto &kv : cnt) {
            mp[kv.first].push_back(kv.second);
        }
    }

    long long ans = 1;

    for (auto &kv : mp) {
        auto &exps = kv.second;

        if ((int)exps.size() < n - 1) continue;

        while ((int)exps.size() < n)
            exps.push_back(0);

        sort(exps.begin(), exps.end());

        int e = exps[1]; 

        for (int i = 0; i < e; i++)
            ans *= kv.first;
    }

    cout << ans << "\n";
    return 0;
}
