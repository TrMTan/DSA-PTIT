#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	for(int i = 0; i < n; i++){
		int x = a[i], pos = i - 1;
		while(pos >= 0 && a[pos] > x){
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = x;
		cout << "Buoc " << i << ": ";
		for(int k = 0; k <= i; k++){
			cout << a[k] << " ";
		}
		cout << endl;
	}	
}
