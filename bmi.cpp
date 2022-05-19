#include <iostream>

int main()
{
    int heiin;
    int ibweight;
    std::cout << "Enter height in inches: \n";
    std::cin >> heiin;
   
    std::cout << "Enter weight in lbs: \n";
    std::cin >> ibweight;
   
    int bmi = ibweight * 703;

    int final_bmi = bmi / (heiin * heiin); //I could have done order of operations but I felt like it would be more 
                                           //understandable like this.
    

    std::cout << "BMI: " << final_bmi << std::endl;
    
    std::cout << "----------------------------\n";

    std::cout << "Underweight: less than 18.5\n";
    std::cout << "Normal: between 18.5 and 24.9\n";
    std::cout << "Overweight: between 25 and 29.9\n";
    std::cout << "Obese: 30 or greater\n";
    
}
