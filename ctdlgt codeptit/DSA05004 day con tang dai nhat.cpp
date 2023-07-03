#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n], l[n]; //l de luu do dai day con tang dai nhat ket thuc o chi so i
	for(int &i : a) cin >> i;
	for(int i = 0; i < n; i++){
		l[i] = 1;
		for(int j = 0; j < i; j++){ // duyet qua tung phan tu dung truoc chi so i
			if(a[i] > a[j]){
				l[i] = max(l[i], l[j] + 1);
			}
		}
	}
	cout << *max_element(l, l + n);
}
