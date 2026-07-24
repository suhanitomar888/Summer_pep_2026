#include<iostream>
using namespace std;

int countNodes(Node* root){
    if(root==NULL)return 0;
    
    int x=countNodes(root->left);
    int y=countNodes(root->right);

    return 1+x+y;
}
int countLeaf(Node* root){
    if(root==NULL)return 0;

    if(root->left==NULL && root->right==NULL)return 1;

    int x=countLeaf(root->left);
    int y=countLeaf(root->right);

    return x+y; 
}

int main(){
    Node*root= new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);
    
    root->left->left=new Node(4);
    root->left->right=new Node(5);

}

// https://www.geeksforgeeks.org/problems/height-of-binary-tree/1
// https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1
// https://leetcode.com/problems/sum-of-left-leaves/
// https://leetcode.com/problems/same-tree/description/

'[

