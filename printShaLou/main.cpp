#include <iostream>
#include <math.h>
/*
    ����һ�����֣����þ����ܶ���������ɳ©����״,ÿһ�ж�Ϊ����

    EX1�� num = 17
    *****
     ***
      *
     ***
    *****
    EX2: num = 19
    *****
     ***
      *
     ***
    *****
    2
    Date:2015.5.10
*/

int myAbs(int a)
{
    if(a < 0)
        return -a;
    else
        return a;
}


using namespace std;
int getColumn(int num)
{
    //���ɳ©������������
    int column = num / 2;
    while(1){
    if (column % 2 ){
        // pow((column + 1), 2) * 0.5 - 1Ϊƴ������ɳ©��
        if(pow((column + 1), 2)* 0.5 - 1 <= num){return column;}
        else column -= 2;
    }
    else --column;
    }
}
int main()
{
    int num;
    char chr;
    cin >> num >> chr;
    int column = getColumn(num);
    int row, i , column1;
    row = column1 = column;

    for(i = 0; i <= row;)
    {
        if(column - 2 * i != -1){
            int tempi = (row - column1) / 2;
            while(tempi){
                cout << ' ';
                --tempi;
                    }

            int tempj = column1;

            while(tempj > 0){
                cout << chr;
                tempj--;
                }
                cout << '\n';
                }
            column1 = myAbs(column - 2 *(++i) );
    }
    if(num == 1) cout << chr;
    if(num > 1 &&num > pow((column + 1), 2)* 0.5 - 1)
        cout << num - pow((column + 1), 2)* 0.5 + 1;
    return 0;
}
