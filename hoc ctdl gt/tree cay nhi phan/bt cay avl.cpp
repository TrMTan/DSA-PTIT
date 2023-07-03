#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};
node *insert(node *t, int x){
	if (t == NULL){
		node *temp = new node;
		temp->data =x;
		temp->left = NULL;
		temp->right = NULL;
		return temp;
	} else{
		if (x < t->data){
			t->left = insert(t->left, x);
		} else{
			t->right = insert(t->right, x);
		}
	}
	
}
int treeLevel(node *t){
	if (t == NULL) return -1;
	return 1 + max(treeLevel(t->left), treeLevel(t->right));
}
bool checkAvl(node *t){
	if (t == NULL) 	return true;
	if (abs(treeLevel(t->left) - treeLevel(t->right)) > 1) return false;
	return checkAvl(t->left) && checkAvl(t->right);
}
node *turnRight(node *a){
	node *b = a->left;
	node *d = b->right;
	a->left = d;
	b->right = a;
	return b;
}
node *turnLeft(node *a){
	node *b = a->right;
	node *c = b->left;
	a->right = c;
	b->left = a;
	return b;
}
void printTree(node* t, int indent = 0) {
    if (t != NULL) {
        if (t->right) {
            printTree(t->right, indent + 4);
        }
        if (indent) {
            cout << setw(indent) << ' ';
        }
        if (t->right) {
            cout << " /\n" << setw(indent) << ' ';
        }
        cout << t->data << "\n ";
        if (t->left) {
            cout << setw(indent) << ' ' << " \\\n";
            printTree(t->left, indent + 4);
        }
    }
}
node *updateTreeAvl(node *t){
    if (t == NULL) return t;
    t->left = updateTreeAvl(t->left);
    t->right = updateTreeAvl(t->right);

    int balance = treeLevel(t->left) - treeLevel(t->right);

    if (balance > 1 && treeLevel(t->left->left) >= treeLevel(t->left->right))
        return turnRight(t);
    if (balance > 1 && treeLevel(t->left->left) < treeLevel(t->left->right)){
        t->left = turnLeft(t->left);
        return turnRight(t);
    }
    if (balance < -1 && treeLevel(t->right->right) >= treeLevel(t->right->left))
        return turnLeft(t);
    if (balance < -1 && treeLevel(t->right->right) < treeLevel(t->right->left)){
        t->right = turnRight(t->right);
        return turnLeft(t);
    }
    return t;
}
int count(node *t, int x){
	if (t == NULL) return 0;
	if (t->data == x) return 1 + count(t->left, x) + count(t->right, x);
	else if (t->data < x) return count(t->right, x);
	return count(t->left, x);
}
int main(){
	int n, x, temp;
	cin >> n;
	node * t = NULL;
	for (int i = 0; i < n; i++){
		cin >> temp;
		t = insert(t, temp);
	}
	while(!checkAvl(t)){
		t = updateTreeAvl(t);		
	}
	printTree(t);
	cin >> x;
	cout << count(t, x);
	return 0;
}
