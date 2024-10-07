#include <iostream>
#include <string>

using namespace std;

int main()
{

    double meters, km;

    cout << "enter meters:";
    cin >> meters;

    km = meters / 1000.0;
    cout << meters << "meters =" << km << "kilometrs" << endl;
}

