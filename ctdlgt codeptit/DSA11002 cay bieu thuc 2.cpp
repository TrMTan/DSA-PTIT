#include<bits/stdc++.h>

using namespace std;

int n;
string a[150];

struct Node{
	string s;
	Node *left, *right;
};

typedef Node* Tree;

Tree createNode(string s){
	Tree res = new Node;
	res->s = s;
	res->left = res->right = NULL;
	return res;
}

Tree buildTree(Tree t, int i){
	if(i < n){
		t = createNode(a[i]);
		t->left = buildTree(t->left, (i << 1) + 1);
		t->right = buildTree(t->right, (i << 1) + 2);
	}
	return t;
}

long long cal(Tree t){
	if(t->s != "+" && t->s != "-" && t->s != "*" && t->s != "/" ){
		return stoll(t->s);
	}
	if(t->s == "+"){
		return cal(t->left) + cal(t->right);
	}
	else if(t->s == "-"){
		return cal(t->left) - cal(t->right);
	}
	else if(t->s == "*"){
		return cal(t->left) * cal(t->right);
	}
	else if(t->s == "/"){
		return cal(t->left) / cal(t->right);
	}
}

void check(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	Tree a = NULL;
	a = buildTree(a, 0);
	cout << cal(a) << endl;
	delete a;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();		
		cout << endl;
	}
}
