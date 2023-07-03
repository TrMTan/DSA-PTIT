#include<bits/stdc++.h>

using namespace std;

//void check(){
//	int n, k;
//	cin >> n >> k;
//	int a[n];
//	for(int &i : a) cin >> i;
//	for(int i = 0; i <= n - k; i++){
//		int tmp = INT_MIN;
//		for(int j = 0; j < k; j++){
//			tmp = max(tmp, a[i + j]);
//		}
//		cout << tmp << " ";	
//	}
//	cout << endl;
//}

//void check(){
//	int n, k;
//	cin >> n >> k;
//	int a[n];
//	for(int &i : a) cin >> i;
//	multiset<int> ms;
//	for(int i = 0; i < k; i++){
//		ms.insert(a[i]);
//	}
//	cout << *ms.rbegin() << " ";
//	for(int i = k; i <= n - 1; i++){
//		// xoa phan tu o chi so i - k
//		// them phan tu o chi so i
//		ms.erase(ms.find(a[i - k]));
//		ms.insert(a[i]);
//		cout << *ms.rbegin() << " ";
//	}
//	cout << endl;
//}

void check(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int &i : a) cin >> i; 
	deque<int> dq;
	for(int i = 0; i < n; i++){
		if(dq.front() == i - k) dq.pop_front();
		while(!dq.empty() && a[i] >= a[dq.back()]){
			dq.pop_back();
		}
		dq.push_back(i);
		if(i + 1 >= k) cout << a[dq.front()] << " ";
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
	}
}
