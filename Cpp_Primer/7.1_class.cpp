
#include<iostream>
struct Sales_data {
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

using namespace std;

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

istream &read(istream &is, Sales_data &item)
{
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
        << item.revenue << " " << item.avg_price();
    return os;
}

double Sales_data::avg_price() const
{
    if(units_sold)
        return revenue/units_sold;
    else
        return 0;
}

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

int main()
{
    Sales_data total;
    if(read(cin, total)) {
        Sales_data trans;
        while(read(cin, trans)) {
            if(total.isbn() == trans.isbn())
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
}
