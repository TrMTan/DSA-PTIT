#include<bits/stdc++.h>

using namespace std;

int n, k, ans = 0;
vector<int> a, b, c;

void print(){
	vector<int> tmp = c;
	sort(tmp.begin(), tmp.end());
	if(tmp == c) ans++;
}

void sinh(int i){
	for(int j = b[i - 1] + 1; j <= n - k + i; j++){
		b[i] = j;
		c[i] = a[b[i]];
		if(i == k) print();
		else sinh(i + 1);
	}
}

void check(){
	cin >> n >> k;
	a.resize(n + 1); // mang ban dau
	b.resize(k + 1, 0); // tim to hop cac day con tang dan
	c.resize(k + 1, 0); // de luu cac day con tang dan
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sinh(1);
	cout << ans;
}

int main(){
	check(); cout << endl;
}
