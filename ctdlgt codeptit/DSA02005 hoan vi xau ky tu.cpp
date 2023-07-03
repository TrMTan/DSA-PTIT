#include<bits/stdc++.h>

using namespace std;

string s;
int vs[100];
int a[100];

void print(){
	for(int j = 1; j <= s.size(); j++){
		cout << s[a[j]];
	}
	cout << " ";
}

void hvxkt(int m){
	for(int i = 0; i < s.size(); i++){
		if(vs[i] == 0){
			a[m] = i;
			vs[i] = 1;
			if(m == s.size()) print();
			else hvxkt(m + 1);
			vs[i] = 0;
		}
	}	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		sort(s.begin(), s.end());
		hvxkt(1);
		cout << endl;
	}
}

