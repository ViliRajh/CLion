#include <iostream>

int main() {
    std::cout << "Prikaz demonstarcije dodajanja projekta na Github\n\n";

    std::string SS;
    std::cout <<"vnesi besedilo: ";
    std::cin >> SS;

    std::cout << "Vase besedilo: " + SS + "\n";

    return 0;
}
