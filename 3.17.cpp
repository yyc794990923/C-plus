/*************************************************************************
	> File Name: 3.17.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年04月27日 星期四 21时14分24秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string word;
    vector<string> text;
    while (cin >> word) {
        text.push_back(word);
    }
    for (auto c: text) {
        for (auto &s: c) {
            s = toupper(s);
        }
        cout << c << endl;
    }
    return 0;
}
