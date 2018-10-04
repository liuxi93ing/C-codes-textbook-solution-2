#include<stdio.h>
#include<time.h>
#include<math.h>
#include<string.h>

/**ϰ��3-1 ����ͳ��(stat)
����һЩѧ���ķ������ĸ��������ֵĴ�����ࣿ����ж�����У���С���������
���� 1��������Ϊ������100�ķǸ�������
���� 2��������Ϊ������100�ķǸ�ʵ��������ౣ����λС����
*/
/*
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

/**ϰ��3-2 ���ʵĳ���(word)
�������ɸ����ʣ�������ǵ�ƽ�����ȡ�����ֻ������д��ĸ��Сд��ĸ����һ�������ո������
*/
//����Ҫ��¼ÿһ�����ʣ�����ʱ��¼���ȼ���
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

/**ϰ��3-3 �˻���ĩ3λ(product)
�������ɸ�����(����������������������)��������ǵĳ˻���ĩ3λ����Щ�����л����һЩ�ɴ�д��ĸ��ɵ��ַ�������ĳ���Ӧ���������ǡ���ʾ�����Կ�����ִ��scanf("%d")ʱ����һ���ַ�����������
*/

/**ϰ��3-4 ������(calculator)
��д���򣬶���һ��ǡ�ð���һ���Ӻš����Ż�˺ŵı��ʽ���������ֵ������������֤�Ƕ�Ԫ���������������������Ϊ������100�ķǸ�����������������������Խ����ţ�Ҳ������һ�������ո�TAB����������ĩβ�������пո���ʾ��ѡ���ʵ������뷽�����Խ�����򻯡�
	�������룺1+1
	���������2
	�������룺2-    5
	���������-3
	�������룺0  *1982
	���������0
*/

/**ϰ��3-5 ��ת(rotate)
����һ��n*n���ַ����󣬰�����ת90�Ⱥ������
*/

/**ϰ��3-6 ����ת��1 (base1)
�������b(2<=b<=10)��������n(ʮ����)�����n��b���Ʊ�ʾ��
*/

/**ϰ��3-7����ת��1 (base1)
�������b(2<=b<=10)��������n(b����)�����n��ʮ���Ʊ�ʾ��

*/

/**ϰ��3-8 �ֻ�����(keyboard)
����һ����Сд��ĸ��ɵ�Ӣ�ĵ��ʣ�������ֻ���Ĭ��Ӣ�����뷨���ü����С�����Ҫ���pig
������ʣ���Ҫ��1��p��3��i��������ͣ�ٺ�һ��i����Ϊp1i3i1.
*/








