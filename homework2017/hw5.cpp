#include<iostream>
using namespace std;

int countFive(int x){

   	if(x>0){
       if( (x % 10) == 5){
			return  countFive(x/10)+1;
		}
		return countFive(x/10);
    }
}
void printStarDigit(int y){

    if(y<10){
      cout <<"*" << y <<"*";
      return;
    }
    printStarDigit(y/10);
    cout << y%10 << "*";
}
// Returns the sum of all the elements.
int sum(int a[], int size){
   int sumA = 0;
   for(int i=0; i<size; i++)
      sumA += a[i];
   return sumA;
}
// Returns true if the 2 arrays have the same elements in the same order.
bool arraysEqual(int a[], int b[], int size){
    for(int i=0; i<size; i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}
int main(){
 cout << "Part A:\n";
 int input1 = 505155, input2 = 5, input3 = 717171;
 //should output: 4
 cout << "counting digit 5: " << countFive(input1) << endl;
 printStarDigit(input1); //should output: *5*0*5*1*5*5*
 cout << endl;
 //should output: 1
 cout << "counting digit 5: " << countFive(input2) << endl;
 printStarDigit(input2); //should output: *5*
 cout << endl;
 //should output: 0
 cout << "counting digit 5: " << countFive(input3) << endl;
 printStarDigit(input3); //should output: *7*1*7*1*7*1*
 cout << endl;
 cout << "Part B:\n";
 int a[4] = {3, 5, 5, 2};
 int b[4] = {3, 5, 5, 2};
 int c[5] = {3, 3, 3, 3, 3};
 int d[5] = {3, 3, 3, 3, 4};
 cout << "The elements of array a add up to " << sum(a, 4) << endl;
 if (arraysEqual(a, b, 4))
 cout << "Arrays a and b are equal" << endl;
 else cout << "Arrays a and b are not equal" << endl;
 if (arraysEqual(c, d, 5))
 cout << "Arrays c and d are equal" << endl;
 else cout << "Arrays c and d are not equal" << endl;
 return 0;
}
