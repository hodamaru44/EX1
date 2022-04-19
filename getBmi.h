#pragma once
double getBmi(double height, double weight) 
{
    double bmi;
    height /= 100;
    //g’·‚Æ‘Ìd‚©‚çBMI‚ğŒvZ‚·‚é
    bmi = weight / height / height;
    return bmi;
}