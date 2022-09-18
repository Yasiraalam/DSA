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

node* insertintoBst(node* root, int d){
    //base case 
    if(root==NULL){
        root=new node(d);
        return root;

    }
    if(d > root->data ){
        //right part mai insert
        root->right =insertintoBst(root->right,d);

    }
    else{
        //left part mai insert kro
        root->left= insertintoBst(root->left,d);

    }
    return root;
}

void takeinput(node* & root){
      int data;
      cout<<"Enter data: ";
      cin>>data;
      while (data!=-1)
      {
        root = insertintoBst(root,data);
        cout<<"data: ";
        cin>>data;
      }
      
}
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
void postorder(node* root){
    if(root==NULL)
    {
        return;

    }
    postorder(root->left);
    cout<<root->left<<" ";
    postorder(root->right);
    cout<<root->data<<" ";
    cout<<root->right<<" ";
}
void inorder(node* root){
    if(root==NULL)
    {
        return;

    }
    inorder(root->left);
    cout<<root->left<<" ";
    cout<<root->data<<" ";
    inorder(root->right);
    cout<<root->right<<" ";
}

int main()
{
 
 node* root=NULL;
 takeinput(root);
 takeinput(root);
 preorder(root);
 postorder(root);
 inorder(root);
 

return 0;
}