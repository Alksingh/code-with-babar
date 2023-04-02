#include <iostream>
using namespace std;
void getNum(int arr[], int);  // this will take input from user.
void giveNum(int arr[], int); // this will print the value .
void sort01(int arr[], int);  // this will sort all 0 to one side and rest 1 to other side.
int main()
{
    cout << "How many number?" << endl;
    int n;
    cin >> n;
    int num[n];
    cout << "please enter numerical values." << endl;
    getNum(num, n);
    sort01(num, n);
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
/// @brief
/// @param nums
/// @param n
/// @return
void sort01(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    giveNum(arr, n);
}