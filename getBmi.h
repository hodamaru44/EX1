#pragma once
double getBmi(double height, double weight) 
{
    double bmi;
    height /= 100;
    //身長と体重からBMIを計算する
    bmi = weight / height / height;
    return bmi;
}