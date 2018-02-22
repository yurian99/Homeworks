// Li, Yuanyuan
// CS211-22B hw1
#include<iostream>
using namespace std;

int main(){
    for(int i=1; i>0; i++){
        int n = i*i;//perfect square value of i
        int x = n%10;//finding last digit
        int y = n / 10 % 10;//finding second to last digit

        if(x%2 !=0 && y%2 !=0){//if the value of n match the requirement then print the number and the two digit
           cout << "The value of i will be "<< i << endl;
           cout << "Second to last digit "<< y << endl;
           cout << "Last digit "<< x << endl;
           cout << "The Number Found is: " << n << endl;
           break;
        }
    }
    return 0;
}
//however the final result would never match the requirement that last two digits both odd.
