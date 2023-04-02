#include <iostream>
using namespace std;
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
void sort(int arr[], int n)
{
    int i = 0, k = 0, j = n - 1;
    while (k <= j)
    {
        switch (arr[k])
        {
        case 0:
            swap(arr[i++], arr[k++]);
            break;
        case 1:
            k++;
            break;
        case 2:
            swap(arr[k++], arr[j--]);
            break;
        }
    }
}
int main()
{
    cout << "enter how many number you want to store ?" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "enter value " << endl;
    getNum(arr, n);
    sort(arr, n);
    cout << endl;
    giveNum(arr, n);
}
