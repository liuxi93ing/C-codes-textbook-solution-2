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
/*
int main()
{
    double n;
    scanf("%lf",&n);
    printf("%.2lf\n",fabs(n));
    return 0;
}

*/

//习题1-9 三角形（triangle）
//输出三角形三边长度值（均为正整数），判断他是否能为直角三角形的三个边长。 如果可以，则输出”yes“，如果不可以则输出”no“。 如果根本无法构成三角形，这输入”not a triangle“。
/*
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b&&a>=c)
        if(a>=b+c)
            printf("not a triangle");
        else if(a*a==b*b+c*c)
            printf("yes");
        else
            printf("no");
    else if(b>=a&&b>=c)
        if(b>=a+c)
            printf("not a triangle");
        else if(b*b==a*a+c*c)
            printf("yes");
        else
            printf("no");
    else if(c>=a&&c>=b)
        if(c>=b+a)
            printf("not a triangle");
        else if(c*c==b*b+a*a)
            printf("yes");
        else
            printf("no");
    return 0;
}
*/

//习题1-10 年份（year）
//输入年份，判断是否为闰年。如果是，则输出”yes“，否则输出”no“。提示：简单判断除以4的余数是不够的。

/*
int main()
{
    int n;
    scanf("%d",&n);

    if(n%400==0)
        printf("yes");
    else if(n%100==0)
        printf("no");
    else if(n%4==0)
        printf("yes");
    else
        printf("no");
    return 0;
}

*/






















