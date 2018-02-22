//Yuanyuan Li
//cs111 1A
#include<iostream>
using namespace std;

int smallestCol(int x[][3], int a, int b){
    int num;
    for (int i=0; i<b; i++){
       int sum = 0;
       for (int j=0; j<a; j++)
       sum += x[i][j];
       if((i==0)||(sum < num)) num=sum;
    }
    return num;
}

string toUpperCase(string &str){
   int ln = str.length();
   for (int i=0; i<ln; i++){
      if (str[i]>='a' && str[i]<='z')
            str[i] = str[i] - 32;
    }
    return str;
}
string toLowerCase(string &str){
    int ln = str.length();
    for (int i=0; i<ln; i++){
       if(str[i]>='A' && str[i]<='Z')
            str[i] = str[i] + 32;
     }
     return str;
}

void equals(string &a, string &b){
   if(a == b) cout << "Both strings are equal.";
   else cout << "The input strings are different.";
}

int main(){
    cout << "Part A:\n";
    int x[2][3] = {{1, 3, 4}, {5, 1, 9}};
    cout << "Smallest column sum = " << smallestCol (x, 2, 3) << endl;
// from the 2-d array x that has size 2 x 3, find the smallest col sum
// output will be 4 since col#1 contains 3 and 1 is smallest.
    cout << "Part B:\n";
    string a, b;
    cout << "Please enter two words: ";
    cin >> a; cin >> b;
    equals(a,b);
    cout << endl;
    cout << "Words in uppercase: " << toUpperCase(a) <<" "<< toUpperCase(b)<< endl;
    cout << "Words in lowercase: " << toLowerCase(a) <<" "<< toLowerCase(b)<< endl;


    return 0;
}
