#include<bits/stdc++.h>
using namespace std;

int a[100][100], ok, n;
char c[10000];
vector < vector < char > > v;


void ql(int i, int j ,int k){
	if(i == n && j == n){
		vector < char > res;
		for(int i = 1; i < k; i++) res.push_back(c[i]);
		v.push_back(res);
		ok = 1;
	}
	if(i + 1 <= n && a[i + 1][j] == 1){
		c[k] = 'D';
		a[i + 1][j] = 0;
		ql(i + 1, j, k + 1);
		a[i + 1][j] = 1;
	}
	if(j - 1 >= 1 && a[i][j - 1]){
		c[k] = 'L';
		a[i][j - 1] = 0;
		ql(i, j - 1, k + 1);
		a[i][j - 1] = 1;
	}
	if(j + 1 <= n && a[i][j + 1] == 1){
		c[k] = 'R';
		a[i][j + 1] = 0;
		ql(i, j + 1, k + 1);
		a[i][j + 1] = 1;
	}
	if(i - 1 >= 1 && a[i - 1][j]){
		c[k] = 'U';
		a[i - 1][j]=0;
		ql(i - 1, j, k + 1);
		a[i - 1][j]=1;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
			}
		}
		v.clear();
		ok = 0;
		if(a[1][1] == 1 && a[n][n] == 1){
			a[1][1] = 0;
			ql(1,1,1);
		}
		if(ok == 1){
			cout << v.size() << " ";
			for(auto x : v){
				for(int i = 0; i < x.size(); i++) cout << x[i];
				cout << " ";
			}
			cout << "\n";
		}
		else  cout << "-1\n";
	}
}
