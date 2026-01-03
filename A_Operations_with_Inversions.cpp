#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()


void shomadhan(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int cnt =0;
    int x =a[0];
    for(int i=1;i<n;i++)
    {
        if(x>a[i])
            cnt++;
        else    
            x = max(x,a[i]);
    }  
    cout<<cnt<<endl;
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