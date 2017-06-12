/*************************************************************************
	> File Name: 3.40.cpp
	> Author: yanyuchen
	> Mail: 794990923@qq.com
	> Created Time: 2017年05月21日 星期日 16时08分58秒
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    const char *s1 = "xiyou";
    const char *s2 = "linux";
    char *s3 = (char*)malloc(strlen(s1)+strlen(s2)+1);
    strcpy(s3,s1);
    strcat(s3,s2);
    cout << s3 << endl;
    free(s3);
    return 0;
}
