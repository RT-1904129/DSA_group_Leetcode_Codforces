//Binery Search tree in level order formation 
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left, *right;
};

struct Node *create_node(int data){
    struct Node *node = new Node;
    node->data = data;
    node->right = node->left = NULL;
    return node;
}


void BstInsert(struct Node* node,struct Node* root){
    if(root==NULL){
        root=node;
        return node;
    }
    if(node->data < root->data){
        BstInsert(node,root->left) ;
    }
    else{
        BstInsert(node,root->right) ;
    }
    
}

int main(){
    int a,b;
    struct Node *root=NULL,*node;
    while(cin>>a){
        node=create_node(a);
        root=BstInsert(node,root);
    }
    postorder_traverse(root);
    return 0;
}


