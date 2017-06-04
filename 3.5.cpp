/*************************************************************************
	> File Name: 3.5.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年04月19日 星期三 21时36分02秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

//将多个字符串连接在一起
/*
int main()
{
    string a, b, c, d;
    cin >> a >> b >> c;
    d = a+b+c;
    cout << d << endl;
    return 0;
}
*/

//用空格把多个字符串分隔
int main()
{
    string a, b, c, d;
    cin >> a >> b >> c;
    d = a+' '+b+' '+c;
    cout << d << endl;
    return 0;
}
