#include <iostream>
using namespace std;
void dobe(int k)
{
    if (k == 5)
    {
        cout << "value is " << k;
        exit(0);
    }
    cout << "not found.";
}
int main()
{

    dobe(5);
    return 0;
}