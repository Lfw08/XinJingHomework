#include <cstdio>
#include <algorithm>
using namespace std;
struct P{
	int num,s,w;
};
int n,r,q;
P win[200002],lose[200002],ans[200002];//ans存每一轮比赛后的结果，按名次来排，要归并，总得有两个有序的数组，
//所以就拿win来存赢的，lose来存输的，
bool pcmp(const P& win,const P& lose) {
	return (win.s==lose.s)?(win.num<lose.num):(win.s>lose.s);//注意特殊情况的处理
}
void solve() {//每调用一次solve(),就会求出下一轮的比赛结果，所以主程序中调用了r次来求出r轮后的结果
	int wini=1,losei=1;
	for (int i=1;i<=n*2;i+=2) {
		if (ans[i].w>ans[i+1].w) {//ans[i]赢
			ans[i].s++;
			win[wini++]=ans[i];
			lose[losei++]=ans[i+1];
		}
		else {//ans[i]输
			ans[i+1].s++;
			win[wini++]=ans[i+1];
			lose[losei++]=ans[i];
		}
	}
	//经典的归并代码
	int i=1,j=1,k=1;
	while (i<wini && j<losei) {
		if (pcmp(win[i],lose[j])) {
			ans[k++]=win[i++];
		}
		else {
			ans[k++]=lose[j++];
		}
	}
	while (i<wini) ans[k++]=win[i++];
	while (j<losei) ans[k++]=lose[j++];
}
int main() {
	scanf("%d%d%d",&n,&r,&q);
	for (int i=1;i<=n*2;i++) {
		scanf("%d",&ans[i].s);
		ans[i].num=i;
	}
	for (int i=1;i<=n*2;i++) {
		scanf("%d",&ans[i].w);
	}
	sort(ans+1,ans+1+2*n,pcmp);
	for (int i=1;i<=r;i++) {
		solve();
	}
	printf("%d\n",ans[q].num);
	return 0;
}
