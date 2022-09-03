#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {                      // constrctor
        this->data = val; // getting the data
        this->next = NULL;
    }
    
};
void insertAtHead(node *&head, int val)
{
    // create a new node
    node *temp = new node(val);
    temp->next = head;
    head = temp;
}
void insertattail(node *&head, int val)
{
    node *temp = new node(val);
   if(head==NULL)
   {
    head=temp; return;
   }
   node* trav=head;
   while (trav->next!= NULL)
   {
    trav= trav->next;
   }
   
    trav->next = temp;
    
}
void print(node *&head)
{
    // ek aur temp node banayain gai jo point krega fir usko agai badayain gai
    node *temp = head; // head ko point kr rha hai
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertatposition(node *&tail, node *&head, int position, int d)
{
    // insert at first
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insert at last position
    if (tail->next == NULL)
    {
        insertattail(tail, d);
        return;
    }
    // creating a node for d;
    node *node2 = new node(d);
    node2->next = temp->next;
    temp->next = node2;
}

int main()
{
    int size, element, position,value,choice;
    node *head = NULL;
    node *tail = NULL;
    while(1){
        cout<<"1. for insert at head "<<endl<<"2.for insert at tail"<<endl;
        cout<<"choice: ";
        cin>>choice;
        if(choice==1)
        {

               cout << "How many nodes: ";
               cin >> size;
               for (int i = 0; i < size; i++)
               {
                   cout << "Element: ";
                   cin >> element;
                   insertAtHead(head, element);
               }
                    print(head);
                    break;
        }
        else if( choice==2){

            cout << "How many nodes: ";
               cin >> size;
               for (int i = 0; i < size; i++)
               {
                   cout << "Element: ";
                   cin >> element;
                   insertattail(head, element);
                   
               }
                print(head);
                break;

        }
        else{
            cout<<"Invalid choice"<<endl;
             break;
        }
    }
    
    cout << "position where insert:";
    cin >> position;
    cout<<"Value you want to insert:";
    cin>>value;
    insertatposition(tail, head, position, value);
    print(head);

    


    return 0;
}