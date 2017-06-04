/*************************************************************************
	> File Name: 3.8.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年04月19日 星期三 22时20分03秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (decltype(s.size()) index = 0; index != s.size(); ++index) {
        s[index] = 'X';
    }
    cout << s << endl;
    return 0;
}
