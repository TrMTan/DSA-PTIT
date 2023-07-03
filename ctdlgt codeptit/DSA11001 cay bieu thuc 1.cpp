#include<bits/stdc++.h>

using namespace std;

struct Node{
	char c;
	Node *left, *right;
};

typedef Node* Tree;

Tree createNode(char c){
	Tree res = new Node;
	res->c = c;
	res->left = res->right = NULL;
	return res;
}

void LNR(Tree a){
	if(a != NULL){
		LNR(a->left);
		cout << a->c;
		LNR(a->right);
	}
}

void check(){
	string s;
	cin >> s;
	stack<Tree> st;
	for(char &i : s){
		if(i == '+' || i == '-' || i == '*' || i == '/'){
			Tree tmp = createNode(i);
			tmp->right = st.top(); // duyet node phai
			st.pop();
			tmp->left = st.top(); // duyet node trai
			st.pop();
			st.push(tmp);
		}else{
			st.push(createNode(i));
		}
	}
	LNR(st.top());
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		check();
	}
}
