#include <iostream>
#include <cmath>

unsigned long sum_squared(const int line) 
{
    if (line < 0) 
    {
        std::cout << "Invalid line number!" << std::endl;
        return 0;
    }

    unsigned long sum = 0;
    int a = 2;
    int b = pow(a, line);

    for (int i = 0; i <= line; i++) 
    {
        sum = b;
    }
    
    return sum;
}

int main() 
{
    int line;
    std::cout << "Enter the line number: ";
    std::cin >> line;

    unsigned long result = sum_squared(line);
    std::cout << "Sum of coefficients in line " << line << ": " << result << std::endl;

    return 0;
}
