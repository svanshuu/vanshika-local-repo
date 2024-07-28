#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        string skillset;
        string experience_level;
        string education_level;

    public:
        Employee(string skill, string exp, string edu) {
            skillset = skill;
            experience_level = exp;
            education_level = edu;
        }

        float calculate_salary() {
            // Define base salary for each skillset
            int base_salary = 0;
            if (skillset == "Software Developer") {
                base_salary = 70000;
            } else if (skillset == "Data Scientist") {
                base_salary = 90000;
            } else if (skillset == "Product Manager") {
                base_salary = 100000;
            }

            // Define salary multipliers for experience levels
            float experience_multiplier_value = 0;
            if (experience_level == "Entry Level") {
                experience_multiplier_value = 0.8;
            } else if (experience_level == "Mid Level") {
                experience_multiplier_value = 1;
            } else if (experience_level == "Senior Level") {
                experience_multiplier_value = 1.2;
            }

            // Define salary multipliers for education levels
            float education_multiplier_value = 0;
            if (education_level == "Bachelor's Degree") {
                education_multiplier_value = 1;
            } else if (education_level == "Master's Degree") {
                education_multiplier_value = 1.2;
            } else if (education_level == "PhD") {
                education_multiplier_value = 1.5;
            }

            // Calculate total salary package
            float total_salary = base_salary * experience_multiplier_value * education_multiplier_value;

            return total_salary;
        }
};

// Main function
int main() {
    // Create an Employee object
    Employee employee("Software Developer", "Mid Level", "Master's Degree");

    // Calculate and print the salary
    float salary = employee.calculate_salary();
    cout << "Salary: $" << salary << endl;

    return 0;
}
