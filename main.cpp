#include "my_complex.h"

int main(){

    std::cout << "ORA ORA ORA!!!\n";
    My_Complex num1;
    My_Complex num2;
    double re1,re2,im1,im2;
    std::cin >> re1 >> im1;
    std::cin >> re2 >> im2;
    num1.setRe(re1); num1.setIm(im1);
    num2.setRe(re2); num2.setIm(im2);
    My_Complex res(num1+num2);
    res.Print();
    My_Complex res2(num1*num2);
    res2.Print();
    My_Complex res3(num1-num2);
    res3.Print();
    return 0;
}