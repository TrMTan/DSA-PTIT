#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node *next;
	struct node *prev;
};

// tao 1 noide moi
node* createNode(int x){
	node *newNode = new node;
	newNode->data = x;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}

int size(node *head){
	int dem = 0;
	while(head != NULL){
		dem++;
		head = head->next;
	}
	return dem;
}

//duyet dslk doi
void duyet(node *head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
}

// them dau dslk doi
void pushFront(node **head, int x){
	node *newNode = createNode(x);
	newNode->next = *head; // cho next cua node moi tro vao node dau hien tai
	if(*head != NULL){
		(*head)->prev = newNode;
	}
	*head = newNode;
}

//them cuoi dslk doi
void pushBack(node **head, int x){
	node *newNode = createNode(x);
	node *tmp = *head;
	if(*head == NULL){
		*head = newNode;
		return;
	}
	while(tmp->next != NULL){
		tmp = tmp->next;
	}
	tmp->next = newNode;
	newNode->prev = tmp;
}

//them node vao vi tri bat ky
void insert(node **head, int k, int x){
	int n = size(*head);
	if(k < 1 || k > n + 1) return;
	if(k == 1){
		pushFront(head, x);
		return;
	}
	node *tmp = *head;
	for(int i = 1; i <= k - 1; i++){
		tmp = tmp->next;
	}
	node *newNode = createNode(x);
	newNode->next = tmp;
	tmp->prev->next = newNode;
	newNode->prev = tmp->prev;
	tmp->prev = newNode;
}

//xoa dau dslk doi
void popFront(node **head){
	if(*head == NULL) return;
	node *tmp = *head;
	*head = (*head)->next;
	if(tmp != NULL){
		tmp->prev = NULL;	
	}
	delete(tmp);
}

//xoa cuoi dslk doi
void popBack(node **head){
	if(*head == NULL) return;
	node *tmp = *head;
	while(tmp->next != NULL){ // tim den node cuoi cung
		tmp = tmp->next;
	}
	if(tmp->prev == NULL){ // neu node cuoi la dau ds
		*head = NULL;;
	}else{
		tmp->prev->next = NULL;
	}
	delete(tmp);
}

// xoa vi tri k bat ky 
void erase(node **head, int k){
	int n = size(*head);
	if(k < 1 || k > n + 1) return;
	if(k == 1) popFront(head);
	else{
		node *tmp = *head;
		for(int i = 1; i <= k - 2; i++){
			tmp = tmp->next;
		}
		// tmp: k - 1
		node *kth = tmp->next; // node k
		// cho k - 1 ket noi voi k + 1
		node *k1th = kth->next; // node k + 1
		tmp->next = k1th;
		k1th->prev = tmp;
		delete(kth);
	}
}

int main(){
	node *head = NULL;
	int n; cin >> n;
//	int k; cin >> k;
//	int x; cin >> x;
	for(int i = 1; i <= n; i++){
//    	pushFront(&head, i);
    	pushBack(&head, i);
	}
//	duyet(head); cout <<endl;
//    insert(&head, k , x);
//    duyet(head); cout <<endl;
//    popFront(&head);
//    duyet(head); cout <<endl;
//    popBack(&head);
	erase(&head, 4);
    duyet(head); cout <<endl;
}

