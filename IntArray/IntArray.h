class IntArray
{
private:
    int numberOfElements;
    int *bag;
    bool integrityOk(int) const;

public:
    IntArray();         // Default Constructor
    IntArray(int size); // Constructor

    ~IntArray(); // Destructor

    int getLength() const;

    void add(int val);
    void set(int index, int val);
    int get(int index) const;

    int *toArray();
    std::string toString();
};