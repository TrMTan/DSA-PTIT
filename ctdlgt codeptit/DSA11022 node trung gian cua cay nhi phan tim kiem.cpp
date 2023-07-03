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

int dem = 0;
void node_tg(Tree t){
	if(t){
		if(t->left == NULL && t->right == NULL) return;
		else{
			dem++;
			if(t->left) node_tg(t->left);
			if(t->right) node_tg(t->right);
		}
	}
}

void check(){
	int n, x; cin >> n;
	Tree t; ktao(t);
	for(int i = 0; i < n; i++){
		cin >> x;
		themNode(t, x);
	}
	dem = 0;
	node_tg(t);
	cout << dem;
}

int main(){
	int t; cin >> t;
	while(t--){
		check(); cout << endl;
	}
}


