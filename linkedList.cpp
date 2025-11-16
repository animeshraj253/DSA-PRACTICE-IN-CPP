#include<iostream>
using namespace std;

class NODE{
    public:
        int data;
        NODE * next;
    NODE(int data){
        this->data = data;
        this->next = NULL;
    }
    // destrucotr
    ~NODE(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
            cout<<"Memory free for node with data "<< value << endl;
        }
    }
};

void InsertAtHead(NODE * &head, int d){
    NODE *temp = new NODE(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(NODE* &tail, int d){
    // creating new node
    NODE* temp = new NODE(d);
    tail->next = temp;
    tail = tail->next;
    // tail = temp;
}

void printNode(NODE* &head){
    NODE* temp = head;
    while(temp!=NULL){
        // cout<<temp->data << "_"<<temp->next << " -> ";
        cout<<temp->data <<" -> ";
        temp = temp->next ; 
    }cout<<endl;
}

void insertAtNPosition(int newPosition, int data, NODE * &head,NODE * &tail){
    NODE * newNode = new NODE(data);
    NODE * curr = head;
    // if there is no data in the linked list
    if( head == NULL){
        head = tail = newNode;
        return;
    }
    // inserting at head or at first posion
    if (newPosition == 1){
        // InsertAtHead(head,data);
        newNode->next = head;
        head = newNode;
        return;
    }
    for(int i = 1; i<newPosition-1; i++){
        if(curr == NULL){ 
            cout<<"Invalid position!!! Enter a valid position."<<endl;
            return;
        }
        curr = curr->next;
    }
    // inserting at tail or at last position
    if(curr->next == NULL){
        // InsertAtTail(tail,data);
        tail->next = newNode;
        tail = newNode;
        return;
    }
    // inserting at middle
    else{
        newNode->next = curr->next;
        curr->next = newNode;
    }
}

void deleteNode(int position, NODE* & head){
    NODE * curr = head;
    NODE * prev = NULL;

    // deleting head and free memory
    if (position == 1){
        NODE * temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    } 
    // trevarsign to the position of deletion;
    else{
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){ cout << endl;
    // creating new node
    NODE *head = NULL;
    NODE *tail = NULL;

    NODE *n1 = new NODE(10);
    head = n1;
    tail = n1;
    printNode(head);

    InsertAtTail(tail,20);
    printNode(head);

    InsertAtTail(tail,30);
    printNode(head);

    InsertAtTail(tail,40);
    printNode(head);

    InsertAtHead(head,-10);
    printNode(head);

    InsertAtHead(head,-20);
    printNode(head);

    insertAtNPosition(2,99,head,tail);
    printNode(head);

    insertAtNPosition(8,77,head,tail);
    printNode(head);

    insertAtNPosition(8,66,head,tail);
    printNode(head);

    insertAtNPosition(12,33,head,tail);
    printNode(head);

    cout<<endl;
    cout<<"Head = "<<head->data<<" and Tail = " <<tail->data<<endl;
    deleteNode(1,head);
    printNode(head);
    cout<<"Head = "<<head->data<<" and Tail = " <<tail->data<<endl;

    cout<<endl;
    deleteNode(4,head);
    printNode(head);
    cout<<"Head = "<<head->data<<" and Tail = " <<tail->data<<endl;




    cout << endl;
    return 0;
}