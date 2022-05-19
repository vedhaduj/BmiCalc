#include <iostream>

int main()
{
    std::cout << "Enter weight in kg: \n";
    float weight;
    std::cin >> weight;

    std::cout << "Enter height as a floating decimal: \n";
    std::cout << "Example | 5.11, 6.10, 5.09 etc...\n";
    float height;
    std::cin >> height;

    int f = weight / height;

    std::cout << "Your bmi is: " << f << std::endl;
    std::cout << "\n";
    std::cout << "Below 18: Underweight || 18.5 - 24.9: Normal Weight || 25.0 - 29.9: Overweight\n";
    std::cout << "30.0 - 34.9: Obese || 35.0 - 39.9 : Obesity Class 2 || above 40 : Obesity class 3\n";
    std::cout << "Keep in mind this is psuedo accurate so round it up to the nearest tenth! - or fifth\n";
}
