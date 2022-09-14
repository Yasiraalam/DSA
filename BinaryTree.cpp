#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* binarytree(node* root){
    int data;
    cout<<"Enter the data:"<<endl;
    cin>>data;
    
    
    root=new node(data);
    if(data==-1){
        return NULL;
    }
  cout<<"Enter data for inserting in left of "<<data<<"  -1 for null"<<endl;
  root->left=binarytree(root->left);
  cout<<"Enter data for inserting in right of "<<data<<"or -1 for null"<<endl;
  root->right=binarytree(root->right);
  return root;


}
int main()
{
node* root=NULL;
//creating the tree;
root= binarytree(root);

return 0;
}