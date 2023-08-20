#include <iostream>

class Figure{
protected:

    int sides_count = 0;
    std::string name;

public:

    Figure(){
        sides_count = 0;
        name = "Фигура: ";
    }
    Figure(int side_count, std::string name_figure){
        sides_count = side_count;
        name = name_figure;

    }
public:
    void print_name() {
        std::cout << name;
    }

    int get_sides_count(){
        return sides_count;
    }

};

class Triangle:public Figure{
public:

    Triangle():Figure(3, "Треугольник: "){

    }

};

class Quadrangle:public Figure{
public:
    Quadrangle(): Figure(4, "Четырехугольник: "){

    }

};

int main() {
    std::cout << "Количество сторон:" << std::endl;
    Figure figure;
    figure.print_name();
    std::cout << figure.get_sides_count() << "\n";
    Triangle triangle;
    triangle.print_name();
    std::cout << triangle.get_sides_count() << "\n";
    Quadrangle quadrangle;
    quadrangle.print_name();
    std::cout << quadrangle.get_sides_count() << "\n";

    return 0;
}
