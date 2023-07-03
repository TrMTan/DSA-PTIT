#include<bits/stdc++.h>

using namespace std;

//void check(){
//	string s; cin >> s;
//	int kq = 0;
//	queue<string> q;
//	q.push("1");
//	while(!q.empty()){
//		string a = q.front();
//		q.pop();
//		kq++;
//		string b = a + "0"; // 10
//		if(b.length() > s.length() || (b.length() == s.length() && b > s)) 
//			break;
//		//neu do dai cua b > s hoac do dai b = s nhung so b lai lon hon s thi dung
//		q.push(b); 
//		b = a + "1"; // 11
//		if(b.length() > s.length() || (b.length() == s.length() && b > s))
//			break;
//		//neu do dai cua b > s hoac do dai b = s nhung so b lai lon hon s thi dung
//		q.push(b); 
//	}
//	cout << kq + q.size();
//}

void check(){
	long long n; cin >> n;
	vector<int> a; // luu phan tu
	while(n){ // kt n > 0
		a.push_back(n % 10);
		n /= 10; // tach chu so		
	}
	reverse(a.begin(), a.end());  // dao nguoc vi phai them tu cuoi
	long long vt = a.size();
	for(int i = 0; i < a.size(); i++){ // ktra trong so co so nao lon hon 2 thi chuyen thanh 1 va cac so dung sau chuyen thanh 1
		if(a[i] >= 2){
			vt = i; break;
		}
	}
	for(int i = vt; i < a.size(); i++){
		a[i] = 1;
	}
	long long kq = 0;
	long long s = 1;
	for(int i = a.size() - 1; i >= 0; i--){ // chuyen ve thap phan
		kq += a[i] * s;
		s *= 2;
	}
	cout << kq;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
