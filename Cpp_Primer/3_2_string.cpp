/*
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/07/2018 12:11:18 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Thomas Li (Thomas), thomas.li@alcatel-lucnet.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include <iostream>
#include <string>

using namespace std;

int main()
{
#if 0
    int v1=0, v2=0;
    std::cin >> v1 >> v2;

    std::cout << "The sum of " << v1\
            << " and " << v2\
            << " is " << v1+v2 << std::endl;

    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */";
    std::cout << /* "*/" /* "/*" */;
#endif

    string line;

    while(getline(cin, line)) {
        if (line.size() > 80)
            std::cout << line << std::endl;
    }
    return 0;
}

