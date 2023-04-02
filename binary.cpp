#include <iostream>
using namespace std;
int findKey(int arr[], int n, int key)
{
    int f = 0, l = (n - 1);
    int mid = (f + l) / 2;
    while (mid != 0 && mid != (n - 1) && mid < n && mid > -1)
    {

        if (key < arr[mid])
        {
            f = f;
            l = mid;
            mid = (f + l) / 2;
        }
        if (key > arr[mid])
        {
            f = mid;
            l = n + 1;
            mid = (f + l) / 2;
        }
        if (arr[mid] == key)
        {
            return mid;
        }
    }
    return -1;
}
void getNum(int arry[], int a)
{
    for (int i = 0; i < a; i++)
    {
        cin >> arry[i];
    }
}
void giveNum(int arry[], int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << arry[i] << " ";
    }
}
int main()

{
    cout << "Please enter how many number you want to enter?" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Plese enter number in ascending order." << endl;
    getNum(arr, n);
    cout << "enter the value which you want to search for." << endl;
    int key;
    cin >> key;
    int index = findKey(arr, n, key);
    if (index == -1)
    {
        cout << "Not found." << endl;
    }
    else
    {
        cout << "index number is " << index << endl;
    }

    return 0;
}