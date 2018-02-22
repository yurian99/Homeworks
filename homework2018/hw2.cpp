// Li, Yuanyuan
// CS211-22B hw2
#include <iostream>
using namespace std;

bool equivalent(int a[], int b[], int n){
   for(int p=0; p<n; p++){
      int flag=0;//counter of two array
      for(int i=0; i<n; i++){
          if(a[i]==b[(p+i)%n])flag++;
      }
      if(flag==n) return true;//if length matched array A then its true
    }
    return false;
}

int main() {
	cout << boolalpha; //print true or false instead of 1/0

	int a1[5] = {1,2,3,4,5};
	int b1[5] = {4,5,1,2,3};
	cout << "a1[] == b1[]? " << equivalent(a1, b1, 5) << endl; //true
	cout << "b1[] == a1[]? " << equivalent(b1, a1, 5) << endl; //true

	int a2[7] = {3,4,5,6,7,8,9};
	int b2[7] = {5,6,7,8,9,3,4};
	cout << "a2[] == b2[]? " << equivalent(a2, b2, 7) << endl; //true
	cout << "b2[] == a2[]? " << equivalent(b2, a2, 7) << endl; //true

	int a3[4] = {5,4,2,1};
	int b3[4] = {1,2,4,5};
	cout << "a3[] == b3[]? " << equivalent(a3, b3, 4) << endl; //false
	cout << "b3[] == a3[]? " << equivalent(b3, a3, 4) << endl; //false

	return 0;
}
