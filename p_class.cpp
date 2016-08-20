/*
 * =====================================================================================
 *
 *       Filename:  p_class.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/11/2016 07:31:34 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Thomas Li (Thomas), thomas.li@alcatel-lucnet.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include<iostream>

using namespace std;

class CRecTangle{

    int width, height;
    public:
    void set_values(int, int);
    int area(void) { return width * height; }
};

void CRecTangle::set_values(int a, int b)
{
    width = a;
    height = b;
}

int main()
{
    CRecTangle a, *b, *c;
    CRecTangle *d = new CRecTangle[2];

    b = new CRecTangle;
    c = &a;
    a.set_values(1,2);
    b->set_values(3,4);
    d->set_values(5,6);
    d[1].set_values(7,8);

    cout << "a area: " << a.area() << endl;
    cout << "*b area: " << b->area() << endl;
    cout << "*c area: " << c->area() << endl;
    cout << "d[0] area: " << d[0].area() << endl;
    cout << "d[1] area: " << d[1].area() << endl;

    return 0;
}

