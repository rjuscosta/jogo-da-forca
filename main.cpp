#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    char palavraSecreta[30], letra, palavra[30];
    int i = 0, tam = 0, chances = 6, acertos = 0;
    bool acerto = false;


    cout << "\n\n JOGO DA FORCA\n\n";

    cout << "Digite uma palavra:";
    cin >> palavra;

    system("cls");

    tam = strlen(palavra);

    memset(palavraSecreta, '-', 30);

    while((chances > 0)&&(acertos < tam)){
        cout << "Chances restantes: " << chances << "\n\n";
        cout << "palavra secreta:";
        for(i = 0; i < tam; i++){
            cout << palavraSecreta[i];
        }

        cout << "\n\n Digite uma letra:";
        cin >> letra;

        for(i=0; i<tam; i++){
            if(palavra[i] == letra){
                acerto = true;
                palavraSecreta[i] = palavra[i];
                acertos++;
            }
        }

        if(!acerto){
            chances--;
        }

        acerto = false;
        system("cls");

    }

    if(acertos == tam){
        cout << "Voce venceu!!!";
    } else{

        cout << "você morreu!!!";
    }

    return 0;
}
