/*
 * 开灯问题
 *
 * 有n盏灯，编号为1~n。第1个人把所有灯打开，第2个人按下所有编号为2倍数的开关（这些灯将被关掉），第3个人按下编号
 * 3的倍数的开关（其中关掉的灯将被打开，开着的灯将被关闭），以此类推。一共有k个人，问最后有哪些灯开着？输入n和k，
 * 输出开着的灯的编号。k<=n<=1000。
*/
#include <stdio.h>
#include <string.h>
#define maxn 1010
int a[maxn];
int main()
{
    //first为标志变量，表示当前要输出的变量是否为第一个，从而避免输出多余的空格
    int n, k, first = 1;
    //将数组a清零
    memset(a, 0, sizeof(a));
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j % i == 0)
            {
                a[j] = !a[j];
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i])
        {
            if (first)
            {
                first = 0;
            }else
            {
                printf(" ");
            }
            printf("%d", i);
        }
        
    }
    printf("\n");
    return 0;
}