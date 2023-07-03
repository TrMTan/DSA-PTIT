#include<bits/stdc++.h>

using namespace std;

const long long INF = 1e18;

typedef pair<long long, long long> ll;

int v, e, x, y, z;
vector<vector<ll>> a;
long long cnt[100001]; // dem so duong di
long long d[100001]; // do dai duong di ngan nhat

void dmin(){
	cnt[1] = 1;
	d[1] = 0;
	for(int i = 2; i <= v; i++){
		d[i] = INF;
	}
	priority_queue<ll, vector<ll>, greater<ll>> q;
	q.push(ll(0, 1));
	while(!q.empty()){
		long long c = q.top().second;
		q.pop();
		if(c == v){
			cout << d[v] << " " << cnt[v] << endl;
			return;
		}
		for(int i = 0; i < a[c].size(); i++){
			long long k = a[c][i].first;
			long long duv = a[c][i].second;
			if(d[k] > d[c] + duv){
				d[k] = d[c] + duv;
				cnt[k] = cnt[c];
				q.push(ll(d[k], k));
			}else if(d[k] == d[c] + duv){
				cnt[k] += cnt[c];
			}
		}
	}
}

void check(){
	cin >> v >> e;
	a.resize(v + 1);
	for(int i = 0; i < e; i++){
		cin >> x >> y >> z;
		a[x].push_back(ll(y, z));
		a[y].push_back(ll(x, z));
	}
	dmin();
}

int main(){
	check();
	cout << endl;
	return 0;
}
