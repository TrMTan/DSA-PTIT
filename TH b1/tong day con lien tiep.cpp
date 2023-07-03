#include<bits/stdc++.h>

using namespace std;

bool ktra(vector<int>& a){
	int sum = accumulate(a.begin(), a.end(), 0);
	if(sum % 2 != 0) return false;
	int target = sum / 2;
	vector<bool> b(target + 1, false);
	b[0] = true;
	for(int i : a){
		for(int j = target; j >= 0; j--){
			b[j] = b[j] || b[j - i];
		}
	}
	return b[target];
}

int main(){
	int n; cin >> n;
	vector<int> a(n);
	for(int &i : a) cin >> i;
	int sum = accumulate(a.begin(), a.end(), 0);
	int target = sum / 2;
	while(!ktra(a)){
		target--;
	}
	cout << target << endl;
}
