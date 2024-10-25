#include <iostream>
#include <vector>

using namespace std;
template <class T>
class Vector
{
private:
    T* _array;
    size_t _size;
    size_t _startIndex;
public:
    Vector(size_t size, size_t startIndex);
    Vector(const Vector& tmp);
    Vector(Vector&& tmp);
    size_t GetSize() const;
    size_t GetStartIndex() const;
    T& GetElem;
    T& operator[](size_t ind)
    Vector& operator= (const Vector& tmp);
    bool operator==(const Vector& tmp);
    Vector operator+ (const T& t) const;
    Vector operator- (const T& t) const;
    Vector operator* (const T& t) const;
    Vector operator+ (const Vector& t) const;
    Vector operator- (const Vector& t) const;   
    T operator* (const Vector& t) const;
    friend istream& operator>>(istream& in, Vector& v)
    {
        for (size_t i = 0; i < v._size; i++)
            in >> v._array[i];
        return in;
    };
    friend ostream& operator<<(ostream& out, const Vector& v)
    {
        for (size_t i = 0; i < v._size; i++)
            out << v._array[i] << ' ';
        return out;
    };
    ~Vector();
};

