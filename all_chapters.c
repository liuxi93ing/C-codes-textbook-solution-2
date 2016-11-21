#include<stdio.h>
#include<time.h>
#include<math.h>
#include<string.h>

//习题1-1 平均数（average）
//输入3个整数，输出他们的平均数，保留3位小数。
/*
int main()
{
    int a, b, c;
    scanf("%d%d%d",&a, &b, &c);
    printf("%.3f\n", (float)(a+b+c)/3);
    return 0;
}
*/

//习题1-2 温度（temperature）
//输入华氏温度f，输出对饮的摄氏温度c，保留三位小数。 c=5(f-32)/9
/*
int main()
{
    double f;
    scanf("%lf",&f);
    printf("%.3lf\n",(f-32)*5/9);
    return 0;
}
*/

//习题1-3 连续和（sum）
//输入正整数n，输入1+2+3....+n得值。提示：目标是解决问题，不是练习编程

/*
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n*(n+1)/2);
    return 0;
}

*/

//习题1-4 正弦和余弦（sincos）
//输入正整数n（n<360）,输出n度的正弦，余弦函数值。提示：使用数学函数。
/*
int main()
{
    double const PI = 3.14159265;
    int n;
    double val_1, val_2;

    scanf("%d",&n);
    val_1 = sin((double)n*PI/180.0);
    val_2 = cos((double)n*PI/180.0);
    printf("%lf,%lf\n",val_1,val_2);
    return 0;
}
*/
//习题1-5 距离（distance）
//输入4个浮点数x1,x2,y1,y2,输出平面坐标系中点（x1,y1）到点（x2，y2）的距离。
/*
int main()
{
    double x1, x2, y1, y2;
    double dist;
    scanf("%lf%lf%lf%lf",&x1,&x2,&y1,&y2);
    dist = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("%lf\n",dist);
    return 0;
}
*/
//习题1-6 偶数（odd）
//输入一个整数，判断它是否为偶数。如果是输出“yes”。如果不是输出“no”。提示：多种判断方法。
/*
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}
*/
//习题1-7 打折（discount）
//一件衣服95元，若消费满300元，可打八五折。输入购买衣服的件数，输入需要支付的金额（单位：元）。保留两位小数。
/*
int main()
{
    int n;
    scanf("%d",&n);

    if(n>3)
        printf("%.3lf",(double)n*95*0.85);
    else
        printf("%.3lf",(double)n*95);
    return 0;
}
*/
//习题1-8 绝对值（abs）
//输入一个浮点数，输入它的绝对值，保留两位小数。



//习题1-9 三角形（triangle）
//输出三角形三边长度值（均为正整数），判断他是否能为直角三角形的三个边长。 如果可以，则输出”yes“，如果不可以则输出”no“。 如果根本无法构成三角形，这输入”not a triangle“。

//习题1-10 年份（year）
//输入年份，判断是否为闰年。如果是，则输出”yes“，否则输出”no“。提示：简单判断除以4的余数是不够的。


//习题2-1 位数（digit）
//输入一个不超过10e9的正整数，输出它的位数。例如12735的位数是5。请不要使用任何数学函数，只用四则运算和循环语句实现。
/*
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    int number;
    scanf("%d",&number);
    if(number<1000000000&&number>=100000000)
        printf("9\n");
    else if(number<100000000&&number>=10000000)
        printf("8\n");
    else if(number<10000000&&number>=1000000)
        printf("7\n");
    else if(number<1000000&&number>=100000)
        printf("6\n");
    else if(number<100000&&number>=10000)
        printf("5\n");
    else if(number<10000&&number>=1000)
        printf("4\n");
    else if(number<1000&&number>=100)
        printf("3\n");
    else if(number<100&&number>=10)
        printf("2\n");
    else if(number<10&&number>=1)
        printf("1\n");
    return 0;
}


int main()
{
    FILE *fin, *fout;
    fin = fopen("in.txt","rb");
    fout = fopen("out.txt","wb");

    int number;
    fscanf(fin, "%d",&number);
    if(number<1000000000&&number>=100000000)
        fprintf(fout,"9\n");
    else if(number<100000000&&number>=10000000)
        fprintf(fout,"8\n");
    else if(number<10000000&&number>=1000000)
        fprintf(fout,"7\n");
    else if(number<1000000&&number>=100000)
        fprintf(fout,"6\n");
    else if(number<100000&&number>=10000)
        fprintf(fout,"5\n");
    else if(number<10000&&number>=1000)
        fprintf(fout,"4\n");
    else if(number<1000&&number>=100)
        fprintf(fout,"3\n");
    else if(number<100&&number>=10)
        fprintf(fout,"2\n");
    else if(number<10&&number>=1)
        fprintf(fout,"1\n");

    fclose(fin);
    fclose(fout);
    return 0;
}

int main()
{
    int number = 0,count = 0;
    scanf("%d",&number);

    while(number!=0)
    {
        number=number/10;
        count++;
    }
    printf("%d\n",count);
}
*/

