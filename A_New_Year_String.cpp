#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()


void shomadhan(){
    int n,f=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i+3<n;i++)
    {
        string a = s.substr(i,4);
        if(a == "2026")
        {
            cout<<0<<endl;
            return;
        }
        else if(a == "2025")
        {
            f = 1;
        }
    }
    if(f)
        cout<<1<<endl;
    else    cout<<0<<endl;
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