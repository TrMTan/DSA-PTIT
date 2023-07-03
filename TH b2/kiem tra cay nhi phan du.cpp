#include<bits/stdc++.h>

using namespace std;

struct node {
	int data;
	node *left;
	node *right;
};

typedef node* tree;

tree themnode(int x){
	tree res = new node;
	res->data = x;
	res->left = res->right = NULL;
	return res;
}

void build(tree &a, char c, int par, int child){
	if(a != NULL){
		if(a->data == par){
			if(c == 'L'){
				a->left = themnode(child);
			}else{
				a->right = themnode(child);
			}
		}
		build(a->left, c, par, child);
		build(a->right, c, par, child);
	}
}

bool fulltree(tree t){
	if(!t) return true;
	if(!t->left && !t->right) return true;
	if(t->left && t->right){
		return fulltree(t->left) && fulltree(t->right);
	}
	return false;
}

void check(){
	int n; cin >> n;
	tree t = NULL;
	int par, child;
	char c;
	cin >> par >> child >> c;
	t = themnode(par);
	build(t, c, par, child);
	--n;
	while(n--){
		cin >> par >> child >> c;
		build(t, c, par, child);
	}
	if(fulltree(t)){
		cout << "YES";
	}else{
		cout << "NO";
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}
