#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	for(int i = 0; i < n - 1; i++){
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		swap(a[i], a[min]);
		cout << "Buoc " << i + 1 << ": ";
		for(int k = 0; k < n; k++){
			cout << a[k] << " ";
		}
		cout << endl;
	}	
}
