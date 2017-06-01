/*************************************************************************
	> File Name: 3.4.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年04月19日 星期三 21时25分01秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

//比较两个字符串是否相等，输出较大的那个字符串
/*
int main()
{
    string a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "a=b" << endl;
    }
    else if(a > b) {
        cout << a << endl;
    }
    else {
        cout << b << endl;
    }
    return 0;
}
*/

//比较两个字符串个数是否相等，输出个数最大的那个
int main()
{
    string a, b;
    cin >> a >> b;
    if(a.size() == b.size()) {
        cout << "a=b" << endl;
    }
    else if(a.size() > b.size()) {
        cout << a.size() << endl;
    }
    else {
        cout << b.size() << endl;
    }
    return 0;
}
