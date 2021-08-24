#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

// 选择语言 Select language
int set_language()
{
    cout << "+----------------------------+" << endl;
    cout << "|请选择您使用的语言：        |" << endl;
    cout << "|Please select your language.|" << endl;
    cout << "|                            |" << endl;
    cout << "|输入“1”来使用中文。       |" << endl;
    cout << "|Enter 2 to use English.     |" << endl;
    cout << "+----------------------------+" << endl;
    char choose = _getch();
    system("cls");
    if (choose == '1')
    {
        return 1;
    }
    else if (choose == '2')
    {
        return 2;
    }
}

void main_menu_1()
{
    cout << "+--------------------------------------------+" << endl;
    cout << "|欢迎您使用Windows系统小工具，               |" << endl;
    cout << "|请选择您想使用的功能：                      |" << endl;
    cout << "+--------------------------------------------+" << endl;
    cout << "|（Windows系统相关）                         |" << endl;
    cout << "|1.重启Windows资源管理器                     |" << endl;
    cout << "|2.激活Windows                               |" << endl;
    cout << "|                                            |" << endl;
    cout << "|（Office2016或2019相关）                    |" << endl;
    cout << "|3.将零售版Office转换为vol版                 |" << endl;
    cout << "|4.将零售版Office转换为vol版并激活           |" << endl;
    cout << "|5.激活Office                                |" << endl;
    cout << "+--------------------------------------------+" << endl;
    cout << "|警告：                                      |" << endl;
    cout << "|请务必使用管理员身份运行此程序，            |" << endl;
    cout << "|所有的激活功能都需要开启了KMS服务的OpenWrt！|" << endl;
    cout << "+--------------------------------------------+" << endl;
}

int main()
{
    int language = set_language();
    if (language == 1)
    {
        main_menu_1();
    }
    return 0;
}