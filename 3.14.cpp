/*************************************************************************
	> File Name: 3.14.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年04月27日 星期四 17时04分08秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int x;
    vector<int> text;
    while (cin >> x) {
        text.push_back(x);
    }
    for (auto x: text) {
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
