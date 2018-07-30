
#include<iostream>

struct Person {
    std::string person_name;
    std::string person_addr;

    std::string get_name(const Person&) const { return person_name; }
    std::string get_addr(const Person&) const { return person_addr; }
};

std::istream &read(std::istream&, Person&);
std::ostream &print(std::ostream&, const Person&);

std::istream &read(std::istream &is, Person &per)
{
    is >> per.person_name >> per.person_addr;
    return is;
}

std::ostream &print(std::ostream &os, const Person &per)
{
    os << per.person_name << " " << per.person_addr << std::endl;
    return os;
}

int main()
{
    Person test;
    while (read(std::cin, test))
        print(std::cout, test);

    return 0;
}

