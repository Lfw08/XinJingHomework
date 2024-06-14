#include <bits/stdc++.h> 
using namespace std;
struct node//struct定义，好把树的节点连接起来，具体可以看代码呀 
{
	char lc;//左孩子X1（left child，简称lc） 
	char rc;//右孩子X1（right child，简称rc） 
}lt[130];//数组，这个十分重要，一会儿输入字符的时候还要用这个串起来，其实真正起作用的只有lt[73]~lt[122],说这个是为了防止一些人不多想，方便理解的
char h,h1;//储存一会儿要输入的节点，多定义一个h1是为了一会儿将根节点保留下来先代入函数
void sm(char x)
{
	if(x=='*') return;
	cout<<x;//先把它给输出出来，碰着一个就踢出去一个，输出的顺序是可以保障的，至于为什么可以看后面，我解释了 
	sm(lt[x].lc);
	sm(lt[x].rc);
}
int main()
{
	int n;
	scanf("%d",&n);
	cin>>h1;
	cin>>lt[h1].lc;
	cin>>lt[h1].rc;
	for(int i=2;i<=n;i++)
		cin>>h;
		cin>>lt[h].lc;
		cin>>lt[h].rc;
	}
	sm(h1);
	return 0;
}