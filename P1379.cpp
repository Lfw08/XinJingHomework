#include <bits/stdc++.h>
using namespace std;

struct Step{
    int num;
    string current;
    int x,y;
    Step(int num,string current,int x,int y):num(num),current(current),x(x),y(y){}
};
int dx[]={ -1, 1, 0, 0};
int dy[]={  0, 0,-1, 1};

int main(){
    string start;
    string end= "123804765";
    cin>>start;
    queue<Step> q;

    //遍历并求出坐标,放入队列
    for (int i = 0; i <= 8; ++i) {
        if (start[i] == '0') {
                int x = i / 3;
                int y = i % 3;
                q.push(Step(0,start,x,y));
        }
    }

    //定义集合
    set<string>s;
    s.insert(start);

    //开始BFS
    while(!q.empty()){
        Step p = q.front();
        q.pop();
        if(p.current == end){
            cout<<p.num <<endl;
            return 0;
        }
        string t = p.current;
        int x = p.x;
        int y = p.y;
        int position = x*3 + y;
        for(int k=0;k<4;k++){
            //按照方向改坐标
            int xx = x + dx[k];
            int yy = y + dy[k];
            if(xx >=0 && xx<=2 && yy >=0 && yy <=2){
                int nextPos = xx *3 + yy;
                swap(t[position],t[nextPos]);
                if(s.count(t)==0){
                    q.push(Step(p.num+1,t,xx,yy));
                    s.insert(t);
                }
                swap(t[position], t[nextPosition]);
            }
        }
    }
    return 0;
}
