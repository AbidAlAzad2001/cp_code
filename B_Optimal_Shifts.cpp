#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()


void shomadhan(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt =0;
    int mx = INT_MIN;
    s= s+s+'1';
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
            cnt++;
        else
        {
            mx = max(mx,cnt);
            cnt=0;
        }
    }
    cout<<mx<<endl;
    
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