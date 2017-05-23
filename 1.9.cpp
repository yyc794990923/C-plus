/*************************************************************************
	> File Name: 1.9.cpp
	> Author: yyc
	> Mail: 794990923@qq.com
	> Created Time: 2016年11月15日 星期二 16时23分51秒
 ************************************************************************/

#include<iostream>

int main()
{
    int sum = 0, val = 50;
    while (val >= 50 && val <= 100)
    {
        sum += val;
        ++val;
    }
    std::cout << "sum of 50 to 100 is " << sum << std:: endl;
    return 0;
}

