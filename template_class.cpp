

#include<iostream>

using namespace std;

template <class T>
class CPair{
    T values[2];
    public:
        CPair(T first, T second) { values[0] = first; values[1] =second; }
        T Getmax();
};

template <class T>
T CPair<T>::Getmax()
{
    T retval;
    retval = values[0]>values[1]?values[0]:values[1];
    return retval;
}

int main()
{
    CPair <int> myobject(23, 54);

    cout << myobject.Getmax() << endl;

    return 0;
}