/*
*/
//习题2-2 水仙花数
//输出100到999中的所有水仙花数。若三位数ABC满足ABC=A^3+B^3+C^3,这称其为水仙花数。如153=1^3+5^3+3^3.
/*
int main()
{
    int a = 0, b = 0, c = 0;
    freopen("out.txt","w",stdout);

    int i,j;
    for(i=100;i<=999;i++)
    {
        a=i/100;
        b=i/10%10;
        c=i%10;
        if(a*a*a+b*b*b+c*c*c==i)
            printf("%-5d",i);
    }
    return 0;
}


*/
//习题2-3韩信点兵
//相传韩信才智过人，从不直接清点自己军队的人数，只要让士兵先后以三人一排，五人一排，七人一排的变换队形，而他每次只掠一眼队伍的排尾就知道总人数了。
//输入3个非负整数a,b,c，表示每种队形排尾的人数，（a<3,b<5,c<7)，输出总人数的最小值（或报告无）。已知总人数不小于10，不大于100。

/*
int main()
{
    freopen("in.txt","r",stdin);

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    int i=0,k=0;
    for(i=10;i<=100;i++)
    {
        if(i%3==a&&i%5==b&&i%7==c)
            k=i;
    }
    if(k==0)
        printf("No answer\n");
    else
        printf("%d\n",k);

    return 0;
}

*/

//习题2-4 倒三角形
//输入正整数，n<=20.输出一个n层的倒三角形。
/*
int main()
{
    FILE *fin, *fout;
    fin=fopen("in.txt","r");
    fout=fopen("out.out","w");

    int n,i,j;
    fscanf(fin,"%d",&n);

    for(i=2*n-1;i>=1;i=i-2)
    {
        for(j=(2*n-i-1)/2;j>0;j--)
        {
            fprintf(fout," ");
        }

        for(j=i;j>0;j--)
        {
            fprintf(fout,"#");
        }

        fprintf(fout,"\n");

    }

    fclose(fin);
    fclose(fout);

    return 0;
}


int main()
{
    FILE *fin, *fout;
    fin=fopen("in.txt","rb");
  //  fout=fopen("out.txt","wb");

    int n,i,j;
    fscanf(fin,"%d",&n);

    for(i=2*n-1;i>=1;i=i-2)
    {
        for(j=(2*n-i-1)/2;j>0;j--)
        {
            printf(" ");
        }

        for(j=i;j>0;j--)
        {
            printf("#");
        }
        printf("\n");

    }

    fclose(fin);
    //fclose(fout);

    return 0;
}*/


