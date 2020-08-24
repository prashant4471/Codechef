#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 500005;
const int mo = 1e9 + 7;
int fni[N + 1];
int nni[N + 1];
int factori[N + 1];
int sol[N + 1] = {1};
int nCr(int n, int r) {
    return ((factori[n] * fni[r]) % mo * fni[n - r]) % mo;
}
int sum_NcR(int n, int r) {
    int sum = 0;
    for (int i = 0; i <= r; ++i)
        sum = (sum + nCr(n, i)) % mo;
    return sum;
}
void initiate() {
    nni[0] = nni[1] = 1;
    for (int i = 2; i <= N; i++)
        nni[i] = nni[mo % i] * (mo - mo / i) % mo;
    fni[0] = fni[1] = 1;
    for (int i = 2; i <= N; i++)
        fni[i] = (nni[i] * fni[i - 1]) % mo;
    factori[0] = 1;
    for (int i = 1; i <= N; i++)
        factori[i] = (factori[i - 1] * i) % mo;
}
void handleWorst(int n) {
    for (int i = 1; i < n; ++i)
        if (sol[i] == 0)
            sol[i] = (sol[i - 1] << 1) % mo;
    reverse_copy(begin(sol), begin(sol) + n, ostream_iterator<int>(cout, " "));
}
signed main() {
    initiate();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 0, _; i < n; ++i) {
            cin >> _;
            ++v[_];
        }
if (all_of(v.begin() + 1, v.end(), [](auto &a) { return a == 1; }))
            handleWorst(n);
        else
            for (int i = 1; i <= n; ++i) {
                if (v[i] == 0) {
                    cout << "0 ";
                    continue;
                }
                int sum = 0;
                for (int j = 1; j <= v[i]; ++j) {
                    int x = nCr(v[i], j);
                    for (int k = 1; k < i; ++k)
                        if (v[k] != 0)
                            x = (x * sum_NcR(v[k], min(j - 1, v[k]))) % mo;
                    for (int k = i + 1; k <= n; ++k)
                        if (v[k] != 0)
                            x = (x * sum_NcR(v[k], min(j, v[k]))) % mo;
                    sum = (sum + x) % mo;
                }
                cout << sum << ' ';
            }
        cout << '\n';
    }
    return 0;
}
