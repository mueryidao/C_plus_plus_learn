/*
 * =====================================================================================
 *
 *       Filename:  15.2_class.cpp
 *
 *    Description:  Class and Derivation Calss
 *
 *        Version:  1.0
 *        Created:  07/05/2018 03:49:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Thomas Li (Thomas), thomas.li@alcatel-lucnet.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include<iostream>

using namesapce std;

class Quote {
    public:
        Quote() = default;
        Quote(const std::string &book, double sales_price) : bookNo(book), price(sales_price) {}

        std::string isbn() const { return bookNo; }

        virtual double net_price(std::size_t n) const { return n * price; }

        virtual ~Quote() = default;

    private:
        std::string bookNo;
    protected:
        double price = 0.0;
};

class Bulk_quote : public Quote{
    public:
        Bulk_quote() = default;
        Bulk_quote(const std::string&, double, std::size_t, double);

        double net_price(std::size_t) const override;
    private:
        std::size_t min_qty = 0;
        double discount = 0.0;

};

double Bulk_quote::net_price(size_t cnt) const
{
    if (cnt >= min_qty)
        return cnt*(1-discount)*price;
    else
        return cnt*price;
}
