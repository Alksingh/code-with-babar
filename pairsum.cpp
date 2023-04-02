#include <iostream>
using namespace std;
void getNum(int arr[], int);       // this will take input from user.
void giveNum(int arr[], int);      // this will print the value .
void pairSum(int arr[], int, int); // this is for find pair for ex. [1,2,3,4,5,0]>> and sum is 4 output will be 1,4 and 2,3 and 5,0
int main()
{
    cout << "How many number?" << endl;
    int n;
    cin >> n;
    int num[n];
    cout << "please enter numerical values." << endl;
    getNum(num, n);
    cout << "enter the sum value." << endl;
    int s;
    cin >> s;
    pairSum(num, n, s);
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
void pairSum(int arr[], int n, int s)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                int a = arr[i], b = arr[j];
                if (a > b)
                {

                    swap(a, b);
                }

                cout << a << " " << b;
                cout << endl;
            }
        }
    }
}
