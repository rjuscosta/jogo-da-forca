#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    char palavraSecreta[30], letra[1], palavra[30];
    int i = 0, tam = 0, chances = 6, acertos = 0;
    bool acerto = false;


    cout << "\n\n JOGO DA FORCA\n\n";

    cout << "Digite uma palavra:";
    cin >> palavra;

    system("cls");

    while(palavra[i] != '\0'){
        i++;
        tam++;
    }

    for(i=0; i < 30; i++){
        palavraSecreta[i] = '-';
    }

    while((chances > 0)&&(acertos < tam)){
        cout << "Chances restantes: " << chances << "\n\n";
        cout << "palavra secreta:";
        for(i = 0; i < tam; i++){
            cout << palavraSecreta[i];
        }

        cout << "\n\n Digite uma letra:";
        cin >> letra[0];

        for(i=0; i<tam; i++){
            if(palavra[i] == letra[0]){
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
