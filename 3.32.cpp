/*************************************************************************
	> File Name: 3.32.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年05月21日 星期日 12时06分38秒
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int i;
    vector<int> a(10,0);
    vector<int> b(10,0);
    for (i = 0; i < 10; i++) {
        a[i] = i;
    }
    for (auto i: a) {
        cout << i << ':' << a[i] << ' ';
    }
    b = a; 
    for (i = 0; i < 10; i++) {
        cout << i << ':' << b[i] << ' ';
    }
    return 0;
}
