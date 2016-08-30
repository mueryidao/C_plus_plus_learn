

#include<iostream>

using namespace std;

class CPolygon{
    protected:
        int width, height;
    public:
        void set_values(int a, int b) { width = a; height = b; }
        virtual int area(void) =0;
        void print(void) {
            cout << this->area() << endl;
        }
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

    CPolygon *ppoly1 = &rect;
    CPolygon *ppoly2 = &trgl;

    ppoly1->set_values(4,5);
    ppoly2->set_values(2,13);

    cout << ppoly1->area() << endl;
    cout << ppoly2->area() << endl;
    rect.output(ppoly1->area());
    trgl.output(ppoly2->area());
    
    ppoly1->print();
    ppoly2->print();
        
    return 0;
}
