class IntArray
{   
    private:
        int size;
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