#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	for(int i=2;i<=sqrt(n);i++){
		int dem=0;
		if(n%i==0){
			while(n%i==0){
				dem++;
				n/=i;
			}
		cout<<i<<" "<<dem<<endl;
		}
	}
	if(n>1) cout<<n<<" "<<"1";
}
