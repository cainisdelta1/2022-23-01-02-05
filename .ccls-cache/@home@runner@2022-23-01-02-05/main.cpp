#include <iostream>
#include <limits>

//sub-procedure
void printMessage()
{
  std::cout << "Hello, world!" << std::endl;
}

int sum(int n1, int n2)
{
  return n1+n2;
}

//procedure
int main() {
  /*primitives*/
  /*
    boolean  (bool)
    character  (char)
    integer  (int)
    floating point  (float)
    double floating point  (double)
    valueless  (void)
    wide character   (wchar_t)
  */

  std::cout << "the size of bool is " << sizeof(bool) << " bytes"<< std::endl;
  std::cout << "the size of char is " << sizeof(char) << " bytes"<< std::endl;
  std::cout << "the size of int is " << sizeof(int) << " bytes" << std::endl;
  std::cout << "the size of float is " << sizeof(float) << " bytes" << std::endl;
  std::cout << "the size of double is " << sizeof(double) << " bytes" << std::endl;
  std::cout << "the size of double is 0 bytes. it doesnt return a value" << std::endl;
  std::cout << "the size of wchar_t is " << sizeof(wchar_t) << " bytes" << std::endl;


  // type modifiers
  // 1) signed
  // 2) unsigned
  // 3) short
  // 4) long

  /*
    int (-2,147,483,648 to 2,147,483,647)
      signed int (-2,147,483,648 to 2,147,483,647)
      unsigned int (0 to 4,294,967,295)

    short int (-32,768 to 32,767)
      signed short int (-32,768 to 32,767)
      unsigned short int (0 to 65,535)

    long int (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807)
      signed long int (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807)
      unsigned long int (0 to 18,446,744,073,551,615)

    long long int (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807) // different size than long int on 32 bit system
      signed long long int (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807)
      unsigned long long int (0 to 18,446,744,073,709,551,615)
  */

  //printMessage();
  //int theSum = sum(1,1);
  //std::cout << "theSum = " << theSum << std::endl;

  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "INTEGERS" << std::endl;
  
  std::cout << "\tThe size of int is " << sizeof(int) << " bytes";
  std::cout << "\tInt min " << std::numeric_limits<int>::min() << "to" << "\tInt max " << std::numeric_limits<int>::max() << std::endl;;
  
  std::cout << "\tThe size of signed int is " << sizeof(signed int) << " bytes";
  std::cout << "\tsigned Int min " << std::numeric_limits<signed int>::min() << " to " << "\tsigned Int max " << std::numeric_limits<signed int>::max() << std::endl;;
  
  std::cout << "\tThe size of unsigned int is " << sizeof(unsigned int) << " bytes"; 
  std::cout << "\tunsigned int min " << std::numeric_limits<unsigned int>::min() << " to " << "\tunsigned Int max " << std::numeric_limits<unsigned int>::max() << std::endl;;
  std::cout << std::endl; 

  
  std::cout << "\tThe size of short int is " << sizeof(short int) << " bytes";
  std::cout << "\tshort Int min " << std::numeric_limits<short int>::min() << " to " << "\tshort Int max " << std::numeric_limits<signed int>::max() << std::endl;
  
  std::cout << "\tThe size of signed short int is " << sizeof(signed short int) << " bytes";
  std::cout << "\tsigned short Int min " << std::numeric_limits<signed short int>::min() << " to " << "\tsigned short Int max " << std::numeric_limits<signed short int>::max() << std::endl;

  std::cout << "\tThe size of unsigned short int is " << sizeof(unsigned short int) << " bytes";
  std::cout << "\tunsigned short Int min " << std::numeric_limits<unsigned short int>::min() << " to " << "\tunsigned short Int max " << std::numeric_limits<unsigned short int>::max() << std::endl;
  std::cout << std::endl;

  
  std::cout << "\tThe size of long int is " << sizeof(long int) << " bytes";
  std::cout << "\tlong Int min " << std::numeric_limits<long int>::min() << " to " << "\tlong Int max " << std::numeric_limits<long int>::max() << std::endl;
  
  std::cout << "\tThe size of signed long int is " << sizeof(signed long int) << " bytes ";
  std::cout << "\tsigned long Int min " << std::numeric_limits<signed long int>::min() << " to " << "\tshort Int max " << std::numeric_limits<signed long int>::max() << std::endl;
  
  std::cout << "\tThe size of unsigned long int is " << sizeof(unsigned long int) << " bytes";
  std::cout << "\tunsigned long Int min " << std::numeric_limits<unsigned long int>::min() << " to " << "\tunsigned long Int max " << std::numeric_limits<unsigned long int>::max() << std::endl;
  std::cout << std::endl;

  
  std::cout << "\tThe size of long long int is " << sizeof(long long int) << " bytes";
  std::cout << "\tlong long Int min " << std::numeric_limits<long long int>::min() << " to " << "\tlong long Int max " << std::numeric_limits<long long int>::max() << std::endl;
  
  std::cout << "\tThe size of signed long long int is " << sizeof(signed long long int) << " bytes";
  std::cout << "\tsigned long long Int min " << std::numeric_limits<signed long long int>::min() << " to " << "\tsigned long long Int max " << std::numeric_limits<signed long long int>::max() << std::endl;
  
  std::cout << "\tThe size of unsigned long long int is " << sizeof(unsigned long long int) << " bytes";
  std::cout << "\tunsigned long long Int min " << std::numeric_limits<unsigned long long int>::min() << " to " << "\tunsigned long long Int max " << std::numeric_limits<unsigned long long int>::max() << std::endl;
  std::cout << std::endl;


  
  std::cout << "Float:\t\t\t"<< "(" << std::numeric_limits<float>::min() << " to ";
  std::cout  << std::numeric_limits<float>::min() << ")" << std::endl;
  std::cout << std::endl;

  std::cout << "Double:\t\t\t" << "(" << std::numeric_limits<double>::min() << " to ";
  std::cout  << std::numeric_limits<double>::min() << ")" << std::endl;
  std::cout << std::endl;

  std::cout << "Long double:\t" << "(" << std::numeric_limits<long double>::min() << " to ";
  std::cout  << std::numeric_limits<long double>::min() << ")" << std::endl;
  std::cout << std::endl << std::endl << std::endl;

  //type casting - castomg from one data type to another
  // e.g. cast from a float to an int or cast from and int to a float, and so on...

  int i = 0;
  float f = (float) i; // casts i to a float
  std::cout << "i = " << i << std::endl;
  std::cout << "f = " << std::fixed << f << std::endl;

  float f2 = 3.1415;
  int i2 = (int) f2;
  std::cout << "f2 = " << std::fixed << f2 << std::endl;
  std::cout << "i2 = " << i2 << std::endl;
  }