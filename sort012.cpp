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
    int i = 0, j = n - 1, k = j - 1;
    while (i < j)
    {
        cout << "1";
        while (arr[i] == 0 && i < j)
        {
            cout << "2";
            i++;
        }
        while (arr[j] == 2 && i < j)
        {
            cout << "3";

            j--;
        }
        while (arr[i] == 2 && arr[j] == 0 && i < j)
        {
            cout << "4";
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        while (arr[i] == 2 && arr[j] == 1)
        {
            cout << "5";
            swap(arr[i], arr[j]);
            j--;
        }
        while (arr[i] == 1 && arr[j] == 0 && i < j)
        {
            cout << "6";
            swap(arr[i], arr[j]);
            i++;
        }
        while (arr[i] == 1 && arr[j] == 1 && i < k)
        {
            cout << "7";

            while (arr[i] == 1 && arr[k] == 0 && i < k)
            {
                cout << "8";
                swap(arr[i], arr[k]);
                k--;
                i++;
            }
            while (arr[i] == 1 && arr[k] == 1 && i < k)
            {
                cout << "9";
                k--;
            }
            while (arr[k] == 2 && k < j)
            {
                cout << "10";
                swap(arr[j], arr[k]);
                k--;
                j--;
            }
            if (arr[i] == 0)
            {
                break;
            }
            if (arr[k] == 2)
            {
                k--;
            }
        }
        if (i >= k)
        {
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
