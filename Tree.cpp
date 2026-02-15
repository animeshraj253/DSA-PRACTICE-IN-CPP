#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *left, *right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


node *buildTree(node *root){

    cout<< "Enter data: ";
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<< "Enter data for inderting in left of : " << data << endl;;
    root->left = buildTree(root->left);

    cout<< "Enter data for inderting in right of :  " << data<< endl;
    root->right = buildTree(root->right);

    return root;

}


int main(){
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node *root = NULL;
    
    root = buildTree(root);

    return 0;
}
