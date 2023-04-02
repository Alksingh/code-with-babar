/*You are given two arrays 'A' and 'B' of size M and N respectively. Both array are sorted in non decreasing order
. You have to find the intersection of these two arrays.*/
#include <iostream>
using namespace std;
void getNum(int arr[], int);                                              // this will take input from user.
void findArrayIntersection(int arr1[], int size1, int arr2[], int size2); // for finding intersection of two arryas.
void giveNum(int arr[], int);                                             // this will print the value .
int main()
{
    cout << "How many number? in arrys1? " << endl;
    int m;
    cin >> m;
    int arr1[m];
    cout << "please enter numerical values." << endl;
    getNum(arr1, m);
    cout << "How many number? in arrys2? " << endl;
    int n;
    cin >> n;
    int arr2[n];
    cout << "please enter numerical values." << endl;
    getNum(arr2, n);
    findArrayIntersection(arr1, m, arr2, n);
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
void findArrayIntersection(int arr1[], int m, int arr2[], int n)
{
    int k = 0;
    int arr[20];
    for (int i = 1; i <= n; i++)
    {

        for (int j = k; j < n; j++)
        {
            if (arr1[i] >= arr2[j])
            {
                arr[k] = arr1[i];
                k++;
                break;
            }
            else
            {

                break; // no need to go further to check as arrays are in ascending order.
            }
        }
    }
    giveNum(arr, k);
}