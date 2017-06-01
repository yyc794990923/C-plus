/*************************************************************************
	> File Name: 2.17.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年03月22日 星期三 19时43分42秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int i, &ri = i;
    i = 5;
    ri = 10;
    cout << i << ' ' << ri << endl;
    return 0;
}
