class IntTuple
{
public:
    IntTuple(int tuple_size);
    ~IntTuple();
    void set(int index, int value);
    int get(int index);
private:
    int *data;
};
IntTuple::IntTuple(int tuple_size)
{
    data = new int[tuple_size];
}
IntTuple::~IntTuple()
{
    delete [] data;
}
void IntTuple::set(int index, int value)
{
    data[index] = value;
}
int IntTuple::get(int index)
{
    return data[index];
}

