#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	for(int i = 0; i < n - 1; i++){
		bool check = false; // kiem tra xem da sap xep chua, neu sap xep r thi in ra
		for(int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j + 1]){
				swap(a[j], a[j + 1]);
				check = true;
			}
		}
		if(check){
			cout << "Buoc " << i + 1 << ": ";
			for(int k = 0; k < n; k++){
				cout << a[k] << " ";
			}
			cout << endl;
		}else break;
	}	
}
