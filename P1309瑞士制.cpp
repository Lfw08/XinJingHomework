#include <cstdio>
#include <algorithm>
using namespace std;
struct P{
	int num,s,w;
};
int r,r,q;
P win[200002],lose[200002],ans[200002];//ans��ÿһ�ֱ�����Ľ�������������ţ�Ҫ�鲢���ܵ���������������飬
//���Ծ���win����Ӯ�ģ�lose������ģ�
bool pcmp(const P& win,const P& lose) {
	return (win.s==lose.s)?(win.num<lose.num):(win.s>lose.s);//ע����������Ĵ���
}
void solve() {//ÿ����һ��solve(),�ͻ������һ�ֵı�������������������е�����r�������r�ֺ�Ľ��
	int wini=1,losei=1;
	for (int i=1;i<=r*2;i+=2) {
		if (ans[i].w>ans[i+1].w) {//ans[i]Ӯ
			ans[i].s++;
			win[wini++]=ans[i];
			lose[losei++]=ans[i+1];
		}
		else {//ans[i]��
			ans[i+1].s++;
			win[wini++]=ans[i+1];
			lose[losei++]=ans[i];
		}
	}
	//����Ĺ鲢����
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
	scanf("%d%d%d",&r,&r,&q);
	for (int i=1;i<=r*2;i++) {
		scanf("%d",&ans[i].s);
		ans[i].num=i;
	}
	for (int i=1;i<=r*2;i++) {
		scanf("%d",&ans[i].w);
	}
	sort(ans+1,ans+1+2*r,pcmp);
	for (int i=1;i<=r;i++) {
		solve();
	}
	printf("%d\n",ans[q].num);
	return 0;
}