//习题2-5 统计
//输入一个正整数n，然后读取n个正整数a1,a2,a3....，最后再读取一个正整数m，统计a1,a2,a3..中有多少个整数值小于m。如果重定向和fopen都可使用，那个比价方便？
//解答： fopen方便，因为输入输出流重定向到某个指定文件后就不可更改了，而fopen可以支持从多个文件读入或和标准输入输出同时使用。
/*
int main ()
{
    FILE *fin, *fout;
    fin=fopen("in.txt","r");
    fout=fopen("out.txt","w+");

    int n, a, m, i;

    int cal=0;
    scanf("%d",&n); //手动输入n


    for(i=0;i<n;i++)
    {
        fscanf(fin,"%d",&a);  //文件中读入n个整数
        fprintf(fout,"%-2d",a); //把n个整数记录在out.txt中
    }

    scanf("%d",&m);  //手动输入m
    for(i=0;i<n;i++)
    {
        fscanf(fout,"%d",&a); //从out.txt中读取这m个数
        if(m>a)
            cal++;
    }

    printf("%d\n",cal);

    fclose(fin);
    fclose(fout);
    return 0;

}
*/

//习题2-8 子序列的和（subquence）
//输入两个正整数，n<m<10e6, 输出1/n*n+1/(n+1)*(n+1)+....+1/m*m,保留5位小数。例如n=2,m=4时的答案是0.42361； n=65536，m=655360时的答案是0.00001。 注意本题有陷阱。


/*
int main()
{
    int n = 0, m = 0;
    double sum = 0;

    FILE * fout;
    fout = fopen("out.txt","w");

    scanf("%d %d",&n,&m);

    int i = 0;
    double k = 0;
    for(i=n;i<=m;i++)
    {
        k = 1/(double)i;
        sum = sum + k * k;
       // sum = sum + 1/(double)(i*i);   // 当分母太大时，分数值无穷小会超出浮点数的表示范围，会溢出，
    }

    printf("%.5llf\n", sum);
    //fprintf(fout, "%.5llf\n", sum);
    return 0;
}

*/

//习题2-9 分数化小数（decimal）
//输入正整数a,b,c,输出a/b的小数形式，精确到小数点后c位。a,b<=10e6,c<=100。例a=1,b=6,c=4时应输出0.1667。

/*
int main()
{
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    double x=(double)a/(double)b;
    int k;

    k = c ;
    while(k--)
        x = 10 * x;

    x = floor(x+0.5); //手动四舍五入

    k = c;
    while(k--)
        x = x/10;

    printf("%.*lf\n",c,x);

    return 0;
}
*/

//习题2-10 排列（permutation）
//用1,2,3，....，9 组成3个三位数abc，def和ghi，每个数字恰好使用一次，要求abc：def：ghi=1:2:3。输入所有解，不必太动脑筋。

//思路1：三个三位数大小成1：2：3，可以枚举。
//若第一个数范围100~199，则第二个数范围200~398，第三个数范围在300~597；三位数百位的可能有一下情况：1**:2**:3**、1**:2**:4**、1**:3**:5**
//若第一个数范围200~299，则第二个数范围400~598，第三个数范围在600~897；三位数百位的可能有一下情况：2**:4**:6**、2**:4**:7**、2**:5**:7**、2**:5**:8**
//若第一个数范围300~333，则第二个数范围600~666，第三个数范围在900~999；三位数百位的可能有一下情况：3**:6**:9**
//然后既不会了

//思路二： 取每一位数，让他们是否相等，全部相等便输出
/*
int main()
{
    int a, b, c;
    int num = 0;
    int n[10];
    int i,j;
    int flag = 0;

    for(num=123;num<=333;num++)
    {
        a = num;
        b = 2*num;
        c = 3*num;

        n[0] = a/100;
        n[1] = a/10%10;
        n[2] = a%10;
        n[3] = b/100;
        n[4] = b/10%10;
        n[5] = b%10;
        n[6] = c/100;
        n[7] = c/10%10;
        n[8] = c%10;

 //       for(i=0;i<9;i++)
 //           printf("%-3d",n[i]);
 //       printf("\n");

        for(i=0;i<9;i++)  //比较9个数是否互不相等
        {
            flag = 0;

            if(n[i]==0)
                flag = 1;  //去除0的情况
            for(j=i+1;j<9;j++)
            {
                if(n[i]==n[j])
                    flag = 1;
            }
            if(flag==1)
                break;
        }

        if(i==9&&j==9)
            printf("%d %d %d\n",a,b,c);
    }
    return 0;
}

*/






















