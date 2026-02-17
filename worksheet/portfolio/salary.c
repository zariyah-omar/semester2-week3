
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Zariyah Omar 
 * ID: 202029002
 */


int main( void ) {

    // define and initialise variables for the problem data 
    float salary = 36250.0;          // Gross salary in pounds
    float ni_rate = 8.0;             // National Insurance rate as percentage
    float tax_rate = 15.0;           // Tax rate as percentage
    float tax_threshold = 12500.0;   // Tax-free allowance threshold
    
    // calculate the deductions and final take-home salary
    
    // Calculate National Insurance deduction
    float ni_contribution = salary * (ni_rate / 100.0);
    
    // Calculate salary after NI deduction
    float salary_after_ni = salary - ni_contribution;
    
    // Calculate taxable amount (only tax salary above threshold)
    float taxable_amount = 0.0;
    if (salary_after_ni > tax_threshold) {
        taxable_amount = salary_after_ni - tax_threshold;
    }
    
    // Calculate tax contribution
    float tax_contribution = taxable_amount * (tax_rate / 100.0);
    
    // Calculate take-home salary
    float take_home = salary_after_ni - tax_contribution;
    
    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", ni_contribution);
    printf("Tax contribution £%.2f\n", tax_contribution);
    printf("Take home salary £%.2f\n", take_home);

    return 0;
}