class IntArray
{   
    private:
    public:
        IntArray();
        IntArray(int size);

        ~IntArray();

        int getLength() const;

        void add(int val);
        void set(int index, int val);
        int get(int index) const;

        int * toArray();
        string toString();
};

IntArray::IntArray()
{
    size = 100;
}
IntArray::IntArray(int size)
{
    this->size = size;
}