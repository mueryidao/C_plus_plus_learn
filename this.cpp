#include<iostream>

using namespace std;

class CDummy
{
    public:
        int isitme(CDummy& param);
};

//&引用
int CDummy::isitme(CDummy& param)
{
    if(&param == this) return 1;
    else return 0;
}

int main()
{
    CDummy a;
    CDummy *b;

    b = &a;
    if(b->isitme(a)) cout << "b is a." << endl;

    return 0;
}
