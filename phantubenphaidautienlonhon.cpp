#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n + 5], b[n + 5];
		stack < int > st;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++){
			if(st.empty()){
				st.push(i);
			}
			else{
				while(!st.empty() && a[i] > a[st.top()]){
					b[st.top()] = a[i];
					st.pop();
				}
				st.push(i);
			}
		}
		while(!st.empty()){
			b[st.top()] = -1;
			st.pop();
		}
		for(int i = 0; i < n; i++) cout << b[i] << " ";
		cout << endl;
	}
}
