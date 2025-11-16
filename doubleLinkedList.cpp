#include<iostream>
using namespace std;
class NODE{
    public:
        int data;
        NODE * next;
        NODE * prev;
    NODE(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtTail(NODE* &tail, int data){
    NODE * newNode = new NODE(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void insertAtHead(NODE* &head, int data){
    NODE* newNode = new NODE(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void printNode(NODE* &head){
    NODE * temp = head;
    while(temp !=NULL){
        // cout<<temp->prev<<" "<<temp->data<<" "<<temp->next<<" -> ";
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }cout<<endl;
}


int main(){
    NODE * head = NULL;
    NODE * tail = NULL;
    NODE * n1 = new NODE(10); 
    head = tail = n1;


    insertAtTail(tail,20);
    printNode(head);

    insertAtTail(tail,30);
    printNode(head);

    insertAtHead(head,-10);
    printNode(head);


    return 0;
}