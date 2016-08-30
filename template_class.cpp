

#include<iostream>

using namespace std;

template <class T>
class pair{
    T values[2];
    public:
        pair(T first, T second) { values[0] = first; values[1] =second; }
        T Getmax();
};

template <class T>
T pair::Getmax()
{
    T retval;
    retval = values[0]>values[1]?values[0]:values[1];
    return retval;
}

int main()
{
    pair <int> myobject_i(23, 54);
    pair <float> myobject_f(2.54, 6.23);

    cout << myobject_i.values[0] << endl;
    cout << myobject_f.values[1] << endl;
    cout << myobject_i.Getmax() << endl;

    return 0;
}

