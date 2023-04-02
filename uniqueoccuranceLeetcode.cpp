#include <iostream>
using namespace std;
void getNum(int arr[], int);     // this will take input from user.
void giveNum(int arr[], int);    // this will print the value .
bool uniqeOccur(int arr[], int); // this will return 1 or 0 on the basis of occurance of number.
void asc(int arr[], int);        // this function will arrange arry in ascending order.
int main()
{
    cout << "How many number?" << endl;
    int n;
    cin >> n;
    int num[n];
    cout << "please enter numerical values." << endl;
    getNum(num, n);
    asc(num, n);
    cout << uniqeOccur(num, n);
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
bool uniqeOccur(int arr[], int a)
{
    int occurance[20];
    int occurancesize = 0;
    for (int i = 0, k = 0; i < a; k++)
    {

        int count = 0;
        for (int j = i; arr[i] == arr[j]; j++)
        {
            count++;
        }
        occurance[k] = count;
        i = i + count;
        occurancesize = k + 1;
    }
    asc(occurance, occurancesize);
    for (int i = 0; i < occurancesize; i++)
    {
        for (int j = i + 1; j < occurancesize; j++)
        {
            if (occurance[i] == occurance[j])
            {
                return false;
            }
        }
    }
    return true;
}
void asc(int arr[], int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}