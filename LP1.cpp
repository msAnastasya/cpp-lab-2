#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
long long d_fact(int k)
{
    long long res = 1;
    while (k > 1)
    {
        res = res*k;
        k = k-2;
    }
    return res;
}

 double EvenS(double x)  /* сумма выражений с четными делителями */
{
    int i;
    double res = 0;
    double p;
    for (int k = 0; k <=10; k++)
    {
        i = 2*k;
        p = (pow(x,i))/(d_fact(i));
        res = res + p;
    }
    return res;
}

 double OddS(double x)  /* сумма выражений с нечетными делителями */
{
    int i;
    double res = 0;
    double p;
    for (int k = 0; k <=10; k++)
    {
        i = 2*k +1;
        p = (pow(x,i))/(d_fact(i));
        res = res + p;
    }
    return res;

}

double t(double x)  /* функция t(x) */
{
    double res;
    res = (OddS(x))/(EvenS(x));
    return res;
}

int main()
{
    int y;
    cin >> y;
    double res;
    res = (7*t(0.25)+2*t(1+y))/(6-t(y*y-1));
    cout << res << endl;
    return 0;
}

