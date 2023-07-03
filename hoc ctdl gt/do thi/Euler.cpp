#include<bits/stdc++.h>

using namespace std;

int a[100][100], CE[100], n;

void EULER(int a[][100]){
	int u = 1; // dinh bat dau tai dinh 1
	stack<int> s;
	s.push(u); // them dinh u vao stack
	int t = 1;
	while(!s.empty()){ // lap den khi stack dung
		int v = s.top();
		int x = 1;
		while(x <= n && a[v][x] == 0) x++;
		if(x <= n){
			s.push(x);
			a[v][x] = 0;
			a[x][v] = 0;
		}else{
			CE[t] = v;
			t++;
			s.pop();
		}
	}
	for(int i = t - 1; i > 0; i--){
		cout << CE[i] << " "; 
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	EULER(a);
}

//0 1 0 0 1 0 0 1 0 1
//1 0 1 1 0 1 0 0 0 0
//0 1 0 1 0 0 0 0 0 0
//0 1 1 0 0 0 0 0 0 0
//1 0 0 0 0 1 1 1 1 1
//0 1 0 0 1 0 0 0 0 0
//0 0 0 0 1 0 0 1 1 1
//1 0 0 0 1 0 1 0 0 1
//0 0 0 0 1 0 1 0 0 0
//1 0 0 0 1 0 1 1 0 0


