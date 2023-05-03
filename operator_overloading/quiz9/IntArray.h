class IntArray
{
    private:
        int* array;
        int maxSize, currentSize;
        
    public:
        ~IntArray();
        double getLength() const;
        bool add(int value);
        void set(int index, int value);
        int get(int index) const;
        int *toArray() const;
        std::string toString() const;

        void operator+(int rhs);
        double operator~() const;
}

// cout << intArray << endl;
// operator<<(cout, intarray);
std::ostream &operator<<(std::ostream &lhs, const IntArray &rhs);

// AS A MEMBER FUNCTION: intArr + 10;
// intArr.operator+(10)
// void IntArray::operator+(int value)
// {
//     add(value);
// }

// NON-MEMBER FUNCTION: intArr + 10;
// void operator+(IntArray &lhs, int rhs)
// {
//     lhs.add(rhs);
// }