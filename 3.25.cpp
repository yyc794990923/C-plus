/*************************************************************************
	> File Name: 3.25.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年05月17日 星期三 22时22分51秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a, n;
    vector<int> grade(11,0);
    vector<int> :: iterator it;

    while (cin >> a) {
        if (a >= 0 && a <= 100) {
            n = a/10;
            it = grade.begin();
            it = it + n;
            (*it)++;
        }
    }
    for (auto i : grade) {
        cout << i << ' ';
    }
    return 0;
}
