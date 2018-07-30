/*
 * =====================================================================================
 *
 *       Filename:  6.2_function.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/06/2018 09:00:06 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Thomas Li (Thomas), thomas.li@alcatel-lucnet.com
 *   Organization:  
 *
 * =====================================================================================
 */


string::size_type find_char(const string &s, char c, string::size_type &occur)
{
    auto ret = s.size();
    occur = 0;

    for(decltype(ret) i = 0; i != s.size(); i++) {
        if(s[i] == c) {
            if(ret == s.size())
                ret=i;
            ++occur;
        }
    }
}
