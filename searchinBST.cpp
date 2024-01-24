#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node* searchInBST(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    //data>key
    if(root->data > key){
        return searchInBST(root->left,key);
    }
    //data<key
    return searchInBST(root->right,key);
}
int main()
{
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right=new Node(6);

    if(searchInBST(root,10)==NULL){
        cout<<"Key doesn't exists";
    }else{
        cout<<"Key exists";
    }
    return 0;
}