#include <bits/stdc++.h>
using namespace std;

class Stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    // constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
 void view()
            {
                if (top == -1)
                {
                    cout << "stack empty: ";
                }
                else
                {
                    int i = 0;
                    while (i < top)
                    {
                        cout << stack[i] << " ";

                        i++;
                    }
                    cout << endl;
                }
            }

int main()
{
    int element, n;
    int ch;
    cout << "how many push you want to do: ";
    cin >> n;
    Stack st(n);
    while (1)
    {
        cout << "1 for push\n2 for view\n3 for pop\n4 for peek\n 5 for isempty" << endl;
        cin >> ch;
        if (ch == 1)
        {

            for (int i = 0; i < n; i++)
            {
                cout << "Element: " << endl;
                cin >> element;
                st.push(element);
            }
        }
        if (ch == 2)
        {
             view();
           
        }
        if (ch == 2)
        {
            st.pop();
        }
        if (ch == 3)
        {
            cout << st.peek() << endl;
        }
        if (ch == 4)
        {
            if (st.isEmpty())
            {
                cout << "Stack is Empty mere dost " << endl;
            }
            else
            {
                cout << "Stack is not Empty mere dost " << endl;
            }
        }
    }

    return 0;
}