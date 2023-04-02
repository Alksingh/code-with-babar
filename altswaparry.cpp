#include <iostream>
using namespace std;
void getNum(int arr[], int);  // this will take input from user.
void giveNum(int arr[], int); // this will print the value .
void swapAlt(int arr[], int); // this will swap the value of arry alternately and print out .
int main()
{
    cout << "How many number?" << endl;
    int n;
    cin >> n;
    int num[n];
    cout << "please enter numerical values." << endl;
    ;
    getNum(num, n);
    swapAlt(num, n);
    giveNum(num, n);
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
void swapAlt(int arr[], int a)
{
    // this idex will travel in arry and swap as we recquired.
    for (int index = 0; index < a; index = index + 2)
    {
        if (index + 2 <= a)
        {
            swap(arr[index], arr[index + 1]);
        }
    }
}