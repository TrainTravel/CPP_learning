#include <iostream>
#include <string>

struct Vector2{
    float x, y;
};

int main(){
    Vector2* a = new Vector2();
    Vector2* b = a; // This is copying the pointer.
    b->x = 2;

    std:cin.get();
}