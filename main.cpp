#include <iostream>

class Figure{
protected:

    int sides_count = 0;
    std::string name;

public:
    Figure(){
        int sides_count = 0;
        name = "Фигура: ";

    }
    void get_name(){
        std::cout << name;
    }

    void get_sides_count(){
        std::cout << sides_count << "\n";
    }

};

class Triangle:Figure{
public:
    Triangle(){
        sides_count = 3;
        name = "Треугольник: ";
        get_name();
        get_sides_count();
    }
};

class Quadrangle:Figure{
public:
    Quadrangle(){
        sides_count = 4;
        name = "Четырёхугольник: ";
        get_name();
        get_sides_count();
    }


};

int main() {
    std::cout << "Количество сторон:" << std::endl;
    Figure().get_name();
    Figure().get_sides_count();
    Triangle triangle;
    Quadrangle quadrangle;

    return 0;
}
