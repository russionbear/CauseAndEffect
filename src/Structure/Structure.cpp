#include <map>
#include <string>
#include "Structure/Structure.h"
#include <time.h>

#include <iostream>

using namespace std;

void print_a()
{
    cout << "aaaaa" << endl;
}

template <typename T>
BaseDataTable<T>::BaseDataTable(/* args */)
{
}

template <typename T>
BaseDataTable<T>::~BaseDataTable()
{
    // delete data;
    // data.~map()
}

template <typename T>
T BaseDataTable<T>::operator[](int t)
{
    T rlt = {0};

    if (t == 0)
    {
        return rlt;
    }

    auto it = data.find(t);
    if (it == data.end())
    {
        return rlt;
    }
    return it->second;
}

template <typename T>
void BaseDataTable<T>::set(int t, T v)
{
    data[t] = v;
}

template class BaseDataTable<int>;
template class BaseDataTable<double>;
template class BaseDataTable<short>;

//-----------------------------------//

// BaseDataTime::BaseDataTime(/* args */)
// {

// }
BaseDataTime::BaseDataTime(long v)
{
    ticks = v;
    day_zone = v % 6;
}

BaseDataTime::~BaseDataTime()
{
}

string BaseDataTime::operator()()
{
    string s0 = "fff";
    return s0;
}
void BaseDataTime::operator=(long v)
{
    ticks = v;
    day_zone = v % 6;
    time_t t = v * 14400; 
    struct  tm *mytm = gmtime(&t);
    day = mytm->tm_mday;
}
void BaseDataTime::operator=(BaseDataTime &t)
{
    
}
BaseDataTime& BaseDataTime::operator+(long v)
{
    return *this;
}
BaseDataTime &BaseDataTime::operator-(long v)
{
    return *this;
}
BaseDataTime &BaseDataTime::operator+(BaseDataTime &t)
{
    return *this;
}
BaseDataTime &BaseDataTime::operator-(BaseDataTime &t)
{
    return *this;
}

//----------------------------------------------------------------------------------------//

unsigned int* Matrix::operator[](int r){
    return p[r];
}
Matrix::Matrix(int rows, int cols, unsigned int dft){
    rows = rows;
    cols = cols;

    p = new unsigned int *[rows];
    for(int i=0;i<rows;i++)
    {
        p[i] = new int [cols];
    }
    fill(p[0], p[0]+cols*rows, dft);
}