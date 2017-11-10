#include <iostream>
using namespace std;

int main()
{
    cout << "part A:" << endl;
    double mx,am,b1, b2, h;//max credit and amount credit
    cout << "Enter the customer's maximum credit: ";
    cin >> mx;
    cout << "Enter the amount of credit used by the customer: ";
    cin >> am;
    cout << "Customer's available credit is " << am - mx << endl;
    cout << "part B:" << endl;
    cout << "What is the height of the trapezoid? ";
    cin >> h;
    cout << "What is the base 1 of the trapezoid? ";
    cin >> b1;
    cout << "what is the base 2 of the trapezoid? ";
    cin >> b2;
    cout << "The area of the trapezoid is " << 0.5 * h * ( b1 + b2) << endl;
    return 0;
}
