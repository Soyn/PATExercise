#include <iostream>
#include <math.h>
using namespace std;
/*
    定义 dn 为：dn = pn+1 - pn，其中 pi 是第i个素数。
    显然有 d1=1 且对于n>1有 dn 是偶数。
    “素数对猜想”认为“存在无穷多对相邻且差为2的素数
    Date: 2015.10
*/
#define NOT_PRIME 0
#define IS_PRIME  1
int IsPrime(int a)
{
    int i;
    for(i = 2; i <= sqrt(a); ++i)
        if(a % i == 0) return NOT_PRIME;

    return IS_PRIME;
}

int main()
{
    int limit;
    int Count = 0;
    cin >> limit;
    while(limit--)
    {
        int temp = limit - 2;
        if(temp > 0 && IsPrime(limit) && IsPrime(temp)){
            if(temp != 1)++ Count;
            }
    }
    cout << Count;
    return 0;
}
