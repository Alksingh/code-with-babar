#include <iostream>
using namespace std;
int rightOccur(int arr[], int n, int key)
{
    int ans = -1;
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

            while (arr[mid] == key)
            {

                ans = mid;
                mid++;
            }
            return ans;
        }
    }
    return ans;
}

int leftOccur(int arr[], int n, int key)
{
    int ans = -1;
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

            while (arr[mid] == key)
            {

                ans = mid;
                mid--;
            }
            return ans;
        }
    }
    return ans;
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
void occur(int arr[],int n,int key)
{

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
    pair<int , int> p;
    
   

    return 0;
}