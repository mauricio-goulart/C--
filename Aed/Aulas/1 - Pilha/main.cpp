#include <iostream>
#include "pilha.h"

using namespace std;

int main()

{
    pilha minha_pilha;
    tipo_item item;
    int opcao;

    cout << " ---- Menu de Operacoes com Pilha ---- " << endl;
    
    do
    {
        cout << "1 - Inserir item na pilha" << endl;
        cout << "2 - Remover item da pilha" << endl;
        cout << "3 - Imprimir a pilha" << endl;
        cout << "4 - Tamanho da pilha" << endl;
        cout << "5 - Verificar se a pilha esta vazia" << endl;
        cout << "6 - Verificar se a pilha esta cheia" << endl;
        cout << "0 - Sair" << endl;

        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Digite o item a ser inserido: ";
            cin >> item;

            minha_pilha.inserir(item);
            break;

        case 2:

            item = minha_pilha.remover();
            cout << "Item removido: " << item << endl;
            break;
        
        case 3:

            minha_pilha.imprimir();
            break;

        case 4:

            cout << "Tamanho da pilha: " << minha_pilha.get_tamanho() << endl;
            break;

        case 5:

            if (minha_pilha.pilha_vazia())
            {
                cout << "A pilha esta vazia!" << endl;
            }
            else
            {
                cout << "A pilha nao esta vazia!" << endl;
            }

            break;

        case 6:

            if (minha_pilha.pilha_cheia())
            {
                cout << "A pilha esta cheia!" << endl;
            }
            else
            {
                cout << "A pilha nao esta cheia!" << endl;
            }

            break;

        default:
            break;
        }
    
    } while (opcao != 0);

    cout << "Digite algo para o programa finalizar..." << endl;
    cin >> item;

    return 0;
}