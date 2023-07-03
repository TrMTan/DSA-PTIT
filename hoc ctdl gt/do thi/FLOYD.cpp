#include<bits/stdc++.h>

using namespace std;

const int INF = 1e9; 

int a[100][100], e[100][100], v, d[100][100];

void FLOYD(int a[][100]) {
    for (int i = 1; i <= v; i++) {
        for (int j = 1; j <= v; j++) {
            d[i][j] = a[i][j];
            e[i][j] = i;
        }
    }
    for (int k = 1; k <= v; k++) {
        for (int i = 1; i <= v; i++) {
            for (int j = 1; j <= v; j++) {
                if (d[i][j] > d[i][k] + d[k][j]) {
                    d[i][j] = d[i][k] + d[k][j];
                    e[i][j] = k;
                }
            }
        }
    }
    for (int i = 1; i <= v; i++) {
        if (d[i][i] < 0) {
            cout << "Do thi co chua chu trinh am";
            break;
        }
    }
    cout << "Khoang cach va duong di:" << endl;
    for (int i = 1; i <= v; i++) {
        for (int j = 1; j <= v; j++) {
            if (i != j) {
                cout << "Khoang cach tu dinh " << i << " den dinh " << j << ": " << d[i][j] << endl;
                cout << "Duong di: " << i << " ";
                int k = e[i][j];
                while (k != j) {
                    cout << k << " ";
                    k = e[k][j];
                }
                cout << j << endl;
            }
        }
    }
}

int main() {
    v = 4; 
    for (int i = 1; i <= v; i++) {
        for (int j = 1; j <= v; j++) {
            if(i != j){
            	a[i][j] = INF; 
			}
        }
    }
    a[1][1] = 0;
    a[1][2] = 4;
    a[1][3] = 3;
    a[2][2] = 0;
    a[2][3] = 2;
    a[3][3] = 0;
    a[3][4] = 2;
    a[4][1] = 1;
    a[4][4] = 0;
    FLOYD(a);
    return 0;
}

