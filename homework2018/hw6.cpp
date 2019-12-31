//Li,Yuanyuan
// CS211-22B hw6
#include<iostream>
#include<cmath>
#include<cstdlib>
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

void backtrack(int &col){
    col--;

    if(col == -1){
        exit(1);
    }
}

void print(int q[]){
    cout<<" "<<q[0]<<q[1]<<" "<<endl;
    cout<<q[2]<<q[3]<<q[4]<<q[5]<<endl;
    cout<<" "<<q[6]<<q[7]<<" "<<endl;
    cout<<endl;
}

int main(){
    int q[8],c=0;
    bool flag=false;

    while(true){
        while(c<8){
           if(!flag)q[c]=-1;
           flag=false;

           while(q[c]<8){
            q[c]++;
            if(q[c]==8){
              backtrack(c);
              continue;
            }
           if(ok(q,c))break;
          }
        c++;
        }
        print(q);
        backtrack(c);
        flag=true;
    }
    return 0;
}
