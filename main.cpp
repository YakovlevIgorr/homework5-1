#include <iostream>

class Unknow_sides{
public:
    void print() {
        std::cout << "Фигура: 0" << "\n";
    }
};

class Three_side:Unknow_sides{
public:
    void print() {
        std::cout << "Треугольник: 3" << "\n";
    }
};

class Four_side:Three_side{
public:
    void print(){
        std::cout << "Четырёхугольник: 4" << "\n";
    }
};

int main() {
    std::cout << "Количество сторон:" << std::endl;
    Unknow_sides unknowSides;
    unknowSides.print();
    Three_side threeSide;
    threeSide.print();
    Four_side fourSide;
    fourSide.print();

    return 0;
}
