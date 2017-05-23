/*************************************************************************
	> File Name: 1.10.cpp
	> Author: yyc
	> Mail: 794990923@qq.com
	> Created Time: 2016年11月15日 星期二 16时28分49秒
 ************************************************************************/

#include<iostream>

int main()
{
    int val = 10;
    while (val <= 10 && val >= 0)
    {
        std:: cout << val << std:: endl;
        --val;
    }
    return 0;
}

