#include <map>
#include <string>

template <class T>
class BaseDataTable
{
private:
    std::map<int, T> data;

public:
    BaseDataTable(/* args */);

    ~BaseDataTable();
    // T get(int t);

    T operator[](int t);
    void set(int t, T v);
};

void print_a();


class BaseDataTime
{
private:
    /* data */
public:
    char kalpa;
    char month;
    char day;
    /**
     * @brief 1-6,morning-nignt
     * 
     */
    char day_zone;
    /**
     * @brief max: 1679 8000
     * 
     */
    int year;
    long ticks;

    // BaseDataTime(/* args */);
    BaseDataTime(long v=0);
    ~BaseDataTime();

    std::string operator()();
    void operator=(long v);
    void operator=(BaseDataTime &t);
    BaseDataTime& operator+(long v);
    BaseDataTime& operator-(long v);
    BaseDataTime& operator+(BaseDataTime &t);
    BaseDataTime& operator-(BaseDataTime &t);

};


class Matrix{
private:
    int rows, cols;
    unsigned int** p;

public:
    unsigned int* operator[](int r);
    Matrix(int rows, int cols, unsigned int dft=0);
}


