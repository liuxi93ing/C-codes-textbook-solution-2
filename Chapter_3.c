#include<stdio.h>
#include<time.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

/**ϰ��3-1 ����ͳ��(stat)
����һЩѧ���ķ������ĸ��������ֵĴ�����ࣿ����ж�����У���С���������
���� 1��������Ϊ������100�ķǸ�������
���� 2��������Ϊ������100�ķǸ�ʵ��������ౣ����λС����
*/

// ���� 1
// ������Χ��0-100����cnt[101]����¼ÿ���������ֵĴ������ٱ���cnt[]���ѳ��ִ������ķ�����¼��maxScore[]��
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


//����2
//����1�ķ�����Ȼʹ�ã���Ҫ���������cnt[10001]����һ��˼·�ǰ����з�������ֱ�ӱ�������������
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


/**ϰ��3-2 ���ʵĳ���(word)
�������ɸ����ʣ�������ǵ�ƽ�����ȡ�����ֻ������д��ĸ��Сд��ĸ����һ�������ո������
*/
//����Ҫ��¼ÿһ�����ʣ�����ʱ��¼���ȼ���

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


/**ϰ��3-3 �˻���ĩ3λ(product)
�������ɸ�����(����������������������)��������ǵĳ˻���ĩ3λ����Щ�����л����һЩ�ɴ�д��ĸ��ɵ��ַ�������ĳ���Ӧ���������ǡ���ʾ�����Կ�����ִ��scanf("%d")ʱ����һ���ַ�����������
*/
// Ĭ��������ճ˻�С��3λ����ԭ���������0����-93ԭ�������
// ������3λ��Ϊ�����������λ��
// ���ڴ��ڷǷ����룬��Ҫ���ַ���¼�����������ٽ�����Ĭ�������ʽ���£�33 2 -8 ASX -23 WAAA 9936

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

/**ϰ��3-4 ������(calculator)
��д���򣬶���һ��ǡ�ð���һ���Ӻš����Ż�˺ŵı��ʽ���������ֵ������������֤�Ƕ�Ԫ���������������������Ϊ������100�ķǸ�����������������������Խ����ţ�Ҳ������һ�������ո�TAB����������ĩβ�������пո���ʾ��ѡ���ʵ������뷽�����Խ�����򻯡�
	�������룺1+1
	���������2
	�������룺2-    5
	���������-3
	�������룺0  *1982
	���������0
*/
// ���ڶ�����пո�������ַ���������ʹ��scanf����fgets
// �Ƚ���Ԥ����ȥ���ո�������������¼������� ��sscanf�Ϳ���ȡ��������������

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


/**ϰ��3-5 ��ת(rotate)
����һ��n*n���ַ����󣬰�����ת90�Ⱥ������
*/
//Ĭ��ÿ��Ԫ��һ���ַ�,ʹ��fgets����һ�У���¼һ��
//��ת90�Ȳ���Ҫ�����¾���ֻ����Ĵ�ӡ˳�򼴿�

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


/**ϰ��3-6 ����ת��1 (base1)
�������b(2<=b<=10)��������n(ʮ����)�����n��b���Ʊ�ʾ��
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

/**ϰ��3-7����ת��1 (base1)
�������b(2<=b<=10)��������n(b����)�����n��ʮ���Ʊ�ʾ��
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

/**ϰ��3-8 �ֻ�����(keyboard)
����һ����Сд��ĸ��ɵ�Ӣ�ĵ��ʣ�������ֻ���Ĭ��Ӣ�����뷨���ü����С�����Ҫ���pig
������ʣ���Ҫ��1��p��3��i��������ͣ�ٺ�һ��i����Ϊp1i3i1.
*/

// ������Ŀ��������(Ϊʲôghi���ڵļ�Ҫ���Ǹ�i������ ��pqrs���ڵļ���p������)
// ����Ĭ��ÿ�����ɵ�һ����ĸ����

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





