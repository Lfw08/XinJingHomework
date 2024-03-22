#include <bits/stdc++.h>
using namespace std;

int dist[11];
int enter[1145];
int pending[1145];
struct node{
    int e;//end point
    int w;//weight
};



int p[6][6];
int start_p;

int main(){
    //initialize
    for(int i=0; i<6; i++){
        dist[i]=1145;
    }
    //input
    for(int i=1;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>p[i][j];
        }
    }
    cin>>start_p;
    //initialize distance
    //if there is a direct way then input it;
    //if not, then set to 1145;
    for(int i=1;i<=5;i++){
        //node number i
        //check whether there is a direct way
        if(p[start_p][i]!=1000){//there is a way
            dist[i]=p[start_p][i];
        }else{//there aren't any direct ways
            dist[i]=1145;
        }
    }

    for(int n=1;n<5;n++){//for every side number n:
        
    }

    return 0;
}


