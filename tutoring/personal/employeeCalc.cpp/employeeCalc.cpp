#include <iostream>
#include <string>

int main()
{
    int employeeBirthYear;

    std::cout << "Enter the employee's birth year: ";
    std::cin >> employeeBirthYear;

    int currentYear;
    std::cout << "Enter the current year: ";
    std::cin >> currentYear;

    int eligibleInsuranceYear = currentYear + 1;

    int eligibleRetirementYear = currentYear + 5;

    int eligibleRetirementAge = 65;

    int eligiblePensionYear = employeeBirthYear + eligibleRetirementAge;

    std::cout << "The employee is eligible for insurance in the year " << eligibleInsuranceYear << std::endl;
    std::cout << "The employee is eligible for retirement in the year " << eligibleRetirementYear << std::endl;
    std::cout << "The employee is eligible for a pension in the year " << eligiblePensionYear << std::endl;
}