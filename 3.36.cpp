/*************************************************************************
	> File Name: 3.36.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年05月21日 星期日 15时23分58秒
 ************************************************************************/

#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

int main()
{
    /*
    int i;
    int a[] = {1,2,3,4,5,6};
    int b[] = {1,2,3,4,5,6};

    for (i = 0; i < 6; i++) {
        if (a[i] != b[i]) {
            cout << "数组不相等" << endl;
            return 0;
        }
    }
    cout << "数组相等" << endl;
    return 0;
    */
    
    vector<int> a{1,2,3,4,5,6};
    vector<int> b{1,2,3,4,5};
    if (a != b) {
        cout << "不相等" << endl;
        return 0;
    }
    else cout << "相等" << endl;
    return 0;

}
