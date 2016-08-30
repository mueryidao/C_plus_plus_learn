
#include<iostream>

using namespace std;

class CSquare;

class CRectangle{
    int width, height;
    public:
        int area(void) { return (width * height);}
        void convert(CSquare temp);
};

class CSquare{
    int side;
    public:
        void setvalue(int a) { side=a; }
        friend class CRectangle;
};

void CRectangle::convert(CSquare temp)
{
    width = temp.side;
    height = temp.side;
}

int main()
{
    CRectangle rect;
    CSquare sqr;
    sqr.setvalue(5);
    rect.convert(sqr);

    cout << rect.area() << endl;

    return 0;

}
