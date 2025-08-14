typedef int type_item;
const int max_items = 100;

class stack
{
    private:

        int size;
        int* structure = new int[max_items];

    public:

        stack();
        ~stack();

        void push(type_item item);
        type_item pop();
        void clear();

        void top();
        void peak();

        int size();
        void print();
        void search(type_item item);

        bool is_full();
        bool is_empty();


};
