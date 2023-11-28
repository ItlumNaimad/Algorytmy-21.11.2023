//
// Created by naima on 22.11.2023.
//

#include "algorytmy_sortowania.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
void bubblesort (int tab[], int size)
{
    for (int i=0; i<size-1; i++){
        for (int j=0; j<size-1; j++){
            if (tab[j]>tab[j+1]){
                int tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        }
    }
    for(int i=0; i<size; i++)
        cout<<"["<<tab[i]<<"]";
}
void insertion_sort (int tab[], int size)
{
    int tmp;
    for (int i=1; i<size; i++){
        tmp=tab[i];
        int j=i-1;
        while (j>=0 && tmp<=tab[j])
        {
            tab[j+1]=tab[j];
            j--;
        }
        tab[j+1]=tmp;
    }
    for(int i=0; i<size; i++)
        cout<<"["<<tab[i]<<"]";
}
void create_array(int tab[], int number)
{
    srand(time(nullptr));

    for(int i=0; i<number; i++)
    {
        tab[i]=rand()%1000+1;
    }
    for(int i=0; i<number; i++)
        cout<<"["<<tab[i]<<"]";
}