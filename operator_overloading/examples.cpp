// In-Line Member Functions
int &operator[](int idx)
{
    checkIdx(idx);
    return darray[idx];
}

const int &operator[](int idx) const
{
    checkIdx(idx);
    return darray[idx]
}

// Implemented Member Functions
IntArray::operator int()
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += darray[i];
    }
    return sum;
}
IntArray::operator~()
{
    return static_cast<double>(static_case<int>(*this)) / size;
}