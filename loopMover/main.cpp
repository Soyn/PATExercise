#include <iostream>

using namespace std;
/*******
    将数组的元素循环右移
    Ex：
        input：
        6 2
        1 2 3 4 5 6(array)

        output:
        5 6 1 2 3 4

********/

void ElementMove(int Size, int num)
{
    int a[Size],i,j;
    for(i = 0; i < Size; ++i)
        cin >> a[i];

    for(i = 0; i< num; ++i){
        int temp = a[i];
        for(j = 0; j< Size - 1; ++j){
            if(temp != a[i]){
                int temp1 = a[ j + 1];
                a[ j + 1] = temp;
                temp = temp1;
            }else{
             temp = a[ j + 1];
             a[j + 1] = a[j];
            }
        }
        a[0] = temp;
    }
    for(i = 0; i < Size; ++i){
        if ( i != Size - 1)
            cout << a[i] << ' ';
            else
                cout << a[i];

            }
}
int main()
{
    int Size,num;
    cin >> Size >> num;
    ElementMove(Size, num);
    return 0;
}
