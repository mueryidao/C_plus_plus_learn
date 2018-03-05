/*
 * =====================================================================================
 *
 *       Filename:  oop.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/26/2018 09:33:38 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Thomas Li (Thomas), thomas.li@alcatel-lucnet.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include<iostream>

class Quote {
    public:
        Quote() = default;
        Quote(const std::string &book, double sales_price):
            bookNo(book), price(sales_price) { }

        std::string isbn() const { return bookNo };
        virtual double net_price(std::size_t n) const
        { return n * price };

        virtual ~Quote() = default;

    private:
        std::string bookNo;
    protected:
        double price = 0.0;
};

class Bulk_quote : public Quote {
    public:
        double net_price(std::size_t) const override;
};

double print_total(ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);
    os << "ISBN" << item.isbn()
        << "# sold: " << n << "total due: " << ret << endl;

    return ret;
}


