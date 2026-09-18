#include "leap.h"
bool leap_year(int year){
    return year%400 ==0? 1: ((year%100 !=0) && (year%4==0))?1 :0;
}