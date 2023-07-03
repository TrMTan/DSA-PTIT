#include<bits/stdc++.h>

using namespace std;

int n, k;
vector<int> a, b; // a: nhap dau vao, b: luu chi so 
bool kt;

void print(){
	int sum = 0;
	for(int i = 0; i < b.size(); i++){
		sum += a[b[i]];
	}
	if(sum == k){
		kt = true;
		cout << "[";
		for(int i = 0; i < b.size(); i++){
			cout << a[b[i]];
			if(i != b.size() - 1) cout << " ";
		}
		cout << "] ";
	}
}

void Try(int i){
	for(int j = 1; j >= 0; j--){
		if(j == 1) b.push_back(i);
		if(i == n - 1) print();
		else Try(i + 1);
		if(j == 1) b.pop_back();
	}
}

void check(){
	cin >> n >> k;
	a.resize(n);
	kt = false;
	for(int &i : a) cin >> i;
	sort(a.begin(), a.end());
	Try(0);
	if(!kt) cout << "-1";
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
