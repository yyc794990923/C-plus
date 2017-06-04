/*************************************************************************
	> File Name: 3.7.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年04月19日 星期三 22时02分04秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (char &c : s) {
        c = 'X';
    }
    cout << s << endl;
    return 0;
}
