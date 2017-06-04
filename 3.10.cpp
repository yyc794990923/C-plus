/*************************************************************************
	> File Name: 3.10.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年04月24日 星期一 19时38分34秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s("hello, world!");
    for(auto &c : s) {
        if (!ispunct(c)) {
            cout << c;
        }
    }
    return 0;
}
