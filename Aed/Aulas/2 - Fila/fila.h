typedef int type_item;
const int max_items = 100;

class queue
{
    private:

    int first, last;
    type_item* queue_array;

    public:

    quene();
    ~quene();

    bool is_full();
    bool is_empty();

    void push(type_item item);
    type_item pop();
    void print();

    

    
};      