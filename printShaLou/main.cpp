#include <iostream>
#include <math.h>
/*
    输入一个数字，利用尽可能多的数字输出沙漏的形状,每一行都为奇数

    EX1： num = 17
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
    //获得沙漏的列数和行数
    int column = num / 2;
    while(1){
    if (column % 2 ){
        // pow((column + 1), 2) * 0.5 - 1为拼成最大的沙漏数
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
