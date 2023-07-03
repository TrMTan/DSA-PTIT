//sd dfs
#include<bits/stdc++.h>

using namespace std;

int v, e, x, y; // v: dinh, e: canh
vector<int> ke[1001];  // lu ds ke
bool visited[1001];  // ktra da duoc tham hay chua

void dfs(int u){
	visited[u] = true; // danh dau la da duoc tham
//	cout << u << " ";
	for(int v : ke[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}

void lienthong(){
	int kq = 0;
	memset(visited, false, sizeof(visited));
	for(int i = 1; i <= v; i++){
		if(!visited[i]){
			kq++;
//			cout << "Cac dinh thuoc thanh phan lien thong thu " << kq << endl;
			dfs(i);
//			cout << endl;
		}
	}
//	cout << "So thanh phan lien thong: ";
	cout << kq;
}

void input(){
	// chuyen sang danh sach ke
	cin >> v >> e;
	for(int i = 1; i <= v; i++){
		ke[i].clear();
	}
	while(e--){
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		input();
		lienthong();
		cout << endl;
	}	
}

//#include <bits/stdc++.h>
//using namespace std;
//
//int V, E, u, v, lthong;
//vector<vector<int>> G;
//vector<bool> vs;
//
//void dfs(int s) {
//    stack<int> st;
//    st.push(s);
//    vs[s] = 1;
//    while (!st.empty()) {
//        u = st.top(); st.pop();
//        for (int v : G[u]) {
//            if (!vs[v]) {
//                vs[v] = 1;
//                st.push(u);
//                st.push(v);
//                break;
//            }
//        }
//    }
//}
//
//void testCase() {
//    lthong = 0;
//    cin >> V >> E;
//    G.clear(); G.resize(V + 10);
//    vs.clear(); vs.resize(V + 10, 0);
//    while (E--) {
//        cin >> u >> v;
//        G[u].push_back(v);
//        G[v].push_back(u);
//    }
//    for (int i = 1; i <= V; ++i) {
//        if (!vs[i]) {
//            dfs(i);
//            lthong++;
//        }
//    }
//    cout << lthong;
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//
//    int T = 1; cin >> T;
//    while (T--) {
//        testCase();
//        cout << "\n";
//    }
//    return 0;
//}
