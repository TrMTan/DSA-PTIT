#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};

typedef struct node Node;
typedef node* Tree;

void ktao(Tree &t){
	t = NULL;
}

Tree themNode(Tree &t, int x){
	if(t == NULL){
		Node *p = new Node;
		p->data = x;
		p->left = p->right = NULL;
		t = p;
	}else{
		if(t->data > x) themNode(t->left, x);
		else themNode(t->right, x);
	}
	return t;
}

int MAX = -1;
void maxdepth(Tree t, int lv = 0){
	if(t->left == NULL && t->right == NULL){
		MAX = max(MAX, lv);
	}
	else{
		if(t->left) maxdepth(t->left, lv + 1);
		if(t->right) maxdepth(t->right, lv + 1);
	}
}

void check(){
	int n, x; cin >> n;
	Tree t; ktao(t);
	for(int i = 0; i < n; i++){
		cin >> x;
		themNode(t, x);
	}
	MAX = -1;
	maxdepth(t);
	cout << MAX;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
		cout << endl;
	}
}
