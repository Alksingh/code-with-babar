/*Given an arry of integer of size n where all the integer of arry are in the range [1,n]
and each integer appear once or twice return an arry of all integer that appear twice.*/
#include <iostream>
using namespace std;
void getNum(int arr[], int);         // this will take input from user.
void findDuplicate(int nums[], int); // for finding single dublicate. arr[1,2,3,1]
void giveNum(int arr[], int);        // this will print the value .
int main()
{
    cout << "How many number?" << endl;
    int n;
    cin >> n;
    int num[n];
    cout << "please enter numerical values." << endl;
    getNum(num, n);
    findDuplicate(num, n);
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
void findDuplicate(int nums[], int n)
{
    int k = 0;
    int arr[20];
    for (int i = 1; i <= n; i++)
    {

        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == nums[j])
            {
                count++;
            }
            if (count == 2)
            {
                arr[k] = i;
                k++;
                break; // avoid multiple entry that is more than two times.
            }
        }
    }
    giveNum(arr, k);
}