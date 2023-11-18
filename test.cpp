#include <bits/stdc++.h>
using namespace std;
char a[256],b[256],c[256];
int main(){
    double corr=0;
    double d;
    cin>>d;
    cin>>a;
    int len = strlen(a);
    
    cin>>c;
    for(int i=0;i<len;i++){
        if(c[i]==a[i]){
            corr+=1;
        }
    }
    corr = 1.00*corr/(len+1);
    //output yes when corr above 0.85
    if (corr >= d) {
        cout << "yes" << endl;
    }else{
        cout<<"no"<<endl;
    }

    return 0;
}
