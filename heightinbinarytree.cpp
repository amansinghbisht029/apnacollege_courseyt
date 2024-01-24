#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int calcHeight(Node* root){ //height: it is the depth of the tree's deepest node.
    if(root==NULL){
        return 0;
    }
    int lHeight=calcHeight(root->left);
    int rHeight=calcHeight(root->right);
    return max(lHeight,rHeight)+1;
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<calcHeight(root)<<"\n";
    return 0;
}