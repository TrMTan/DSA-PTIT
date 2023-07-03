#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *next;
};

// tao 1 node moi
node* createNode(int x){
    node *newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

//duyet dslk
void duyet(node *head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}
//dem so node co trong dslk don
int size(node *head){
    int dem = 0;
    while(head != NULL){
        dem++;
        head = head->next;
    }
    return dem;
}

// them node vao dau dslk don
void pushFront(node **head, int x){
    node *newNode = createNode(x);
    //B1: phan next cua newNode => head
    newNode->next = *head; //*head => dia chi cua node trong dslk
    //B2: cap nhat node head => newNode
    *head = newNode;
}
// them node vao cuoi dslk don
void pushBack(node **head, int x){
	node *tmp = *head;
	node *newNode = createNode(x);
	if(*head == NULL){
		*head = newNode;
		return;
	}
	while(tmp->next != NULL){
		tmp = tmp->next;
	}
	tmp->next = newNode;
}

// chen node o vi tri bat ky vao dslk 
void insert(node ** head, int k, int x){ // k la vi tri chen
	int n = size(*head);
	if(k < 1 || k > n + 1) return;
	if(k == 1){
		pushFront(head, x);
		return;
	}
	node *tmp = *head;
	for(int i = 1; i <= k - 2; i++){
		tmp = tmp->next;
	}
	//tmp = k - 1
	node *newNode = createNode(x);
	newNode->next = tmp->next;
	tmp->next = newNode;
}

//xoa node khoi dau dslk
void popFront(node **head){
	if(*head == NULL) return;
	node *tmp = *head; // giai phong
	*head = (*head)->next;
	delete tmp;
}

//xoa node khoi cuoi dslk
void popBack(node **head){
	if(*head == NULL) return;
	node *tmp = *head;
	if(tmp->next == NULL){
		*head = NULL;
		delete tmp;
		return;
	}
	while(tmp->next->next != NULL){
		tmp = tmp->next;
	}
	node *last = tmp->next;
	tmp->next = NULL;
	delete last;
}

//xoa node o vi tri bat ky vao dslk
// k - 1 || k(xoa) || k + 1
void erase(node **head, int k){
	int n = size(*head);
	if(k < 1 || k > n) return;
	if(k == 1) popFront(head);
	else{
		node *tmp = *head;
		for(int i = 1; i <= k - 2; i++){
			tmp = tmp->next;
		}
		//tmp : k - 1
		node *kth = tmp->next; // node thu k
		//cho k - 1 ket noi voi node k + 1
		tmp->next = kth->next;
		delete kth;
	}
}

int main(){
    node *head = NULL;
    int n; cin >> n;
//    int k; cin >> k;
//    int x; cin >> x;
    for(int i = 1; i <= n; i++){
//    	pushFront(&head, i);
    	pushBack(&head, i);
	}
//	duyet(head); cout <<endl;
//    insert(&head, k , x);
//    duyet(head); cout <<endl;
//    popFront(&head);
//    duyet(head); cout << endl;
//    popBack(&head);
//    duyet(head); cout << endl;
    erase(&head, 5);
    duyet(head); cout <<endl;
}
