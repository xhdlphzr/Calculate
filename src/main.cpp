/**
 * @file main.cpp
 * @author xhdlphzr xhdlphzr@outlook.com
 * @brief main function
 * @version 0.1
 */

#include <iostream>
#include "calculate.h" ///< include/calculate.h

int main()
{
    /// preprocess
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios;

    ios::sync_with_stdio(false);

    Calculate cal;

    /// input
    while (true)
    {
        char op;
        cin >> cal.a >> op >> cal.b;

        if (cal.a == 0 && op == '/' && cal.b == 0)
        {
            break;
        }

        if (op == '/' && cal.b == 0)
        {
            continue;
        }

        switch (op)
        {
        case '+':
            cout << cal.add() << endl;
            break;

        case '-':
            cout << cal.sub() << endl;
            break;

        case '*':
            cout << cal.mul() << endl;
            break;

        case '/':
            cout << cal.div() << endl;
            break;
        }
    }

    return 0;
}