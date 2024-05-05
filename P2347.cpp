#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int p[1005]={0};
    int a[7];
    for (int i=1;i<=6;i++)
    cin>>a[i];//输入
    for (int b=0;b<=a[1];b++)
    {
        for (int c=0;c<=a[2];c++)
        {
            for (int d=0;d<=a[3];d++)
            {
                for (int e=0;e<=a[4];e++)
                {
                    for (int f=0;f<=a[5];f++)
                    {
                        for (int g=0;g<=a[6];g++)
                        {
                            int s=0;
                            s=s+b+c*2+d*3+e*5+f*10+g*20;//求和
                            p[s]=1;//状态变为1
                        }
                    }
                }
            }
        }
    }
    int t=0;
    for (int i=1;i<=1004;i++)
    if (p[i]) t++;
    cout<<"Total="<<t<<endl;
    return 0;
}