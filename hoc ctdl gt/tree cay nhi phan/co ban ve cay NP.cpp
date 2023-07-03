#include<bits/stdc++.h>

using namespace std;

// nhap cay NP cac so nguyen. In ra man hinh cac ptu cua cay NP
// khai bao cau tuc 1 node
struct node{
	int data;
	node *left; // node ben trai cua cay hay cay con trai
	node *right; // node ben phai cua cay hay cay con phai
};

typedef struct node Node;
typedef node* Tree;

// khoi tao cay
void ktaocay(Tree &t){
	t = NULL; // cay rong
}

//them phan tu x vao cay(tao 1 node cho cay)
Tree themNode(Tree &t, int x){
	//neu cay rong
	if(t == NULL){
		Node *p = new Node; // ktao 1 node de them vao cay
		p->data = x;
		p->left = NULL;
		p->right = NULL;
		t = p; // node p chinh la goc hay x chinh la node goc
	}else{  //cay khong rong
		// neu ptu them vao nho hon node goc => them vao ben trai nguoc lai thi them vao ben phai
		if(t->data > x) themNode(t->left, x);
		else if(t->data < x) themNode(t->right, x);
		else ;
	}
	return t;
}

//co 6 cach duyet: NLR, NRL, LNR, RNL, RLN, LRN
//duyet node left-right
void NLR(Tree t){
	if(t != NULL){
		cout << t->data << " ";
		NLR(t->left);
		NLR(t->right);
	}
}

//duyet node Right-Left
void NRL(Tree t){
	if(t != NULL){
		cout <<  t->data << " ";
		NRL(t->right);
		NRL(t->left);
	}
}

//duyet left node right: duyet tu be den lon
void LNR(Tree t){
	if(t != NULL){
		LNR(t->left);
		cout << t->data << " ";
		LNR(t->right);
	}
}

//duyet right node left : duyet tu lon den be
void RNL(Tree t){
	if(t != NULL){
		RNL(t->right);
		cout << t->data << " ";
		RNL(t->left);
	}
}

//duyet left right node
void LRN(Tree t){
	if(t != NULL){
		LRN(t->left);
		LRN(t->right);
		cout << t->data << " ";
	}
}

//duyet Right-Left node
void RLN(Tree t){
	if(t != NULL){
		RLN(t->right);
		RLN(t->left);
		cout <<  t->data << " ";
	}
}

//tim kiem node co gia tri x
//neu node ton tai trong cay thi tra ve node do con khong thi tra ve null
Tree search(Tree t, int x){
	Tree p;
	if(t == NULL) return NULL;
	if(t->data == x) return t;
	p = search(t->left, x);
	if(p == NULL) p = search(t->right, x);
	return p;
}

//xuat cac node co 2 con
void node_co_2_con(Tree t){
	if(t != NULL){
		if(t->left != NULL && t->right != NULL){
			cout << t->data << " ";
		}
		node_co_2_con(t->left); //duyet sang cay con trai
		node_co_2_con(t->right); // duyet sang cay con phai
	}
}

//xuat cac node co 1 con
void node_co_1_con(Tree t){
	if(t != NULL){
		if((t->left != NULL && t->right == NULL) || (t->left == NULL && t->right != NULL)){
			cout << t->data << " ";
		}
		node_co_1_con(t->left); //duyet sang cay con trai
		node_co_1_con(t->right); // duyet sang cay con phai
	}
}

//xuat cac node la
void node_la(Tree t){
	if(t != NULL){
		if(t->left == NULL && t->right == NULL){
			cout << t->data << " ";
		}
		node_la(t->left); //duyet sang cay con trai
		node_la(t->right); // duyet sang cay con phai
	}
}

//tim node co gt lon nhat;
int MAX = INT_MIN;
void timmax(Tree t){
	if(t != NULL){
		if(t->data > MAX){
			MAX = t->data;
		}
		timmax(t->left);
		timmax(t->right);
	}
}

//tim node co gia tri nho nhat
int MIN = INT_MAX;
void timmin(Tree t){
	if(t != NULL){
		if(t->data < MIN){
			MIN = t->data;
		}
		timmin(t->left);
		timmin(t->right);
	}
}

//max ver2
int max2(Tree t){
	if(t->right == NULL) return t->data;
//	if(t->left == NULL && t->right == NULL) return t->data;
//	int max_value = t->data;
//	if(t->left != NULL){
//		int left = max2(t->left); // left giu gt cua node ngoai cung ben trai
//		if(max_value < left){
//			max_value = left;
//		}
//	}
//	if(t->right != NULL){
//		int right = max2(t->right); // right giu gt cua node ngoai cung ben phai
//		if(max_value < right){
//			max_value = right;
//		}
//	}
//	return max_value;
	return max2(t->right);
}

//min ver2
int min2(Tree t){
	if(t->left == NULL) return t->data;
//	if(t->left == NULL && t->right == NULL) return t->data;
//	int min_value = t->data;
//	if(t->left != NULL){
//		int left = min2(t->left); // left giu gt cua node ngoai cung ben trai
//		if(min_value > left){
//			min_value = left;
//		}
//	}
//	if(t->right != NULL){
//		int right = min2(t->right); // right giu gt cua node ngoai cung ben phai
//		if(min_value > right){
//			min_value = right;
//		}
//	}
//	return min_value;
	return min2(t->left);
}

int main(){
	int n, x;
	cin >> n;
	Tree t;
	ktaocay(t);
	for(int i = 0; i < n; i++){
		cin >> x;
		themNode(t, x);
	}
	int k; cin >> k; 
	Tree p = search(t, k);
	if(p != NULL) cout << "Tim thay " << k << endl;
	else cout << "Khong tim thay " << k << endl;
	node_co_2_con(t); cout << endl;
	node_co_1_con(t); cout << endl;
	node_la(t); cout << endl;
	timmax(t); cout << "Max la: "  << MAX << endl;
	cout << "Max la: " << max2(t); cout << endl;
	timmin(t); cout << "Min la: " << MIN << endl;
	cout << "Min la: " << min2(t); cout << endl;
	NLR(t); cout << endl;
	NRL(t); cout << endl;
	LNR(t); cout << endl;
	RNL(t); cout << endl;
	LRN(t); cout << endl;
	RLN(t); cout << endl;
}
