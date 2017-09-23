#include <iostream>
using namespace std;

int main()
{
    int workhour; double hourlywage, grosspay, deduction, netpay;
    cout << "How many hours did you work? ";
    cin >> workhour;
    if(workhour < 0){ //negative hour entered case
        cout << "You have entered a negative number for worked hour.\n" << "Terminating the program." << endl;
        return 0;
    }else{
    cout << "How much do you make per hour? ";
    }
    cin >> hourlywage;
    while(hourlywage < 0){
        cout << "Your hourly wage is less than 0. Please try again: ";
        cin >> hourlywage;
    }
    cout << endl << endl;

    cout << "Wage Calculator\n" << endl;
    cout << "Hours Worked          " << workhour << endl;
    cout << "Hourly Wage           " << hourlywage << endl;
    cout << "----------------------" << endl;
    if(workhour > 40){
        grosspay = hourlywage * 40 + (workhour - 40) * hourlywage * 1.50;
    }
    else{
    grosspay = hourlywage * workhour;
    }
    if(grosspay <= 100.00){
        deduction = grosspay * 0.02;
        }
    else if(100.01 <= grosspay <= 500.00){
        deduction = grosspay * 0.05;
    }else{
    deduction = grosspay * 0.09;
    }
    cout << "Gross Pay             " << grosspay << endl;
    cout << "Deductions            " << deduction << endl;
    cout << "----------------------" << endl;
    cout << "Net Pay               " << grosspay - deduction << endl;
    return 0;

}
