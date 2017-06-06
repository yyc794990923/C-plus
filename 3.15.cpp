/*************************************************************************
	> File Name: 3.15.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年04月27日 星期四 17时26分59秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string a;
    vector<string> text;
    while (cin >> a) {
        text.push_back(a);
    }
    for (auto a: text) {
        cout << a << ' ';
    }
    cout << endl;
    return 0;
}
