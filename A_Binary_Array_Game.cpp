#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()


void shomadhan(){
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i=0;i<n;i++) cin>>a[i];
    if (a[0] == 0 and a[n - 1] == 0) cout << "Bob\n";
    else cout << "Alice\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        // cout << \"Case #\" << i << \": \"; // cout << \"Case \" << i << \": \";
     shomadhan();
        
    }
    return 0;
}