#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {                      // constrctor
        this->data = data; // getting the data
        this->next = NULL;
    }
    // or
    //  node(int val){
    //      data=val;
    //      next=null;
    //  }
};
void insertAtHead(node *&head, int d)
{
    // create a new node
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void insertattail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}
void print(node *&head)
{
    // ek aur temp node banayain gai jo point krega fir usko agai badayain gai
    node *temp = head; // head ko point kr rha hai
    while (temp != NULL)
    {
        if(temp->data %2 ==0)  //checking even odd
        {
           cout << temp->data << " ";
        }
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
    int size, element, position;
     // initialize with 10
    //  node* node1 = new node(10)      // allocating memry in heap thats why we use new operator
    node *head = NULL;
    node *tail = NULL;

    cout << "How many nodes: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Element: ";
        cin >> element;
        insertAtHead(head, element);
        
    }
    print(head);

    // cout << "position where insert:";
    // cin >> position;
    insertatposition(tail, head, position, 20);
    print(head);

    //   insertAtHead(head,n);


    return 0;
}