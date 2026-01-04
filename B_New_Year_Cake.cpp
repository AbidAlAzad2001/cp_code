
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void Solve()
{
    ll a, b;
    cin >> a >> b;
    ll ans = 0;

    // ababab
    {
        ll A = a, B = b;
        for (int i = 0; i < 25; i++) {
            ll need = 1ll << i;
            if (i & 1) {
                if (B >= need)
                    B -= need;
                else {
                    ans = max(ans, i);
                    break;
                }
            } else {
                if (A >= need)
                    A -= need;
                else {
                    ans = max(ans, i);
                    break;
                }
            }
        }
    }

    // bababa
    {
        ll A = b, B = a;
        for (int i = 0; i < 25; i++) {
            ll need = 1ll << i;
            if (i & 1) {
                if (B >= need)
                    B -= need;
                else {
                    ans = max(ans, i);
                    break;
                }
            } else {
                if (A >= need)
                    A -= need;
                else {
                    ans = max(ans, i);
                    break;
                }
            }
        }
    }
    cout << ans << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        Solve();
    }
    return 0;
}

