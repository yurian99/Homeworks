#include<iostream>
#include<cmath>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

bool largerThan11(int x){
  return x > 11;
}

int rollDice(){
  return 1 + rand() % 6;
}

void emphasis(string x){
  for(int i = 0; i < 3; i++) cout << x;
}
void computeRectangle(double len, double wid, double &area, double &perimeter ){
    area = len * wid;
    perimeter = (len + wid) * 2;
    return;
}
void swap(int &x, int &y){
    int num = x;
    y = x;
    x = num;
    return;
}


int main(){
    cout << "Part A\n";
    cout << "Compound Interest - How long does it take to double my money?\n";
    cout << "Rate    " << "Actual  " << "Rule_of_72      " << "Diff." << endl;
    cout << "-------------------------------------" << endl;
    cout << fixed << setprecision(2);
    for(int n = 1; n <= 20; n++){
        cout << n << "%\t";
        cout << log(2) / log(1 + n*0.01) << "\t";
        cout << "      " << (double) 72 / n << "\t";
        cout << (log(2) / log(1 + n*0.01)) - ((double)72/n);
        cout << endl;
    }

    cout << "\nPART B: " << endl;
    int dice1, dice2, dice3, sum = 0;

    while(!largerThan11(sum)){
    srand(time(0) + rand()% 1234);
    dice1 = rollDice();
    dice2 = rollDice();
    dice3 = rollDice();
    sum = dice1+dice2+dice3;
    cout<<"Roll dice: "<<dice1<<" "<<dice2<<" "<<dice3<<" Sum = "<<sum<<endl;
  }
    emphasis("Yes! Finally.");

    cout << endl;


    cout << "\nPart C:\n";
    double len = 2.5, wid = 5, area = 0, perimeter = 0;
    computeRectangle(len, wid, area, perimeter);
    cout << "Area of Rectangle = " << area << " and its Perimeter = " << perimeter << endl;
    swap(area, perimeter);
    cout << "Values in area and perimeter are swapped: " << area << " " << perimeter << endl;

    return 0;

}
