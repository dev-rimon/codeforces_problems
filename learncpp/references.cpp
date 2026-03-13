#include <iostream>
using namespace std;
int main()
{
    int int_data{30};
    double double_data{2.5};
    // references
    int &ref_int_data{int_data};
    double &ref_double_data{double_data};

    cout << "int_data " << int_data << endl;
    cout << "double_data" << double_data << endl;
    cout << "ref_int_data" << ref_int_data << endl;
    cout << "ref_double_data" << ref_double_data << endl;

    int_data = 100;
    double_data = 4.5;
    ref_double_data = 3.0000;
    ref_int_data = 20;

    cout << "===========" << endl;
    cout << "int_data " << int_data << endl;
    cout << "double_data" << double_data << endl;
    cout << "ref_int_data" << ref_int_data << endl;
    cout << "ref_double_data" << ref_double_data << endl;
}