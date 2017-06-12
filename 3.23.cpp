/*************************************************************************
	> File Name: 3.23.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年05月16日 星期二 20时48分28秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> cv{1,2,3,4,5,6,7,8,9,10};
    vector<int>::iterator it1;
    for(it1 = cv.begin(); it1 != cv.end(); it1++) {
        cout << (*it1)*2 << " ";
    }
    return 0;
}
