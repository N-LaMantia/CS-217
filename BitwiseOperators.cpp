// BitwiseOperators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



  //The following 6 operators are bitwise operators (also known as bit operators as they work at the bit - level).

//

//1. The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.

//2. The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1.

//3. The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different.

//4. The << (left shift) in C or C++ takes two numbers, the left shifts the bits of the first operand, and the second operand decides the number of places to shift.

//5. The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the first operand, and the second operand decides the number of places to shift.

//6. The ~(bitwise NOT) in C or C++ takes one number and inverts all bits of it.






#include <iostream>

using namespace std;



bool Func_1(int x, int y)
{

  return ((x ^ y) < 0);

}


  // Driver code

  int main()

  {

    // a = 5(00000101), b = 9(00001001)

    short a = 5, b = 9;






    cout << "a =  " << a << " = 00000000  00000101    in Binary" << endl;





    // The result is 10 because 101 will be shifted to the left by one making it 1010
    // which is 10 in decimal. 

    cout << "a<<1 = " << (a << 1) << endl;

    // The result is 20 because a, which is 101 gets shifted to the left twice making it
    // 10100 which is 16 + 4 which is 20. 

    cout << "a<<2 = " << (a << 2) << endl;



    // The result is 2 because the short a gets shifted to the right once making it 010
    // which is 2 in decimal. 

    cout << "a>>1 = " << (a >> 1) << endl;



    // The result is 1 because the short a gets shifted to the right twice making it 001
    // which is just 1 in decimal. 

    cout << "a>>2 = " << (a >> 2) << endl;



    cout << "b =  " << b << " = 00000000  00001001    in Binary" << endl;





    // The result is 18 because 1001 gets shifted left once making it 10010 which is 
    // 16 + 2 which is 18 in decimal. 

    cout << "b<<1 = " << (b << 1) << endl;



    // The result is 36 because the short b gets shifted twice to the left making it 
    // 100100 which is 32 + 4 which is 36 in decimal. 


    cout << "b<<2 = " << (b << 2) << endl;

    // The result is 4 because b gets shifted right once making it 0100 which is just 4
    // in decimal. 

    cout << "b>>1 = " << (b >> 1) << endl;

    // The result is 2 because b gets shifted right twice making it 0010 which is 2 in 
    // decimal. 

    cout << "b>>2 = " << (b >> 2) << endl;



    cout << "a = " << a << "," << " b = " << b << endl << endl;;



    // The result is 1 because 101 and 1001 gets compared. If both digits are a 1, then 
    // it's a 1, otherwise 0. The only place where both are a one is in the first 
    // position, making it 0001 or 1. 

    cout << "a & b = " << (a & b) << endl;



    // The result is 13 because if one or both digits are 1, then it's one, otherwise 0. 
    // this makes it 1101 which is 8 + 4 + 1 which is 13. 

    cout << "a | b = " << (a | b) << endl;



    // The result is 12 because there is a one when only one 1 is in the position (not
    // two zeros or two ones). This makes it 1100 which is 12. 


    cout << "a ^ b = " << (a ^ b) << endl;



    // The result is -6 because it inverts all the bits. 0101 becomes 1010 
    // but we're doing the one's compliment so it's -6. 

    cout << "~a = " << (~a) << endl;



    // The result is the same as above but + 1 making it -5. It's negative because 
    //we're taking the opposite of the number. 

    cout << "~a + 1 = " << ~a + 1 << endl;



    if (a & 1) cout << "True means  ???????" << endl;

    else cout << "False means ???????" << endl;





    cout << "a =  " << a << endl;

    cout << "b =  " << b << endl;



    // Code to swap 'a' and 'b'. The result of XOR is 1 if the two bits are different.
    // 
    // a and b get switched usin the XOR operation. a gets set to 1100. then b 
    //gets set to 1100 ^ 1001 which is 0101. A then gets set back to 
    // 1100 ^ 0101 which is 1001 which is 9. 
    // a is now 9, and b is now 0101 which is 5. 

    a = a ^ b;

    b = a ^ b;

    a = a ^ b;



    cout << "a =  " << a << endl;

    cout << "b =  " << b << endl;



    if (Func_1(a, b) == true)

      cout << "True means  ???";

    else

      cout << "False means ???";





    return 0;

  }





  //Important Notes

  //1. The left - shift and right - shift operators should not be used for negative numbers.

  //The result of is undefined behavior if any of the operands is a negative number.

  //For example results of both 1 >> -1 and 1 << -1 is undefined.

  //

  //2. If the number is shifted more than the size of the integer, the behavior is undefined.

  //For example, 1 << 33 is undefined if integers are stored using 32 bits.

  //For bit shift of larger values 1ULL << 62 ULL is used for Unsigned Long Long,

  //which is defined using 64 bits that can store large values.

  //

  //3. The left - shift by 1 and right - shift by 1 are equivalent to the product of the first term

  //and 2 to the power given element(1 << 3 = 1 * pow(2, 3)) and division of the first term and

  //second term raised to power 2 (1 >> 3 = 1 / pow(2, 3)) respectively.

  //

  // 4. The bitwise XOR operator is the most useful operator from a technical interview perspective.

  //