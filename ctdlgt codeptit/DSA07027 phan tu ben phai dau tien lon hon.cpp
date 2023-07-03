#include<bits/stdc++.h>

using namespace std;

//void check(){
//	int n; cin >> n;
//	int a[n];
//	for(int &i : a) cin >> i;
//	for(int i = 0; i < n; i++){
//		int res = -1;
//		for(int j = i + 1; j < n; j++){
//			if(a[j] > a[i]){
//				res = a[j];
//				break;
//			}
//		}
//		cout << res << " ";
//	}
//}

void check(){
	int n; cin >> n;
	int a[n], b[n]; // b de luu ket qua
	for(int &i : a) cin >> i;
	stack<int> st;
	for(int i = 0; i < n; i++){
		if(st.empty()){
			st.push(i);
		}else{
			while(!st.empty() && a[st.top()] < a[i]){
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
	for(int i : b) cout << i << " ";
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
