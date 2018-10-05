#include<stdio.h>
#include<time.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

/**习题3-1 分数统计(stat)
输入一些学生的分数，哪个分数出现的次数最多？如果有多个并列，从小到大输出。
任务 1：分数均为不超过100的非负整数。
任务 2：分数均为不超过100的非负实数，但最多保留两位小数。
*/

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

//    for(j = 0; j < x; j++)
//        printf("%d ",score[j]);


    for(i = 0; i <= 100; i++)
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

    for(i = 0; i < j; i++)
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

    for(i = 0; i < x; i++)
    {
        for(j = 0; j < x-i-1; j++)
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
    for(i = 1; i < x; i++)
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


/**习题3-2 单词的长度(word)
输入若干个单词，输出他们的平均长度。单词只包含大写字母和小写字母，用一个或多个空格隔开。
*/
//不需要记录每一个单词，输入时记录长度即可

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
        cnt ++;
    }

    ave = (double)sum/(double)cnt;

//    for(i = 0;i < x; i++)
//        printf("%s\n",words[i]);

    printf("%lf\n",ave);
    return 0;
}


/**习题3-3 乘积的末3位(product)
输入若干个整数(可以是正数、负数或者零)，输出他们的乘积的末3位。这些整数中会混入一些由大写字母组成的字符串，你的程序应当忽略它们。提示：试试看，在执行scanf("%d")时输入一个字符串会怎样？
*/
// 默认如果最终乘积小于3位，则原样输出不补0。如-93原样输出。
// 若大于3位且为负，输出符号位。
// 由于存在非法输入，需要用字符串录入所有输入再解析。默认输入格式如下：33 2 -8 ASX -23 WAAA 9936

#define MAXN 1000+10
int num[MAXN];

int main()
{
    int i = 0, cnt = 0, flag = 1, prod = 1;
    char temp[50] = {0};
    memset(num, 0, sizeof(num));
    while(scanf("%s", temp)!=EOF)
    {
        if(isalpha(temp[0]))
            continue;
        else
            num[cnt++] = atoi(temp);
    }
    for(i = 0; i < cnt; i++)
    {
        if(num[i]==0)
        {
            printf("0\n");
            return 0;
        }
        else if(num[i]<0)
            flag = flag * (-1);

        prod *= abs(num[i])%1000;
        prod %= 1000;
    }
    printf("%d\n",prod*flag);
    return 0;
}

/**习题3-4 计算器(calculator)
编写程序，读入一行恰好包含一个加号、减号或乘号的表达式，输出它的值。这个运算符保证是二元运算符，且两个运算数均为不超过100的非负整数。运算数和运算符可以紧挨着，也可以用一个或多个空格、TAB隔开。行首末尾均可以有空格。提示：选择适当的输入方法可以将问题简化。
	样例输入：1+1
	样例输出：2
	样例输入：2-    5
	样例输出：-3
	样例输入：0  *1982
	样例输出：0
*/
// 由于读入带有空格的整行字符串，不能使用scanf而用fgets
// 先进行预处理去掉空格和运算符，并记录运算符。 用sscanf就可提取出两个运算数。

int main()
{
    char line[50] = {0};
    while(fgets(line,50,stdin)!=NULL)
    {
        char temp[50] = {0};
        int i = 0, j = 0;
        int x1 = 0, x2 = 0, oper = 0, res = 0;
        for(i = 0; line[i]!='\0'; i++)
        {
            if(line[i]==' ') continue;
            if(line[i]=='+'||line[i]=='-'||line[i]=='*')
            {
                oper = line[i];
                line[i] = ' ';
            }
            temp[j++] = line[i];
        }
 //       printf("temp is: %s",temp);
 //       printf("operator is: %d\n",oper);
        sscanf(temp, "%d%d", &x1, &x2);
        if(oper=='+') printf("%d\n", x1+x2);
        if(oper=='-') printf("%d\n", x1-x2);
        if(oper=='*') printf("%d\n", x1*x2);
    }
    return 0;
}


/**习题3-5 旋转(rotate)
输入一个n*n的字符矩阵，把它左转90度后输出。
*/
//默认每个元素一个字符,使用fgets读入一行，记录一行
//左转90度不需要建立新矩阵，只需更改打印顺序即可

#define MAXN 100+10
char temp[MAXN];
char a[MAXN][MAXN];

int main()
{
    memset(temp, 0, sizeof(temp));
    memset(a, 0 , sizeof(a));
    int i = 0, j = 0, k = 0, len = 0;
    while(fgets(temp, MAXN, stdin)!=NULL)
    {
        k = 0;
        for(i = 0; temp[i]!='\0'; i++)
        {
            if(temp[i]==' ') continue;
            a[j][k++] = temp[i];
        }
        j++;
    }
    len = j;

    for(j = len-1; j >= 0 ; j--)
    {
        for(i = 0; i < len; i++)
            printf("%c ", a[i][j]);
        printf("\n");
    }
    return 0;
}


/**习题3-6 进制转换1 (base1)
输入基数b(2<=b<=10)和正整数n(十进制)，输出n的b进制表示。
*/

int main()
{
    int num[100] = {-1};
    int base = 0, n = 0, i = 0;
    scanf("%d%d",&base, &n);
    while(n>=base)
    {
        num[i++] = n % base;
        n = n/base;
    }
    num[i] = n;
    while(i>=0)
        printf("%d", num[i--]);
    return 0;
}

/**习题3-7进制转换1 (base1)
输入基数b(2<=b<=10)和正整数n(b进制)，输出n的十进制表示。
*/

int  main()
{
    int base = 0, n = 0, i = 0, k = 0;
    char num[100] = {'\0'};
    scanf("%d %s", &base, num);
    i = strlen(num)-1;
    k = 1;

    while(i>=0)
    {
        n += k*(num[i]-'0');
        k *= base;
        i--;
    }
    printf("%d\n",n);
    return 0;
}

/**习题3-8 手机键盘(keyboard)
输入一个有小写字母组成的英文单词，输出用手机的默认英文输入法的敲键序列。例如要打出pig
这个单词，需要按1次p，3次i，（稍做停顿后）一次i，记为p1i3i1.
*/

// 由于题目表述不明(为什么ghi所在的键要有那个i来代表 而pqrs所在的键用p来代表)
// 我们默认每个键由第一个字母代表。

int main()
{
    char words[30] = {0};
    char tap[60] = {0};
    int i = 0, j = 0;
    scanf("%s", words);
    for(i = 0; i < strlen(words); i++)
    {
        if(words[i]-'a'<=2) { tap[j++] = 'a'; tap[j++] = words[i]- 'a' + '1';}
        else if(words[i]-'d'<=2) { tap[j++] = 'd'; tap[j++] = words[i]- 'd' + '1';}
        else if(words[i]-'g'<=2) { tap[j++] = 'g'; tap[j++] = words[i]- 'g' + '1';}
        else if(words[i]-'j'<=2) { tap[j++] = 'j'; tap[j++] = words[i]- 'j' + '1';}
        else if(words[i]-'m'<=2) { tap[j++] = 'm'; tap[j++] = words[i]- 'm' + '1';}
        else if(words[i]-'p'<=3) { tap[j++] = 'p'; tap[j++] = words[i]- 'p' + '1';}
        else if(words[i]-'t'<=2) { tap[j++] = 't'; tap[j++] = words[i]- 't' + '1';}
        else if(words[i]-'w'<=3) { tap[j++] = 'w'; tap[j++] = words[i]- 'w' + '1';}
    }
    printf("%s\n", tap);
    return 0;
}





