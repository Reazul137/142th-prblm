#include<iostream>
using namespace std;
int main()
{
    float kel, cel;

    cout << "\n\n Convert temperature in kelvin to Celsius : \n";
    cout << "------------------------------------------------\n";

    cout << " Input temperature in kelvin : ";
    cin >> kel;

    cel = kel - 273.15;

    cout << " The temperature in kelvin " << kel << " and converted in Celsius temperature is " << cel <<endl;
    cout << endl;
    return 0;
}
