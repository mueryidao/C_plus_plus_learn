/*
 * =====================================================================================
 *
 *       Filename:  bootstore.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/06/2018 11:55:13 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Thomas Li (Thomas), thomas.li@alcatel-lucnet.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include <iostream>
#include "Sales_item.h"

struct Sales_data {
    std::string bookNo;
    //unsigned units_sold = 0;
    //double revenue = 0.0;
    
    unsigned units_sold{0};
    double revenue{0.0};
};

int main()
{
    Sales_item total;

    if (std::cin >> total) {
        Sales_item trans;

        while(std::cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans;
            } else {
                std::cout << total << std::endl;
                total = trans;
            }
        }

        std::cout << total << std::endl;
    } else {
        std::cerr << "No data?" << std::endl;
        return -1;
    }

    return 0;
}
