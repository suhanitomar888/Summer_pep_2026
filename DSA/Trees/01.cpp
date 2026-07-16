class Node{
public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
/*
void preorder(Node*root){
    if(root==null)return;
    cout<<root->data;endl;
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node*root){
    if(root==null)return;
    inorder(root->left);
    cout<<root->data;endl;
    inorder(root->right);
}

void postorder(Node*root){
    if(root==null)return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;endl;
}
*/

int countNodes(root){
    if(root==NULL)return 0;
    int x=countNodes(root->left);
    int y=countNodes(root->right);
    return 1+x+y;
}
int main(){
    Node*root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
}