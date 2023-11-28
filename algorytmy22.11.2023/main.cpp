#include <iostream>
#include "algorytmy_sortowania.h"
using namespace std;
char choice;
int tab_elements = 0;
int main() {

    do
    {
        cout<<"Ilu elementowa ma byc tablica?"<<endl;
        cin>>tab_elements;
        int tablica[tab_elements];
        create_array(tablica, tab_elements);
        print_arr(tablica, tab_elements);
        cout<<"Wpisz numer zadania by uruchomic program:\n"
            <<"1.Algorytm Babelkowy\n"<<"2.Algorytm  Insertion Sort\n"
                <<"3.Algorytm  Selection Sort\n"<<"4.Algorytm  QuickSort\n"
            <<"5.Zakonczenie programu"<<endl;
        cin>>choice;
        switch(choice)
        {
            case '1': cout<<"Algorytm babelkowy "<<endl;
                bubblesort(tablica, tab_elements);
                break;
            case '2': cout<<"Algorytm Inserion Sort (wstawiania)"<<endl;
                insertion_sort(tablica, tab_elements);
                break;
            case '3':
                cout<<"Algorytm Selection Sort";
                selectionSort(tablica, tab_elements);
                break;
                case '4':
                cout<<"Algorytm QuickSort";
                Quick_sort(tablica, 0, tab_elements);
                print_arr(tablica, tab_elements);
                break;
                case '5':
                cout<<"Inicjowanie zamkniecia programu";
                break;
            default:
                cout<<"Nie rozpoznano komendy. Sprobuj ponownie";
                break;
        }
    }while(choice!='5');

    return 0;
}
