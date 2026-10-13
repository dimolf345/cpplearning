#include <iostream>
#include <vector>

/*La differenza principale tra vettori e array è che:
1. I vettori hanno la size
2. I vettori non hanno dimensione prefissata
*/

int main(int argc, char const *argv[]) {
    std::vector<int> data = { 4, 5 ,6 ,7, 8};


    std::cout << data.size() << std::endl;
    //Utility methods
    data.push_back(30); // aggiunge elemento in coda
    data.max_size(); // massimo numero di info che può contenere
    data.resize(8); // estende il vettore a  8 elementi, quelli vuoti vanno a 0;
    data.empty(); // controlla se il vettore è vuoto;
    data.clear(); // svuota gli elementi del vettore;
    return 0;
}