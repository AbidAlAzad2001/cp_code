#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()


void shomadhan(){
    int n, k;
    cin>>n>>k;
    vector<int>f(n+2,0);
    for (int i=0;i<n;i++) {
        int x;
        cin>>x;
        if (x<n+2) f[x]++;
    }
    int mex = 0;
    while (f[mex] > 0)
    {
        mex++;
    }
    int ans = min(mex, k-1);
    cout<<ans<<endl;
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