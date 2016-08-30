#include<iostream>

using namespace std;


class CRtTangle{
    private:
        int x, y;
    public:
        CRtTangle(int, int);
        CRtTangle() {};
        ~CRtTangle();
        void set_value(int, int);
        int area() { return x * y; };
        CRtTangle operator + (CRtTangle&);
};

CRtTangle CRtTangle::operator+(CRtTangle& param)
{
    this->x = x + param.x;
    this->y = y + param.y;

    return *this;
    
}

CRtTangle::CRtTangle(int a, int b)
{
//    x = new int;
//    y = new int;
    x = a;
    y = b;
}

CRtTangle::~CRtTangle()
{
    //delete x;
    //delete y;
}

void CRtTangle::set_value(int a, int b)
{
    x = a;
    y = b;
}


int main()
{
    CRtTangle rect_a(3, 4);
    CRtTangle rect_b(5, 6);
    CRtTangle temp;


//    rect_a.set_value(3, 4);
//    rect_b.set_value(4, 5);

    temp = rect_a.operator+(rect_b);

    cout << rect_a.area() << endl;
    cout << rect_b.area() << endl;
    cout << temp.area() << endl;

    return 0;
}
