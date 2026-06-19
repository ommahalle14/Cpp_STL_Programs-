#include <iostream>
#include <array>
using namespace std;
int main()
{
    // array<float, 5> a1 = {5.3, 10.2, 15.5, 20.6, 25.8};
    // array<float, 5>::iterator it;
    // float f = a1.size();
    // float avg = 0;
    // for (int item : a1)
    // {
    //     avg += item;
    // }
    // avg = avg / f;
    // cout << avg;
    array<int, 10> a1;
    cout << "enter elements in array";
    for (int &item : a1)
    {
        cin >> item;
    }
    int greatestno = a1[0];
    for (int item : a1)
    {
        if (greatestno < item)
        {
            greatestno = item;
        }
    }
    cout << greatestno;
}