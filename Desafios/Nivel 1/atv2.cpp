#include <iostream>

using namespace std;

int main()
{
    int media, media_sala;
    
    cout << "Qual a media da sala: ";
    cin >> media_sala;

    for (int i = 0; i < 3; i++)
    {
        int nota;
        cout << "Nota " << i + 1 << "º = ";
        cin >> nota;

        media = media + nota;
    }
    
    media = media / 3;

    if (media == media_sala)
    {
        cout << "Media [" << media << "] = Igual da sala = [" << media_sala << "]" << endl;
    }
    else if (media > media_sala)
    {
        cout << "Media [" << media << "] = Maior da sala = [" << media_sala << "]" << endl;
    }
    else
    {
        cout << "Media [" << media << "] = Abaixo da sala = [" << media_sala << "]" << endl;
    }
    
    return 0;
}