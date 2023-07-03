#include<bits/stdc++.h>

using namespace std;

const int MAX_WEIGHT = 100;

int n = 12;
int w[12];
int mindiff = MAX_WEIGHT * 12;
vector<int> s(12);

void check(int p){
	if(p == n){
		int sumw[4] = {0, 0, 0, 0};
		for(int i = 0; i < 4; i++){
			for(int j = 0; j < s.size(); j++){
				sumw[i] += w[s[i][j]];
			}
		}
		int maxw = *max_element(sumw, sumw + 4);
		int minw = *min_element(sumw, sumw + 4);
		int diff = maxw - minw;
		if(diff < mindiff) 
	}
}


int main(){
	

} 
