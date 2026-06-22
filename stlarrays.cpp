#include <iostream>
#include <array>
#include <complex>
using namespace std;
int main()
{
    // q1
    // array<int, 5> a1 = {1, 2, 3, 4, 5};
    // array<int, 5>::iterator it;
    // for (it = a1.end()-1; it >=a1.begin(); it--)
    // {
    //     cout << *it << " ";
    // }

    // q2
    //  array<float, 5> a1 = {5.3, 10.2, 15.5, 20.6, 25.8};
    //  array<float, 5>::iterator it;
    //  float f = a1.size();
    //  float avg = 0;
    //  for (int item : a1)
    //  {
    //      avg += item;
    //  }
    //  avg = avg / f;
    //  cout << avg;

    // q3
    //  array<int, 10> a1;
    //  cout << "enter elements in array";
    //  for (int &item : a1)
    //  {
    //      cin >> item;
    //  }
    //  int greatestno = a1[0];
    //  for (int item : a1)
    //  {
    //      if (greatestno < item)
    //      {
    //          greatestno = item;
    //      }
    //  }
    //  cout << greatestno;

    // q4
    complex<int> a[5];
    cout << "Enter 5 complex numbers";
    inputcomplex(a, 5);
    displaycomplex(a , 5);
    calculatecomplexarr(a,5);   

}
void inputcomplex(complex<int> a[], int size)
{
    int real, img;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter real value";
        cin >> real;
        cout << "Enter img value";
        cin >> img;

        a[i] = complex<int>(real, img);
    }
}
void displaycomplex(complex<int>a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
}
void calculatecomplexarr(complex<int>a[], int size){
    complex<int> b1(0,0);
       for(int i = 0 ; i < size;i++){
            b1 += a[i];
       }
       cout << "Total sum is : " <<b1;
}