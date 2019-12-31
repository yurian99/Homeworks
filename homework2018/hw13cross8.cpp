//Li,Yuanyuan
// CS211-22B hw13-cross8
#include <iostream>
#include <cmath>
using namespace std;

bool ok(int q[8], int col){
     int Value[][5]={
        {-1},
        {0,-1},
        {0,-1},
        {0,1,2,-1},
        {0,1,3,-1},
        {1,4,-1},
        {2,3,4,-1},
        {3,4,5,6,-1}};

    //test for same number/row test
    for(int i=0;i<col;i++)
        if(q[i]==q[col])return false;
    //test for consecutive integers
    for(int i=0;Value[col][i]!=-1;i++){
        if(abs(q[col]-q[Value[col][i]])== 1)
            return false;
    }
    return true;
}

void print(int q[]){
    static int count=0;
    cout<<"Solution #"<<++count<<endl;
    cout<<"  "<<q[1]<<" "<<q[4]<<endl;
    cout<<q[0]<<" "<<q[2]<<" "<<q[5]<<" "<<q[7]<<endl;
    cout<<"  "<<q[3]<<" "<<q[6]<<endl;
}

void move(int* q, int i){
    if(i==8){
        print(q);
        return;
    }

    for(int j=0;j<8;j++){
        q[i]=j;
        if(ok(q,i))
            move(q,i+1);
    }
}

int main(){
    int q[8];
    move(q,0);
    return 0;
}
