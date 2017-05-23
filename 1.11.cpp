/*************************************************************************
	> File Name: 1.11.cpp
	> Author: yyc
	> Mail: 794990923@qq.com
	> Created Time: 2016年11月15日 星期二 16时34分05秒
 ************************************************************************/

#include<iostream>

int main()
{
    int v1, v2, i, j;
    std:: cout << "enter two numbers" << std:: endl;
    std:: cin >> v1 >> v2;
    if (v1 > v2) {
        i = v2;
        j = v1;
    }
    else if (v2 > v1) {
        i = v1;
        j = v2;
    }
    else {
        std::cout << "error" << std:: endl;
    }
    while (i <= j)
    {
        std:: cout << i << std:: endl;
        i++;
    }
    return 0;
}

