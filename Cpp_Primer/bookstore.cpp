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

/*
struct Sales_data {
    std::string bookNo;
    //unsigned units_sold = 0;
    //double revenue = 0.0;
    
    unsigned units_sold{0};
    double revenue{0.0};
};
*/

struct Sales_data {
    //Operation
    std::string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    double avg_price() const;

    //Data
    std::string bookNo;
    unsigned units_sold{0};
    double revenue{0.0};
};

//Non-member interface
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

double Sales_data::avg_price() const {
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}

int main()
{
#if 0
    Sales_data data1, data2;
    double price;

    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if (data1.bookNo == data2.bookNo) {
        unsigned total_sold = data1.units_sold + data2.units_sold; 
        double total_revenue = data1.revenue + data2.revenue;
        
        std::cout << data1.bookNo << " " << total_sold
            << " " << total_revenue << " ";
        if (total_sold != 0)
            std::cout << total_revenue/total_sold << std::endl; 
        else
            std::cout << "No Sales" << std::endl;
    } else {
        std::cerr << "Data must refer to the sam ISBN"
            << std::endl;
        return -1;
    }
#endif

    using namespace std;

    Sales_data total;
    if (read(cin, total)) {
        Sales_data trans;
        while(read(cin, trans)) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    } else {
        cerr << "No data?" << endl;
    }

#if 0
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

#endif
    return 0;
}
