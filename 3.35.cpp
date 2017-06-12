/*************************************************************************
	> File Name: 3.35.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年05月21日 星期日 15时06分58秒
 ************************************************************************/

#include<iostream>
#include<iterator>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5};
    int* beg;
    int* last = end(a);

    for (beg = begin(a); beg != last; beg++) {
        *beg = 0;
    }
    for (beg = begin(a); beg != last; beg++) {
        cout << *beg << ' ';
    }
    cout << endl;
    return 0;
}
