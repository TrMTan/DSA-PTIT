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

// them phan tu x vao cay (tao 1 node cho cay)
Tree themNode(Tree t, int x){
	if(t == NULL){
		Node *p = new Node;
		p->data =x;
		p->left = NULL;
		p->right = NULL;
		t = p;
	}else{
		if(x < t->data) t->left = themNode(t->left, x);
		else t->right = themNode(t->right, x);
	}
	return t;
}

// tim do cao cua cay
int treeLevel(Tree t){
	if(t == NULL) return -1;
	return 1 + max(treeLevel(t->left), treeLevel(t->right));
}

// kiem tra cay AVL
bool checkAvl(Tree t){
	if(t == NULL) return true;
	if(abs(treeLevel(t->left) - treeLevel(t->right)) > 1) return false;
	return checkAvl(t->left) && checkAvl(t->right);
}

//xoay phai
Tree rotateRight(Tree a){
	Tree b = a->left;
	Tree d = b->right;
	a->left = d;
	b->right = a;
	return b;
}

//xoay trai
Tree rotateLeft(Tree a){
	Tree b = a->right;
	Tree c = b->left;
	a->right = c;
	b->left = a;
	return b;
}

// chuyen cay nhi phan tim kiem sang cay AVL
Tree updateTreeAvl(Tree t){
	if(abs(treeLevel(t->left) - treeLevel(t->right)) > 1){
		if(treeLevel(t->left) > treeLevel(t->right)){
			Tree p = t->left;
			if(treeLevel(p->left) >= treeLevel(p->right)){
				t = rotateRight(t);
			}else{
				t->left = rotateLeft(t->left);
				t = rotateRight(t);
			}
		}else{
			Tree p = t->right;
			if(treeLevel(p->right) >= treeLevel(p->left)){
				t = rotateLeft(t);
			}else{
				t->right = rotateRight(t->right);
				t = rotateLeft(t);
			}
		}	
	}
	if(t->left != NULL) t->left = updateTreeAvl(t->left);
	if(t->right != NULL) t->right = updateTreeAvl(t->right);
	return t;
}

// dem so luong phan tu x trong cay
int dem(Tree t, int x){
    if(t == NULL) return 0;
    int count = 0;
    if(t->data == x) count++;
    count += dem(t->left, x);
    count += dem(t->right, x);
    return count;
}

//duyet cay node left-right
void NLR(Tree t){
	if(t != NULL){
		cout << t->data << " ";
		NLR(t->left);
		NLR(t->right);
	}
}

int main(){
	int n, x, tmp;
	cin >> n;
	Tree t; ktao(t);
	for (int i = 0; i < n; i++){
		cin >> tmp;
		t = themNode(t, tmp);
	}
	cout << "Cay nhi phan: ";
	NLR(t); cout << endl; // in ra cay nhi phan tim kiem truoc khi doi sang cay AVL
	while(!checkAvl(t)){ 
		t = updateTreeAvl(t);		
	}
	cout << "Cay AVL: ";
	NLR(t); cout << endl; // in ra cay AVL sau khi bien doi tu cay nhi phan tim kiem
	cout << "x = "; cin >> x; // nhap vao so x de tim
	cout << "So luong phan tu x co trong cay " << dem(t, x); // dem so luong phan tu x trong cay
	return 0;
}
