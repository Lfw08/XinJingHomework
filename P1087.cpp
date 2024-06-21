#include <bits/stdc++.h>
using namespace std;

void guibing(int left, int right){
    if((right-left)==1){
        return;
    }//此处为出口
    int mid = (left + right )/2;
    guibing(left,mid);
    guibing(mid,right);
    int i = left;
    int zl = left;
    int zr = mid;

    

}