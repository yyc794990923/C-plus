/*************************************************************************
	> File Name: 3.20.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年04月27日 星期四 21时35分38秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a, i;
    vector<int> text;
    while (cin >> a) {
        text.push_back(a);
    }
    //输出相邻两个数字之和
    
    for (i = 0; i < text.size()-1; i++) {
        cout << text[i] +text[i+1];
    }
    /*
    for (i = 0; i < text.size()/2; i++) {
        cout << text[i] + text[text.size()-i-1];
    }
    */
    return 0;
}
