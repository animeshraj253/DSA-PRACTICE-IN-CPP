#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 50

class Queue{
    private:
        int front;
        int rear;
        int arr[MAX_SIZE];
    public:
        Queue(){
            rear = -1;
            front = -1;
        }

        bool isEmpty(){
            if( front == -1 || front > rear ){
                front = rear = -1;
                return true;
            }
            else
                return false;
        }
        int getSize(){
            return MAX_SIZE;
        }
        bool isFull(){
            if( rear == MAX_SIZE - 1 )
                return true;
            else
                return false;
        }

        int getFront(){
            return arr[front];
        }

        int getRear(){
            return arr[rear];
        }

        void enqueue(int data){
            if (isFull()){
                cout<< "Queue is full"<<endl;
                return;
            }
            if(isEmpty()){
                rear = front = 0;
                arr[rear] = data;
            }else{
                rear++;
                arr[rear] = data;
            }
        }

        void dequeue(){
            if(isEmpty()){
                cout<<"Queue is empty"<< endl;
                return;
            }else{
                cout<<"Item " << arr[front] <<" is deleted sucessfully"<<endl;
                front++;
                return;
            }
        }

        void display(){
            for ( int i = front; i <= rear ; i++ ){
                cout<< arr[i] << " ";
            }cout<<endl;
        }

};

int main(){
    Queue q;

    cout<<"Queue is empty : " << q.isEmpty() << endl;
    cout<<"Queue is full: " << q.isFull() << endl;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.dequeue();
    q.display();

    cout << "Front = " << q.getFront() << endl;
    cout << "Rear = " << q.getRear() << endl;
    cout << "Size = " << q.getSize() << endl;
    
    
    cout<<"Queue is empty : " << q.isEmpty() << endl;
    cout<<"Queue is full: " << q.isFull() << endl;
    
    return 0;
}