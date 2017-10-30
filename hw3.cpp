#include<iostream>
#include<cmath>
double pow(double r,double n);//n is the number of period. r is the rate of interest.
using namespace std;

int main(){
    //Part A
    int num;
    cout << "Enter an odd integer between 9 and 15 (inclusive): ";
    cin >> num;

    while(num > 15 || num < 9){
       cout << "Enter an odd integer between 9 and 15 (inclusive): ";
       cin >> num;
    }
    while(num <= 15 && num >= 9){
       if(num % 2 == 0){
       cout << "Enter an odd integer between 9 and 15 (inclusive): ";
       cin >> num;
       }
        else cout << "Thank you!" << endl;
        break;
     }
     for(int row = 1; row <= num; row++){
        for(int pattern = 0; pattern < 2; pattern++){
           for(int col = 1; col <= num; col++){
              if(col == row || ((col + row) == (num + 1))) cout << "-";
              else if(col == ((num + 1)/2)) cout << "&";
              else if(row == ((num + 1)/2)&& col >= ((num + 1)/2)) cout << "+";
              else if(row == ((num + 1)/2)&& col <= ((num + 1)/2)) cout << "x";
              else cout << " ";
           }
        cout << "    ";
        }
     cout << endl;
     }
     cout << endl;

     //Part B
     int n; double rate = 0.01;
     cout << "Future Value of $1 After a Given Number of Periods" << endl << endl;
     for(int n = 1; n <= 10; n++){
        if(n == 1)cout << "Periods  " << n << "%" << "      ";
        else cout << n << "%" << "      ";
     }
     cout << "\n";
     for (int t = 1; t <= 10; t++){
        if(t < 10){
            cout << t;
            cout << "       ";
        }
        else{
            cout << t;
            cout << "      ";
        }
		for (int r = 1; r <= 10; r++) {
			int counter = 1;
			double fv = 1.0000;
			while (counter <= t) {
            fv = fv * (1 + r / 100.00);
				counter++;
			}
			cout << fv << "\t";
		}
		cout << endl;
	  }

}

