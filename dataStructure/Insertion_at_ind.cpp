#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int size)
{
     //code for traversal
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << "\n";
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{   //code for insertion
    if (size >= capacity)
    {
        return -1;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        return 1;
    }
}
int main()
{
    int arr[100] = {7, 3, 6, 22, 99};
    int size = 5, element, index;
    cout << "Element: ";
    cin >> element;
    cout << "At which index: " << endl;
    cin >> index;
    display(arr, size);
    indInsertion(arr, size, element, 100, index);
    size++;
    display(arr, size);
    return 0;
}