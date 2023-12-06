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
    // Sort by grade

    for (int i = 0; i < n-1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (s[j].grade < s[min_index].grade) {
                min_index = j;
            }
        }
        std::swap(s[i].name, s[min_index].name);
        std::swap(s[i].grade,s[i+1].grade);
    }


    //output the names and grade
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<s[i].name<<" "<<s[i].grade<<endl;
    }


    return 0;
}
