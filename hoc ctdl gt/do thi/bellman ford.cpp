#include <iostream>
#include <climits>
using namespace std;

int v, a[100][100], d[100], e[100];
void BELLMAN(int u) {
    int dem, i, j;
    for (i = 1; i <= v; i++) {
        d[i] = a[u][i]; e[i] = u;
    }
    d[u] = e[u] = 0;
    int ok = 0;
    for (dem = 1; dem < v; dem++) {
        ok = 1;
        for (j = 1; j <= v; j++) {
            for (i = 1; i <= v; i++) {
                if (d[j] > d[i] + a[i][j]) {
                    d[j] = d[i] + a[i][j];
                    e[j] = i;
                    ok = 0;
                }
            }
        }
        if (ok) break;
    }
    if (!ok) cout << "Do thi chua chu trinh am";
    else {
        for (i = 1; i <= v; i++) {
            if (d[i] != INT_MAX) {
                if (i != u) {
                    cout << "Duong di tu " << u << " den " << i << " co do dai " << d[i] << ": ";
                    j = i;
                    while (j != u) {
                        cout << j << " <- ";
                        j = e[j];
                    }
                    cout << u << '\n';
                }
            }
            else cout << "Khong co duong di tu " << u << " den " << i << '\n';
        }
    }
}

int main() {
    cout << "Nhap so dinh trong do thi: ";
    cin >> n;

    cout << "Nhap ma tran trong so a[][]:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Nhap dinh xuat phat: ";
    cin >> u;

    if (BellmanFord(u)) {
        cout << "Do thi chua chu trinh am!" << endl;
    } else {
        cout << "Duong di ngan nhat tu dinh " << u << ":" << endl;
        for (int i = 1; i <= n; i++) {
            if (i != u) {
                cout << "Dinh " << i << ": ";
                if (d[i] == INT_MAX) {
                    cout << "Khong ton tai duong di" << endl;
                } else {
                    cout << d[i] << endl;
                }
            }
        }
    }

    return 0;
}

