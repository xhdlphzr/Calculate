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

    int a = 0, b = 0;
    cin >> a >> b;

    Calculate ans; ///< create a Calculate object
    cout << ans.add(a, b) << endl;

    return 0;
}