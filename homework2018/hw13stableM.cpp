//Li,Yuanyuan
// CS211-22B hw13-stable marriage
#include <iostream>
#include <cmath>
using namespace std;

bool ok(int q[], int col){
    int mp[3][3]={{0,2,1},{0,2,1},{1,2,0}};
    int wp[3][3]={{2,1,0},{0,1,2},{2,0,1}};

    //case if woman was already assigned to another man
    for(int i=0;i<col;i++){
        if(q[i]==q[col])
            return false;
    }
    //case if current man(i) and new woman(q[col]) prefer each other
    for(int i=0;i<col;i++){
        if((mp[i][q[col]])<(mp[i][q[i]]) && (wp[q[col]][i])<(wp[q[col]][col]))
            return false;
    }
    //case if new man(col) and current woman(q[i]) prefer each other
    for(int i=0;i<col;i++){
        if((mp[col][q[i]])<(mp[col][q[col]]) && (wp[q[i]][col])<(wp[q[i]][i]))
            return false;
    }
    return true;
}

void print(int q[]){
    static int count=0;
	cout<<"Solution #"<<++count<<endl;
	for(int i=0;i<3;i++){
		cout<<q[i]<<" ";
	}
	cout<<endl;
}

void move(int* q, int i){
    if(i==3){
        print(q);
        return;
    }

    for(int j=0;j<3;j++){
        q[i]=j;
        if(ok(q,i))
        move(q,i+1);
    }
}

int main(){
    int q[3];
    move(q,0);
    return 0;
}
