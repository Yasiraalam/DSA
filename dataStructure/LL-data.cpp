#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int roll;
    string name;
    string dept;
    int marks;
    node* next;

  
};
node* head = new node();
void insert_record(int roll, string name, string dept,int marks)
{
    node* t= new node();
    t->roll=roll;
    t->name= name;
    t->dept= dept;
    t->marks= marks;
    t->next=NULL;
    if(head==NULL || (head->roll >= t->roll))
    {
        t->next=head;
        head=t;
    }
    cout<<"Record Inserted Successfully\n";
}
void show()
{
    node* p =head;
    if(p==NULL)
    {
        cout<<"No record "<<"Available \n";
        
    }
    else{
        cout<<"INdex\tName\t dept"<<"\t Marks\n";
     while (p!=NULL)
        {
            cout<<p->roll<<"\t"
                <<p->name<<"\t"
                <<p->dept<<"\t"
                <<p->marks<<endl;
                p=p->next;   
        }
        
    }
}
int main()
{
    node* head=NULL;
    string name,dept;
    int roll,marks;
    cout << "Enter Name of Student\n";
			cin >> name;
			cout << "Enter Roll Number of Student\n";
			cin >> roll;
			cout << "Enter dept of Student \n";
			cin >> dept;
			cout << "Enter Total Marks of Student\n";
			cin >> marks;
    insert_record(roll,name,dept,marks);


return 0;
}