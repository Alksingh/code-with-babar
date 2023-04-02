#include <iostream>
using namespace std;
void findKey(int arr[], int n, int key)
{
    int left = 0, right = 0;
    int f = 0, l = (n - 1);
    int mid = f + (l - f) / 2;
    while (f <= l)
    {

        if (key < arr[mid])
        {

            l = mid - 1;
        }
        else if (key > arr[mid])
        {

            f = mid + 1;
        }
        mid = f + (l - f) / 2;
        if (arr[mid] == key)
        {

            int mids = mid;
            while (arr[mid] == key)
            {

                left = mid;
                mid--;
            }
            while (arr[mids] == key)
            {

                right = mids;
                mids++;
            }
            cout << left << " " << right;
            exit(0);
        }
    }
    cout << "not found dear." << endl;
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
    cout << "a;flk" << arr[-1];
    findKey(arr, n, key);

    return 0;
}