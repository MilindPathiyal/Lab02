/*
 Student Name: Milind Paliath-Pathiyal
 Student Number: 20714398
 SYDE 121 Lab: #1 Assignment: 001
 Filename: Lab0101
 Date submitted: 09/12/17
 I hereby declare that this code, submitted for credit for the course SYDE121, is a product
 of my own efforts. This coded solution has not been plagiarized from other sources and
 as not been knowingly plagiarized by others.
 Created by Milind Pathiyal on 9/20/17.
 Copyright © 2017 Milind Pathiyal. All rights reserved.
*/
#include <iostream>
using namespace std;

int main()
{
    //Constants Junior Employee
    const double juniorEngPencil = 8;
    const double juniorEngPen = 7;
    const double juniorEngCorrectionFluid = 60;
    
    //Constants Senior Employee
    const double seniorEngPencil = 5;
    const double seniorEngPen = 3;
    const double seniorEngCorrectionFluid = 12;
    
    //Constants Admisistrative Employee
    const double adminPencil = 2;
    const double adminPen = 6;
    const double adminCorrectionFluid = 40;
    
    //Variables
    double userJuniorPercentage = 0.0;
    double userSeniorPercentage = 0.0;
    double userAdminPercentage = 0.0;
    double totalEmployees = 0.0;
    
    double userJunior = 0.0;
    double userSenior = 0.0;
    double userAdmin = 0.0;
    
    double numPencil = 0.0;
    double numPen = 0.0;
    double numCorrectionFluid = 0.0;

    int boxPencil = 0;
    int boxPen = 0;
    int boxCorrectionFluid = 0;
    
    //Asking for % of each type of employee at the company
    cout << "Enter the total amount of employees at your company: ";
    cin >> totalEmployees;
    
    cout << "Enter the percentage of Junior engineers at your company: ";
    cin >> userJuniorPercentage;

    cout << "Enter the perecntage of Senior engineers at your company: ";
    cin >> userSeniorPercentage;

   // cout << "Enter the perecntage of administrative employees at your company: ";
   // cin >> userAdminPercentage;
    
    userAdminPercentage = 100 - userJuniorPercentage - userSeniorPercentage;
    
    //Calculate total number of each supply neeeded
    userJunior = totalEmployees * (userJuniorPercentage / 100);
    userSenior = totalEmployees * (userSeniorPercentage / 100);
    userAdmin = totalEmployees * (userAdminPercentage / 100);
    
    //Junior
    numPencil += userJunior * juniorEngPencil;
    numPen += userJunior * juniorEngPen;
    numCorrectionFluid += userJunior * juniorEngCorrectionFluid;
    
    //Senior
    numPencil += userSenior * seniorEngPencil;
    numPen += userSenior * seniorEngPen;
    numCorrectionFluid += userSenior * seniorEngCorrectionFluid;
    
    //Administrative
    numPencil += userAdmin * adminPencil;
    numPen += userAdmin * adminPen;
    numCorrectionFluid += userAdmin * adminCorrectionFluid;
    
    //Calculate how many boxes are needed of each type
    boxPencil = (int)((numPencil / 25) + .5);
    boxPen = (int)((numPen / 10) + .5);
    boxCorrectionFluid = (int)((numCorrectionFluid / 200) + .5);

    cout << "The number of pencil boxes you need is " << boxPencil << endl;
    cout << "The number of pen boxes you need is " << boxPen << endl;
    cout << "The number of correction fluid bottle boxes you need is " << boxCorrectionFluid << endl;
}
