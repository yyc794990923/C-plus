/*************************************************************************
	> File Name: 3.31.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年05月21日 星期日 11时57分15秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int a[10], b[10];
    int i;
    for (i = 0; i < 10; i++) {
        a[i] = i;
    }
    for (i = 0; i < 10; i++) {
        cout << i << ':'  << a[i] << ' ';
    }
    for (i = 0; i < 10; i++) {
        b[i] = a[i];
    }
    for (i = 0; i < 10; i++) {
        cout << i << ':' << b[i] << ' ';
    }
    cout << endl;
    return 0;
}
