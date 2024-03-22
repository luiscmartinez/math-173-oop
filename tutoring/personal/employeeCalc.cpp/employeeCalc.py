employeeBirthYear = input("Enter your birth year: ")

currentYear = input("Enter the current year: ")



eligibleInsuranceYear = int(currentYear) + 1
eligibleRetirementYear = int(employeeBirthYear) + 5
eligibleRetirementAge = 65
eligiblePensionYear = int(employeeBirthYear) + eligibleRetirementAge

print("You are eligible for insurance in the year", eligibleInsuranceYear)
print("You are eligible for retirement in the year", eligibleRetirementYear)
print("You are eligible for pension in the year", eligiblePensionYear)
