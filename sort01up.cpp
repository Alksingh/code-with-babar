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
    int i = 0, j = n - 1;
    while (i < j)
    {

        while (arr[i] == 0 && i < j)
        {

            i++;
        }
        while (arr[j] == 1 && i < j)
        {

            j--;
        }
        if (i < j)
        {

            swap(arr[i], arr[j]);
            i++;
            j--;
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
    giveNum(arr, n);
}
