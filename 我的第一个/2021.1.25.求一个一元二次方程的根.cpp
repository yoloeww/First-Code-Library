# include <stdio.h>
# include <math.h>
int main(void)
{
    double a, b, c, d, e, t;
    printf("������һԪ���η��̵�����ϵ��:\n");
    scanf("%lf%lf%lF", &a, &b, &c);
    if (fabs(a - 0) <= 1e-6)
    {
        printf("�������󣬳����������");
        return 0;
    }
    d = (b * b )- 4 * a * c;
    e = (-b + sqrt(d)) / (2 * a);
    t = (-b - sqrt(d)) / (2 * a);
    if (d < 0)
        printf("�÷���û�н�");
    else if (fabs(d) <= 1e-6)
        printf("�÷�����һ����=%lf\n", -b / (2 * a));
    else
        printf("�÷�����������Ϊ%lf,%lf\n", e, t);
    return 0;
}