/// <summary>
/// 
/// </summary>
/// <param name="bmi"></param>
/// <returns></returns>

#include "getObesity.h"
int getObesity(double bmi)
{
    int obesity;
    if (bmi > 40) {
        obesity = 4;
    }
    else if (bmi > 35)
    {
        obesity = 3;
    }
    else if (bmi > 30)
    {
        obesity = 2;
    }
    else if (bmi > 25)
    {
        obesity = 1;
    }
    else if (bmi > 18.5)
    {
        obesity = 0;
    }
    else
    {
        obesity = -1;
    }
    return obesity;
}