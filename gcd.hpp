//
// Created by tanus on 2019-09-13.
//
//Greatest Common Denomonitor
//PRE: a is a positive integer
//PRE: b is a positive integer
//POST: a and b are unchanged
//RETURN: the greatest common denominator of
// a and b

#ifndef HELLOCLION_GCD_HPP
#define HELLOCLION_GCD_HPP

int gcd(const int a, const int b){
    int GCD=0;
    for (int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            GCD=i;
        }
    }
    return GCD;

}



#endif //HELLOCLION_GCD_HPP
