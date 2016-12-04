/*************************************************************************
	> File Name: hello.cpp
	> Author:ukiy 
	> Mail: 
	> Created Time: 2016年12月04日 星期日 22时52分09秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<climits>
#include<string>
#include<cstring>
#include<vector>
#include<set>
#include<list>
#include<map>
#include<queue>
int dire[4][2]={ {0,1},{1,0},{0,-1},{-1,0} };
int dire2[8][2]={{-1,-1},{-1,0},{-1,1},{ 0,-1},{ 0,1},{ 1,-1},{ 1,0},{ 1,1}};
#define rep(i,a,b) for(int i=(a);i<=(b);(i++))
#define inf 0x3f3f3f
#define ll long long
#define pi acos(-1)
int dire3[6][3]={ {0,0,1},{0,1,0},{1,0,0},{0,0,-1},{0,-1,0},{-1,0,0} };
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    #ifndef OnlineJudge
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    #endif
    printf("hello cpp\n");   
    return 0;
}
