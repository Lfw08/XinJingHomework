#include <bits/stdc++.h>
using namespace std;
struct Student{
    char name[10];
    double height;
    double weight;
    double score[4];
};
int main(){
    int sum=0;
    Student s[4];
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cin>>s[j].score[i];
            cout<<endl;
        }
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            sum+=s[i].score[1];
        }
    }
    cout<<sum/3;
    return 0;
}