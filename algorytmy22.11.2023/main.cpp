#include <iostream>
#include "algorytmy_sortowania.h"
using namespace std;
char choice;
int tab_elements = 0;
int main() {
    cout<<"Ilu elementowa ma byc tablica?"<<endl;
    cin>>tab_elements;
    int tablica[tab_elements];

    do
    {
        cout<<"Wpisz numer zadania by uruchomic program:\n"
            <<"1.Algorytm Babelkowy\n"<<"2.Algorytm  Insertion Sort\n"
            <<"3.Zakonczenie programu"<<endl;
        cin>>choice;
        switch(choice)
        {
            case '1': cout<<"Algorytm babelkowy"<<endl;
                break;
            case '2': cout<<"Algorytm Inserion Sor (wstawiania)"<<endl;
                break;
            case '3':
                cout<<"Inicjowanie zamkniecia programu";
            default:
                cout<<"Nie rozpoznano komendy. Sprobuj ponownie";
                break;
        }
    }while(choice!='3');

    return 0;
}
