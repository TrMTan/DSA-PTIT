#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node *left; // node ben trai cua cay hay cay con trai
	node *right; // node ben phai cua cay hay cay con phai
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

void Preorder(Tree t){
	if(t != NULL){
		cout << t->data << " ";
		Preorder(t->left);
		Preorder(t->right);
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
	Preorder(t); cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
	}
}


//Preorder (NLR) Traversal
//Inorder (LNR) Traversal
//Postorder (LRN) Traversal
