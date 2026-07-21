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


//Level Order Traversal
void leverOrder(Node*root){
    if(root==NULL)return;

    //first create a queue and push root and NULL;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* frontNode =q.front();
        cout<< frontNode->data <<" ";
        if(frontNode->left) q.push(frontNode->left);
        if(frontNode->right) q.push(front->right);
    }
    else if(!q.empty()){
        q.push(NULL);
    }
}

void levelOrderTraversal(Node*root){
    if(root==NULL)return;
    queue<Node>*q;
    q.push(root->data);
    q.push_back(NULL);
    while(!q.empty()){
        Node*fn=q.front();
        cout<<fn->data<<" ";
        if(fn->left)q.push(fn->l);
    }
}

