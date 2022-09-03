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
void print(node *&head,int key)
{
    // temp node which is for printing and traverse the LL
    node *temp = head;
	int count=0; int position=0;
    while (temp != NULL)
    {     
        if(temp->data ==key)  //checking key is present or not
        {
           count++;
           position++;
        }
        temp = temp->next; 
        
    }
		cout<<count<<endl;
    cout << endl;
}

int main()
{
    int size, element, position;
    node *head = NULL;

    cout << "How many nodes: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Element: ";
        cin >> element;
        insertAtHead(head, element);
        
    }
    int key;
    cout<<"Key: ";
    cin>>key;
    print(head,key);

    // cout << "position where insert:";
    // cin >> position;
    // insertatposition(tail, head, position, 20);
    // print(head);

    //   insertAtHead(head,n);


    return 0;
}