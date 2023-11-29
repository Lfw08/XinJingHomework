#include <bits/stdc++.h>
using namespace std;
struct student{
    int grade;
    string name;
};
int main(){
    int n;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].grade;
    }
    for (int i = 0; i < n-1; i++) {
        int min_index = i;
        for (int j = i + 1; j < 4; j++) {
            if (s[j].grade < s[min_index].grade) {
                min_index = j;
            }
        }
        std::swap(s[i], s[min_index]);
    }
    //output the names and grade
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<s[i].name<<" "<<s[i].grade<<endl;
    }


    return 0;
}
