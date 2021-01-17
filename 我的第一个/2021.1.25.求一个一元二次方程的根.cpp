# include <stdio.h>
# include <math.h>
int main(void)
{
    double a, b, c, d, e, t;
    printf("请输入一元二次方程的三个系数:\n");
    scanf("%lf%lf%lF", &a, &b, &c);
    if (fabs(a - 0) <= 1e-6)
    {
        printf("输入有误，程序结束运行");
        return 0;
    }
    d = (b * b )- 4 * a * c;
    e = (-b + sqrt(d)) / (2 * a);
    t = (-b - sqrt(d)) / (2 * a);
    if (d < 0)
        printf("该方程没有解");
    else if (fabs(d) <= 1e-6)
        printf("该方程有一个解=%lf\n", -b / (2 * a));
    else
        printf("该方程有两个解为%lf,%lf\n", e, t);
    return 0;
}