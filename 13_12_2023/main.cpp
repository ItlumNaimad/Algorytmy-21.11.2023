#include <iostream>

using namespace std;

class Stack {
private:
    static const int maxSize = 100;  // Maksymalny rozmiar stosu
    int elements[maxSize];
    int top;  // Wskaźnik na górny element stosu

public:
    // Konstruktor
    /*
     *To jest inicjalizacja składnika klasy top w konstruktorze klasy Stack.
     *W C++, można użyć listy inicjalizacyjnej, aby zainicjować składniki
     * klasy podczas tworzenia obiektu.
     * W tym przypadku, Stack() to konstruktor bezargumentowy dla klasy Stack.
     * top(-1) oznacza, że składnik top będzie zainicjowany
     * wartością -1 podczas tworzenia obiektu. top to wskaźnik
     * na górny element stosu. Wartość -1 wskazuje, że stos jest pusty,
     * ponieważ żaden element jeszcze nie został dodany.
     * Podsumowując, linia ta inicjalizuje top wartością -1
     * podczas tworzenia obiektu klasy Stack, co jest użyteczne
     * w przypadku stosu, aby można było łatwo sprawdzić, czy stos jest pusty.
     */
    Stack() : top(-1) {}

    // Dodaj element na stos
    void put(int value)
    {
        if (top < maxSize - 1) {
            elements[++top] = value;
            cout << "Dodano element " << value << " do stosu." << endl;
        } else {
            cout << "Stos jest pełny. Nie można dodać elementu." << endl;
        }
    }

    // Pobierz element ze stosu
    void take()
    {
        if (top >= 0) {
            int value = elements[top--];
            cout << "Pobrano element " << value << " ze stosu." << endl;
        } else {
            cout << "Stos jest pusty. Nie mozna pobrac elementu." << endl;
        }
    }
    // Zwróć rozmiar stosu
    void size()
    {
        cout << "Rozmiar stosu: " << top + 1 << endl;
    }
    void expand()
    {

    }
};

int main() {
    Stack myStack;

    // Przykładowe użycie funkcji na stosie
    myStack.put(10);
    myStack.put(20);
    myStack.size();
    myStack.take();
    myStack.size();
    myStack.take();
    myStack.size();
    myStack.take(); // Proba pobrania z pustego stosu

    return 0;
}
/*
 * W tym kodzie używam tablicy `elements` o stałym
 * rozmiarze `maxSize` do przechowywania elementów stosu.
 * Wskaźnik `top` wskazuje na górny element stosu.
 * Dodatkowo, w konstruktorze inicjalizuję
 * `top` na -1, co oznacza, że stos jest pusty.
*/