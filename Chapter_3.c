#include<stdio.h>
#include<time.h>
#include<math.h>
#include<string.h>

/**习题3-1 分数统计(stat)
输入一些学生的分数，哪个分数出现的次数最多？如果有多个并列，从小到大输出。
任务 1：分数均为不超过100的非负整数。
任务 2：分数均为不超过100的非负实数，但最多保留两位小数。
*/
/*
// 任务 1
// 分数范围是0-100，用cnt[101]来记录每个分数出现的次数，再遍历cnt[]，把出现次数最多的分数纪录在maxScore[]里
#define MAXN 1000+10
int score[MAXN];
int maxScore[MAXN];
int main()
{
    int i = 0, j = 0, x = 0, maxCnt = 0;
    int cnt[101];
    memset(score, -1, sizeof(score));
    memset(maxScore, -1, sizeof(maxScore));
    memset(cnt, 0, sizeof(cnt));
    while(scanf("%d",&score[x])==1)
    {
        cnt[score[x]]++;
        x++;
    }

//    for(j=0;j<x;j++)
//        printf("%d ",score[j]);


    for(i=0;i<=100;i++)
    {
        if(cnt[i]!=0&&cnt[i]==maxCnt)
        {
            maxScore[j++] = i;
        }
        if(cnt[i]>maxCnt)
        {
            j = 0;
            maxCnt = cnt[i];
            maxScore[j++] = i;
        }
    }

    for(i=0;i<j;i++)
        printf("%d ", maxScore[i]);
    printf("\n");
    return 0;
}


//任务2
//任务1的方法仍然使用，需要更大的数组cnt[10001]。另一个思路是把所有分数排序。直接遍历排序后的数组
#define MAXN 1000+10
double score[MAXN];
double maxScore[MAXN];
int main()
{
    int i = 0, j = 0, x = 0, cnt = 0, maxCnt = 0;
    double temp = 0;
    memset(score, -1, sizeof(score));
    memset(maxScore, -1, sizeof(maxScore));
    while(scanf("%lf", &score[x])==1)
        x++;

    if(x==1)
    {
        printf("%.2lf\n",score[0]);
        return 0;
    }

    for(i=0;i<x;i++)
    {
        for(j=0;j<x-i-1;j++)
        {
            if(score[j]>score[j+1])
            {
                temp = score[j];
                score[j] = score[j+1];
                score[j+1] = temp;
            }
        }
    }
//    for(j=0;j<x;j++)
//        printf("%.2lf ",score[j]);

    j = 0;
    for(i=1;i<x;i++)
    {
        if(score[i]==score[i-1])
            cnt++;
        else if(cnt==maxCnt)
        {
            maxScore[j++] = score[i-1];
            cnt = 0;
        }
        else if(cnt>maxCnt)
        {
            j = 0;
            maxScore[j++] = score[i-1];
            maxCnt = cnt;
            cnt = 0;
        }
    }

    for(i=0;i<j;i++)
        printf("%.2lf ", maxScore[i]);
    printf("\n");
    return 0;
}
*/

/**习题3-2 单词的长度(word)
输入若干个单词，输出他们的平均长度。单词只包含大写字母和小写字母，用一个或多个空格隔开。
*/
//不需要记录每一个单词，输入时记录长度即可
/*
#define MAXL 30
char words[MAXL];

int main()
{
    int i = 0, cnt = 0, sum = 0;
    double ave = 0;
    memset(words,0,sizeof(words));
    while(scanf("%s",words)==1)
    {
        i = 0;
        while(words[i]!='\0')
            i++;
        sum += i;
        cnt++;
    }

    ave = (double)sum/(double)cnt;

//    for(i=0;i<x;i++)
//        printf("%s\n",words[i]);

    printf("%lf\n",ave);
    return 0;
}
*/

/**习题3-3 乘积的末3位(product)
输入若干个整数(可以是正数、负数或者零)，输出他们的乘积的末3位。这些整数中会混入一些由大写字母组成的字符串，你的程序应当忽略它们。提示：试试看，在执行scanf("%d")时输入一个字符串会怎样？
*/

/**习题3-4 计算器(calculator)
编写程序，读入一行恰好包含一个加号、减号或乘号的表达式，输出它的值。这个运算符保证是二元运算符，且两个运算数均为不超过100的非负整数。运算数和运算符可以紧挨着，也可以用一个或多个空格、TAB隔开。行首末尾均可以有空格。提示：选择适当的输入方法可以将问题简化。
	样例输入：1+1
	样例输出：2
	样例输入：2-    5
	样例输出：-3
	样例输入：0  *1982
	样例输出：0
*/

/**习题3-5 旋转(rotate)
输入一个n*n的字符矩阵，把它左转90度后输出。
*/

/**习题3-6 进制转换1 (base1)
输入基数b(2<=b<=10)和正整数n(十进制)，输出n的b进制表示。
*/

/**习题3-7进制转换1 (base1)
输入基数b(2<=b<=10)和正整数n(b进制)，输出n的十进制表示。

*/

/**习题3-8 手机键盘(keyboard)
输入一个有小写字母组成的英文单词，输出用手机的默认英文输入法的敲键序列。例如要打出pig
这个单词，需要按1次p，3次i，（稍做停顿后）一次i，记为p1i3i1.
*/








