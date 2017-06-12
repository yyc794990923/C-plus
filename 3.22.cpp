/*************************************************************************
	> File Name: 3.22.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年04月27日 星期四 22时33分14秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    string text{"abcdefghijk lmnopq "};
    for (auto it = text.begin(); it != text.end() && !isspace(*it); ++it) {
        *it = toupper((*it));
        cout << *it;
    }
    return 0;
}
