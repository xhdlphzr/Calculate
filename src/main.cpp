/**
 * @file main.cpp
 * @author xhdlphzr xhdlphzr@outlook.com
 * @brief main function
 * @version 0.1.0
 */

#include <iostream>
#include "..\\include\calculate.h"

int main()
{
    /// preprocess
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios;

    ios::sync_with_stdio(false);

    cout << "Welcome to the calculator!\n";
    cout << "欢迎来到计算器！\n\n";

    Calculate cal;

    /// input
    while (true)
    {
        char op;
        cin >> cal.a >> op >> cal.b;

        if (cal.a == 0 && op == '/' && cal.b == 0)
        {
            cout << "bye bye!\n";
            cout << "再见！\n";
            break;
        }

        if (op == '/' && cal.b == 0)
        {
            cout << "Error: division by zero\n";
            cout << "错误：除数不能为零\n";
            continue;
        }

        switch (op)
        {
        case '+':
            cout << cal.a << " + " << cal.b << " = " << cal.add() << endl;
            break;

        case '-':
            cout << cal.a << " - " << cal.b << " = " << cal.sub() << endl;
            break;

        case '*':
            cout << cal.a << " * " << cal.b << " = " << cal.mul() << endl;
            break;

        case '/':
            cout << cal.a << " / " << cal.b << " = " << cal.div() << endl;
            break;
        }
    }

    return 0;
}