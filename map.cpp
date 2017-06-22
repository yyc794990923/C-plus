/*************************************************************************
> File Name: map.cpp
> Author: yanyuchen
> Mail: 794990923@qq.com
> Created Time: 2017年06月22日 星期四 11时44分11秒
************************************************************************/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    string name, findname;
    int number;
    map<string, int> aaa;
    map<string, int> :: iterator i;
    while(1) {
        cin >> name;
        if (name == "noname") break;
        cin >> number;
        aaa.insert(pair<string,int>(name,number));

    }
    cin >> findname;
    i = aaa.find(findname);
    if (i != aaa.end()) {
        cout << i -> second*0.21 << endl;

    }
    else cout << "no find" << endl;
    return 0;

}

