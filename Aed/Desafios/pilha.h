typedef int type_item;
const int max_items = 100;

class stack
{
    private:

        int size;
        int* structure;

    public:

        stack();
        ~stack();

        void push(type_item item);
        type_item pop();
        void clear();

        type_item top();
        type_item peak();

        int size();
        void print();
        void search(type_item item);

        bool is_full();
        bool is_empty();


};
