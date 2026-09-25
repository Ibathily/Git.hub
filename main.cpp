#include <iostream>

using namespace std;

void multiply(int first, int second) {
    cout << first * second << endl;
}

void add(int first, int second) {
    cout << first * second << endl;
}

void Print(){
    cout << "Hello World!" << endl;
}

struct Personnage {
    int vie = 100;

    void addvie(int montant) {
        vie += montant;
    }

    void removevie(int montant) {
        vie -= montant;
        if (vie < 0) {
            vie = 0;
        }
    }
};

 
int main() {
    Personnage personnage;
    personnage.removevie(25);
    personnage.addvie(10);
    cout << "Vie du personnage : " << personnage.vie << endl;
    cout << "SALUT DARRIL : " << personnage.vie << endl;
    cout << "SALUT IBRAHIM : " << personnage.vie << endl;

    return 0;
}
