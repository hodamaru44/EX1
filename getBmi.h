#pragma once
double getBmi(double height, double weight) 
{
    double bmi;
    height /= 100;
    //�g���Ƒ̏d����BMI���v�Z����
    bmi = weight / height / height;
    return bmi;
}