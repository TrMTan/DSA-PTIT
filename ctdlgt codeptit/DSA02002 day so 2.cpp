#include<bits/stdc++.h>

using namespace std;

int n, a[100];
stack<string> st;

void sinhds(int a[], int n){
	if(n > 0){
		string s = "";
		s += "[";
		for(int i = 0; i < n - 1; i++){
			s += to_string(a[i]);
			s += " ";
		}
		s += to_string(a[n - 1]);
		s += "]";
		s += " ";
		for(int i = 0; i < n - 1; i++){
			a[i] = a[i] + a[i + 1];
		}
		st.push(s);
		sinhds(a, n - 1);
	}
}

void check(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sinhds(a, n);
	while(st.size()){
		cout << st.top();
		st.pop();
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
