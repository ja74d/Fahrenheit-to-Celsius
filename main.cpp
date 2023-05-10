#include <iostream>


int main(){
    float F, Celcus;
    std::cout << "Enter the temperature:";
    std::cin >> F;
    Celcus = ((F-32)*5)/9;
    std::cout << "in Celcus= " << Celcus << std::endl;
    return 0;
}
