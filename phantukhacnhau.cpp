#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n + 5], b[n +5];
		for(int i = 0 ;i < n; i++) cin >> a[i];
		for(int i = 0 ;i < n - 1; i++) cin >> b[i];
		for(int i = 0; i < n; i++){
			if(a[i] != b[i]){
				cout << i + 1 << endl;
				break;
			}
		}
	}
}
