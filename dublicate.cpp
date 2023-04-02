/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space.*/
#include <iostream>
using namespace std;
void getNum(int arr[], int);        // this will take input from user.
int findDuplicate(int nums[], int); // for finding single dublicate. arr[1,2,3,1]
int main()
{
    cout << "How many number?" << endl;
    int n;
    cin >> n;
    int num[n];
    cout << "please enter numerical values." << endl;
    getNum(num, n);
    cout << findDuplicate(num, n);
}
void getNum(int arry[], int a)
{
    for (int i = 0; i < a; i++)
    {
        cin >> arry[i];
    }
}
/// @brief
/// @param nums
/// @param n
/// @return
int findDuplicate(int nums[], int n)
{
    int xors = 0;
    for (int i = 1; i < n; i++)
    {
        xors = xors ^ i;
    }
    for (int i = 0; i < n; i++)
    {
        xors = xors ^ nums[i];
    }
    return xors;
}