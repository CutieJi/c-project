#include <stdio.h>

int main()
{
    int id[10], present[10], absent[10], overtimeHours[10], undertimeHours[10], holidaysWorked[10];
    char name[10][10], gender[10][10], position[10][20];
    float salary[10], dailyRate[10], overtimeRate[10], cashAdvance[10], sss[10], incomeTax[10], pagibig[10], philhealth[10];
    float partialIncome[10], overtimePay[10], undertimeDeduction[10], grossIncome[10], totalDeduction[10], netIncome[10], bonus[10], holidayPay[10];
    int n = 0, duplicate = 0, choice, i, searchId, found, j;

    // si n ay number ng employees na na add na sa system ay 10 lang ang max sa array dahil 10 lang ang kaya ng system dahil naka limit lang sa 10 employees

    do
    {
        printf("\n===== PAYROLL SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. View Employees\n");
        printf("3. Update Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Search for Employee\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            
            if(n >= 10)
            {
                printf("\nYou have reached the maximum number of employees. Cannot add more!\n");
            }
            else
            {
                printf("\nEnter Employee ID: ");
                scanf("%d", &id[n]);
                for(i = 0; i < n; i++) // loop para icheck kung may duplicate id
                {
                    if(id[i] == id[n]) // if yung id sa array is equal sa id na input ng user
                    {
                        printf("Error: Employee ID already exists!\n");
                        duplicate = 1;
                        break;
                    }
                }
                if(duplicate) // if duplicate is 1 means may duplicate id na so mag back sya sa main menu
                {
                    break;
                }

                printf("Enter Name: ");
                scanf("%s", name[n]);

                printf("Enter Gender: ");
                scanf("%s", gender[n]);

                printf("Enter Position: ");
                scanf("%s", position[n]);

                printf("Enter Monthly Salary: ");
                scanf("%f", &salary[n]);

                dailyRate[n] = salary[n] / 22;

                printf("Enter Number of Days Present: ");
                scanf("%d", &present[n]);

                absent[n] = 22 - present[n];

                printf("Enter Overtime Hours: ");
                scanf("%d", &overtimeHours[n]);

                printf("Enter Undertime Hours: ");
                scanf("%d", &undertimeHours[n]);

                printf("Enter Cash Advance: ");
                scanf("%f", &cashAdvance[n]);

                printf("Enter Number of Holidays Worked: ");
                scanf("%d", &holidaysWorked[n]);

                // ito is yung computation ng payroll nandito lahat ang mga formula
                partialIncome[n] = dailyRate[n] * present[n];
                overtimeRate[n] = 150; // fixed ang overtime rate na 150 parang company policy lang sya
                overtimePay[n] = overtimeHours[n] * overtimeRate[n];
                undertimeDeduction[n] = (dailyRate[n] / 8) * undertimeHours[n];
                holidayPay[n] = dailyRate[n] * holidaysWorked[n] * 2;
                bonus[n] = salary[n] / 12;
                grossIncome[n] = partialIncome[n] + overtimePay[n] + holidayPay[n] + bonus[n];

                sss[n] = salary[n] * 0.05;          // pag 25k si salary then 1,250 ang deduction dahil 5% sya
                philhealth[n] = salary[n] * 0.025;  // pag 25k si salary then 625 ang deduction dahil 2.5% sya
                pagibig[n] = 100;
                incomeTax[n] = grossIncome[n] * 0.10; // yung income tax ay ginawa kong 10% naka fixed din sya na parang campany policy lang din

                totalDeduction[n] = cashAdvance[n] + sss[n] + incomeTax[n] + pagibig[n] + philhealth[n] + undertimeDeduction[n];
                netIncome[n] = grossIncome[n] - totalDeduction[n];

                printf("\nEmployee Added Successfully!\n");
                n++;
                break;
            }

            case 2:
            printf("\n===== EMPLOYEE LIST =====\n");
            if(n == 0)
            {
                printf("No employees found!\n");
            }
            else
            {
                for(i = 0; i < n; i++)
                {
                    printf("\nID: %d\n", id[i]);
                    printf("Name: %s\n", name[i]);
                    printf("Gender: %s\n", gender[i]);
                    printf("Position: %s\n", position[i]);
                    printf("Basic Salary: %.2f\n", salary[i]);
                    printf("Daily Rate: %.2f\n", dailyRate[i]);
                    printf("Days Present: %d\n", present[i]);
                    printf("Days Absent: %d\n", absent[i]);
                    printf("Partial Income: %.2f\n", partialIncome[i]);
                    printf("Overtime Pay: %.2f\n", overtimePay[i]);
                    printf("Holiday Pay: %.2f\n", holidayPay[i]);
                    printf("13th Month Bonus: %.2f\n", bonus[i]);
                    printf("Gross Income: %.2f\n", grossIncome[i]);
                    printf("\n--- Deductions ---\n");
                    printf("Undertime Deduction: %.2f\n", undertimeDeduction[i]);
                    printf("Cash Advance: %.2f\n", cashAdvance[i]);
                    printf("SSS: %.2f\n", sss[i]);
                    printf("Income Tax: %.2f\n", incomeTax[i]);
                    printf("PAG-IBIG: %.2f\n", pagibig[i]);
                    printf("PhilHealth: %.2f\n", philhealth[i]);
                    printf("Undertime: %.2f\n", undertimeDeduction[i]);
                    printf("Total Deductions: %.2f\n", totalDeduction[i]);
                    printf("Net Income: %.2f\n", netIncome[i]);
                }
            }
            break;

            case 3:
            printf("\nEnter Employee ID to Update: ");
            scanf("%d", &searchId);
            found = -1; // -1 means hindi pa nahanap yung id
            for(i = 0; i < n; i++)
            {
                if(id[i] == searchId) // if yung id sa array is equal sa id na hinahanap ng user
                {
                    found = i;
                    break;
                }
            }
            if(found != -1) // if si found is not equal to -1 means nahanap na yung id
            {
                printf("Enter New Monthly Salary: ");
                scanf("%f", &salary[found]);

                dailyRate[found] = salary[found] / 22;

                printf("Enter New Days Present: ");
                scanf("%d", &present[found]);

                absent[found] = 22 - present[found];

                printf("Enter New Overtime Hours: ");
                scanf("%d", &overtimeHours[found]);

                printf("Enter New Undertime Hours: ");
                scanf("%d", &undertimeHours[found]);

                printf("Enter New Cash Advance: ");
                scanf("%f", &cashAdvance[found]);

                printf("Enter New Holidays Worked: ");
                scanf("%d", &holidaysWorked[found]);

                partialIncome[found] = dailyRate[found] * present[found];
                overtimeRate[found] = 150;
                overtimePay[found] = overtimeHours[found] * overtimeRate[found];
                undertimeDeduction[found] = (dailyRate[found] / 8) * undertimeHours[found];
                holidayPay[found] = dailyRate[found] * holidaysWorked[found] * 2;
                bonus[found] = salary[found] / 12;
                grossIncome[found] = partialIncome[found] + overtimePay[found] + holidayPay[found] + bonus[found];
                totalDeduction[found] = cashAdvance[found] + sss[found] + incomeTax[found] + pagibig[found] + philhealth[found] + undertimeDeduction[found];
                netIncome[found] = grossIncome[found] - totalDeduction[found];

                printf("Employee updated successfully!\n");
            }
            else
            {
                printf("Employee not found!\n");
            }
            break;

            case 4:
            printf("\nEnter Employee ID to Delete: ");
            scanf("%d", &id);
            found = -1;
            for(i = 0; i < n; i++)
            {
                if(id[i] == searchId)
                {
                    found = i;
                    break;
                }
            }
            if(found != -1)
            {
                for(i = found; i < n - 1; i++) // shift lahat ng data paharap para ma delete yung data na hinahanap
                {
                    id[i] = id[i+1];
                    salary[i] = salary[i+1];
                    dailyRate[i] = dailyRate[i+1];
                    present[i] = present[i+1];
                    absent[i] = absent[i+1];
                    overtimeHours[i] = overtimeHours[i+1];
                    overtimeRate[i] = overtimeRate[i+1];
                    undertimeHours[i] = undertimeHours[i+1];
                    holidaysWorked[i] = holidaysWorked[i+1];
                    cashAdvance[i] = cashAdvance[i+1];
                    sss[i] = sss[i+1];
                    incomeTax[i] = incomeTax[i+1];
                    pagibig[i] = pagibig[i+1];
                    philhealth[i] = philhealth[i+1];
                    partialIncome[i] = partialIncome[i+1];
                    overtimePay[i] = overtimePay[i+1];
                    undertimeDeduction[i] = undertimeDeduction[i+1];
                    holidayPay[i] = holidayPay[i+1];
                    bonus[i] = bonus[i+1];
                    grossIncome[i] = grossIncome[i+1];
                    totalDeduction[i] = totalDeduction[i+1];
                    netIncome[i] = netIncome[i+1];
                    for(j = 0; j < 10; j++)
                    {
                        name[i][j] = name[i+1][j];
                        gender[i][j] = gender[i+1][j];
                        position[i][j] = position[i+1][j];
                    }
                }
                n--;
                printf("Employee deleted successfully!\n");
            }
            else
            {
                printf("Employee not found!\n");
            }
            break;

            case 5:
            printf("\nEnter Employee ID to Search: ");
            scanf("%d", &searchId);
            found = -1;

            for(i = 0; i < n; i++) {
                if(id[i] == searchId)
                {
                    found = i;
                    break;
                }
            }
            if(found != -1)
            {
                printf("\n===== EMPLOYEE FOUND =====\n");
                printf("ID: %d\n", id[found]);
                printf("Name: %s\n", name[found]);
                printf("Gender: %s\n", gender[found]);
                printf("Position: %s\n", position[found]);
                printf("Basic Salary: %.2f\n", salary[found]);
                printf("Daily Rate: %.2f\n", dailyRate[found]);
                printf("Days Present: %d\n", present[found]);
                printf("Days Absent: %d\n", absent[found]);
                printf("Partial Income: %.2f\n", partialIncome[found]);
                printf("Overtime Pay: %.2f\n", overtimePay[found]);
                printf("Holiday Pay: %.2f\n", holidayPay[found]);
                printf("13th Month Bonus: %.2f\n", bonus[found]);
                printf("Gross Income: %.2f\n", grossIncome[found]);
                printf("\n--- Deductions ---\n");
                printf("Undertime Deduction: %.2f\n", undertimeDeduction[found]);
                printf("Cash Advance: %.2f\n", cashAdvance[found]);
                printf("SSS: %.2f\n", sss[found]);
                printf("Income Tax: %.2f\n", incomeTax[found]);
                printf("PAG-IBIG: %.2f\n", pagibig[found]);
                printf("PhilHealth: %.2f\n", philhealth[found]);
                printf("Total Deductions: %.2f\n", totalDeduction[found]);
                printf("Net Income: %.2f\n", netIncome[found]);
            }
            else
            {
                printf("\nEmployee not found!\n");
            }
            break;

            case 6:
                printf("\nExiting...\n");
                break;

            default:
                printf("\nInvalid choice!\n");
        }
    }  
    while(choice != 6);

    return 0;
}