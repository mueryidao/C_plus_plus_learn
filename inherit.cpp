

#include<iostream>

using namespace std;

class CPolygon{
    protected:
        int width, height;
    public:
        void set_values(int a, int b) { width = a; height = b; }
};

class COutput{
    public:
        void output(int a) {cout << a << endl;}
};

class CRectangle: public CPolygon, public COutput{
    public:
        int area(void) { return (width * height); }
};

class CTriangle: public CPolygon, public COutput{
    public:
        int area(void) { return (width * height / 2); }
};


int main()
{
    CRectangle rect;
    CTriangle trgl;

    rect.set_values(5, 4);
    trgl.set_values(2, 10);

    rect.output(rect.area());
    rect.output(trgl.area());

//    cout << rect.area() << endl;
//    cout << trgl.area() << endl;

    return 0;
}
