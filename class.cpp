/*
 * =====================================================================================
 *
 *       Filename:  class.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年08月10日 21时58分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Thomas Li (Thomas), thomas.li@alcatel-lucnet.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>

using namespace std;

class CRecTangle{
    int *width, *height;

    public:
    CRecTangle();
    CRecTangle(int, int);
    ~CRecTangle();
    int area (void) {return *width * *height;}
    
};

CRecTangle::CRecTangle(){
    cout << "No parameter." << endl;
    width = new int;
    height = new int;
    *width = 5;
    *height = 5;
}

CRecTangle::CRecTangle(int a, int b){
    
    cout << "With parameter." << endl;
    width = new int;
    height = new int;
    *width = a;
    *height = b;

}

CRecTangle::~CRecTangle(){
    cout << "delete memory" << endl;
    delete width;
    delete height;
}

int main()
{
    CRecTangle rect_a(3,4);
    CRecTangle rect_b;

    cout << "rect_a area: " << rect_a.area() << endl;
    cout << "rect_b area: " << rect_b.area() << endl;

}

