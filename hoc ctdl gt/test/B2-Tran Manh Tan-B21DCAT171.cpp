#include <bits/stdc++.h>
//Tran Manh Tan B21DCAT171
using namespace std;

struct node {
    int data;
    node* next;
};

//tao 1 node moi
node* createNode(int k) {
    node* newNode = new node;
    newNode->next = NULL;
    newNode->data = k;
    return newNode;
}

//them phan tu vao node
void addBack(node** head, int k) {
    node* tmp = *head;
    node* newNode = createNode(k);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

// Xoa phan tu co gia tri x khoi danh sach lien ket
void remove(node** head, int x) {
    node* tmp = *head;
    node* prev = NULL;

    // Neu node can xoa la node dau tien
    if (tmp != NULL && tmp->data == x) {
        *head = tmp->next;
        delete tmp;
        return;
    }
    // Tim node can xoa
    while (tmp != NULL && tmp->data != x) {
        prev = tmp;
        tmp = tmp->next;
    }
    // Neu node can xoa khong co trong danh soch lien ket
    if (tmp == NULL) {
        cout << "Khong tim thay so " << x << " de xoa\n";
        return;
    }
    prev->next = tmp->next;
    delete tmp;
}

// Duyet danh sach lien ket
void duyet(node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n, k;
    cin >> n;
    node* head = NULL;
    while (n--) {
        cin >> k;
        addBack(&head, k);
    }
    cout << "Danh sach lien ket: ";
    duyet(head);
    cout << "Nhap vao so x can tim: ";
    int x;
    cin >> x;
    remove(&head, x); // Tim và xoa x khoi danh sach lien ket
    cout << "Danh sach lien ket sau khi xoa phan tu x: ";
    duyet(head);
    return 0;
}

