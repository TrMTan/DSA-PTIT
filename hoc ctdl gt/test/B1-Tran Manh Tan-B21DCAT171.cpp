#include<bits/stdc++.h>
//Tran Manh Tan B21DCAT171
using namespace std;

void selectionSort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		int min_idx = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min_idx]){
				min_idx = j;
			}
		}
		swap(a[i], a[min_idx]);
	}
} 

void insertionSort(int a[], int n){
	for(int i = 0; i < n; i++){
		int x = a[i], pos = i - 1;
		while(pos >= 0 && a[pos] > x){
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = x;
	}
}

void bubbleSort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		bool check = false; // ktra da sap xep hay chua
		for(int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j + 1]){
				swap(a[j], a[j + 1]);
				check = true;
			}
		} 
		if(!check) break;
	}
}

int binarySearch(int a[], int n, int x){
	int l = 0, r = n - 1;
	while(l <= r){
		int mid = (l + r) / 2;
		if(a[mid] == x) return mid;
		else if (a[mid] < x) l = mid + 1;
		else r = mid - 1;
	}
	return -1;
}

void readfile(const string& filename, int a[], int& n, int& x){
	ifstream IP(filename);
	IP >> n;
	for(int i = 0; i < n; i++){
		IP >> a[i];
	}
	IP >> x;
	IP.close();
}

void print(int a[], int n){
	for(int i = 0; i < n; i++){
        cout << a[i] << " "; 
    }
    cout << endl;
}

int main(){
	int n;
	int* a = new int[n];
	int x;
	string filename = "data.txt";
	readfile(filename, a, n, x); // doc file
	cout << "Selection Sort: ";
	selectionSort(a, n); 
    print(a, n);
    cout << "Insertion Sort: ";
    insertionSort(a, n);
    print(a, n);
    cout << "Bubble Sort: ";
    bubbleSort(a, n);
    print(a, n);
	int vt = binarySearch(a, n, x);
	if(vt == -1) cout << "khong tim thay " << x;
	else cout << "Vi tri " << vt + 1 << endl; 
	delete[] a;
}

