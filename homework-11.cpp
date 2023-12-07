#include <bits/stdc++.h>
using namespace std;

struct student{
    int grade;
    string name;
};

// Define a custom comparator function to sort by grade
bool compareByGrade(const student &a, const student &b){
    return a.grade < b.grade;
}

int main(){
    int n;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].grade;
    }

    // Sort by grade using std::sort
    std::sort(s, s+n, compareByGrade);

    //output the names and grade
    cout<<endl;
    for(int i=n;i>=0;i--){
        cout<<s[i].name<<" "<<s[i].grade<<endl;
    }

    return 0;
}