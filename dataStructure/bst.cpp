#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left,*right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }
};
void preorder(node* root){
    if(root==NULL)
    {
        return;

    }
    cout<<root->data<<" ";
    preorder(root->left);
    cout<<root->left<<" ";
    preorder(root->right);
    cout<<root->right<<" ";
}

int main()
{
 
 node* root=NULL;
 preorder(2);
 

return 0;
}