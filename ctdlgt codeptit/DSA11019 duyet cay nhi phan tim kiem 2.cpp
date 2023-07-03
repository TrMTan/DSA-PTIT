#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node *left; // node ben trai cua cay hay cay con trai
	node *right; // node ben phai cua cay hay cay con phai
};

typedef struct node Node;
typedef node* Tree;

//khoi tao cay
void ktao(Tree &t){
	t = NULL; // cay rong;
}

//Preorder (NLR) Traversal
//Inorder (LNR) Traversal
//Postorder (LRN) Traversal

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

void Postorder(Tree t){
	if(t != NULL){
		Postorder(t->left);
		Postorder(t->right);
		cout << t->data << " ";
	}
}

void check(){
	int n, x; cin >> n;
	Tree t;
	ktao(t);
	for(int i = 0; i < n; i++){
		cin >> x;
		themNode(t, x);
	}
	Postorder(t); cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
	}
}
