
typedef int tipo_item;
const int max_itens = 100;

class pilha
{
    private:

        int tamanho;
        int* estrutura;


    public:

        pilha(); //Construtor
        ~pilha(); //Destrutor

        bool pilha_cheia();
        bool pilha_vazia(); 

        void inserir(tipo_item item); //Push
        tipo_item remover(); //Pop

        int get_tamanho(); //Retorna o tamanho da pilha
        void imprimir(); 
};