#include <iostream>
#include <math.h>
using namespace std;
/*
    ���� dn Ϊ��dn = pn+1 - pn������ pi �ǵ�i��������
    ��Ȼ�� d1=1 �Ҷ���n>1�� dn ��ż����
    �������Բ��롱��Ϊ�����������������Ҳ�Ϊ2������
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
