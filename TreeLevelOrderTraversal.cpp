#include<iostream>
#include<queue>
using namespace std;
// also called BFS
// all code is same as _1tree.cpp
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

    cout<< "Enter data: "<<endl;;
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

void levelOrderTraversal(node *root){
    queue<node*> q;

    q.push(root);
    // level seprator
    q.push(NULL);

    while(!(q.empty())){

        node *temp = q.front();
        q.pop();
        
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

// Inorder traversal
void inorder(node* root){
    // L N R
    if(root == NULL)
        return;
    
    inorder(root->left);
    cout<<root->data << " ";
    inorder(root->right);
}
void preorder(node* root){
    // N L R
    if(root== NULL)
        return;
    
    cout<<root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root){
    // L R N
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data << " ";
}

int main(){
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node *root = NULL;
    
    root = buildTree(root);
    
    cout<<"\nPrinting the level order traversal:"<<endl;
    levelOrderTraversal(root);

    cout<<"\nInorder traversal:"<<endl;
    inorder(root);
    
    cout<<"\nPreorder traversal:"<<endl;
    preorder(root);
        
    cout<<"\nPostorder traversal:"<<endl;
    postorder(root);
    return 0;
}
