#include <iostream>

int main()
{
    int heiin;
    int ibweight;
    std::cout << "Enter height in inches: \n";
    std::cin >> heiin;
   
    std::cout << "Enter weight in kg: \n";
    std::cin >> ibweight;
   
    //squaring height so we can divide that by our weight
    int f_height = sqrt(heiin);

    //finally getting bmi 
    int f_bmi = (ibweight / f_height);

    std::cout << "BMI: " << f_bmi << std::endl;
    
    std::cout << "----------------------------\n";

    std::cout << "Underweight: less than 18.5\n";
    std::cout << "Normal: between 18.5 and 24.9\n";
    std::cout << "Overweight: between 25 and 29.9\n";
    std::cout << "Obese: 30 or greater\n";
}
