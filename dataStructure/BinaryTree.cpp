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
  cout<<"Enter data for inserting in left of "<<data<<"OR (-1) for null"<<endl;
  root->left=binarytree(root->left);
  cout<<"Enter data for inserting in right of "<<data<<"OR (-1) for null"<<endl;
  root->right=binarytree(root->right);
  return root;

}
//level order traversal for printing the nodes of tree
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())  
    {
        node* temp =q.front();
        q.pop();

        if(temp==NULL){
            //purana level complete traverse ho chuka hai
            cout<<endl;
            if(!q.empty()){
                //queue still has some child nodes
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    
}
int main()
{
node* root=NULL;
//creating the tree;
root= binarytree(root);
//Level order traversal 
levelOrderTraversal(root);

return 0;
}