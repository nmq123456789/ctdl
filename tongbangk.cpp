#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
int main(){
    int t, n, s;
    cin >> t;
    while(t--){
        cin >> n >> s;
        int a[n + 5];
        for(int i = 0; i < n; i++) cin >> a[i];
        long long f[s + 5];
        memset(f, 0, sizeof(f));
        f[0] = 1;
        for(int i = 1; i <= s; i++){
            for(int j = 0; j < n; j++){
                if( i >= a[j]) f[i] = (f[i] + f[i - a[j]]) % mod; 
            }
        }
        cout << f[s] << endl;
    }
}