/*************************************************************************
	> File Name: 3.6.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年04月19日 星期三 21时49分12秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (auto &c : s) {
        c = 'X';
    }
    cout << s << endl;
    return 0;
}
