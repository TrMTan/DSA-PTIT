//#include<bits/stdc++.h>
//
//using namespace std;
//
//// A la 0, H la 1
//int n, a[100], ok = 1;
//
//void ktao(){
//	for(int i = 1; i <= n; i++) a[i] = 0;
//}
//
//void xnpkt(){
//	int i = n;
//	while(i >= 1 && a[i] == 1){
//		a[i] = 0;
//		i--;
//	}
//	if(i == 0) ok = 0;
//	else a[i] = 1; 	
//}
//
//bool check(){
//	if(a[1] == 0 || a[n] == 1) return false;
//	for(int i = 1; i <= n - 1; i++){
//		if(a[i] == 1 && a[i + 1] == 1){
//			return false;
//		}
//	}
//	return true;
//}
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		cin >> n;
//		ktao();
//		ok = 1;
//		while(ok){
//			if(check()){
//				for(int i = 1; i <= n; i++){
//					if(a[i] == 0) cout << "A";
//					else cout << "H";
//				}
//				cout << endl;
//			}
//			xnpkt();
//		}
//	}	
//}

#include<bits/stdc++.h>

using namespace std;

int n;

void check(string s){
	if(s[0] != 'H' || s[s.length() - 1] != 'A') return;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'H' && s[i + 1] == 'H'){
			return;
		} 
	}
	cout << s << endl;
}

void xnpkt(string s){
	if(s.length() == n){
		check(s);
	}else{
		xnpkt(s + 'A');
		xnpkt(s + 'H');
	} 
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		xnpkt("");
	}
}


