#include <bits/stdc++.h>
using namespace std;
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
void deletion(int arr[], int size, int index)
{
         // code for deletion
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{

    int arr[100] = {2, 4, 5, 6, 12};
    int size = 5, index;
    cout << "Enter index your want to delete: " << endl;
    cin >> index;
    display(arr, size);
    deletion(arr, size, index);
    size--;
    display(arr, size);

    return 0;
}