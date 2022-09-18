#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left,*right;
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

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
int main()
{

   node* root =NULL;
   cout<<"Enter data for BST";
   takeinput(root);
   cout<<"printing the tree"<<endl;
   levelOrderTraversal(root);

return 0;
}