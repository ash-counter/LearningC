#include "difference_of_squares.h"
unsigned int difference_of_squares(unsigned int number){
    unsigned int sq_of_sum_n_numbers = square_of_sum(number);
    unsigned int sum_of_sq = sum_of_squares(number);
    return (sq_of_sum_n_numbers - sum_of_sq);
    
    
}
unsigned int square_of_sum(unsigned int number){
    return (((number +1) *number)/2)*(((number +1) *number)/2);
}
    
unsigned int sum_of_squares(unsigned int number){
    return ((number *(number +1)*(2*number +1))/6);
    
}