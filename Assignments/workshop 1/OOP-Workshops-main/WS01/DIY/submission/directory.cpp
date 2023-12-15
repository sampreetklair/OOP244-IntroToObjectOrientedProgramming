// -----------------------------------------------------------
// Name: Sampreet Klair
// Student ID: sklair2@myseneca.ca
// Student Number: 145031225
// Date: 14th September, 2023
// Section: ZDD
// -----------------------------------------------------------

#include <iostream>
#include "Phone.h"
#include "Phone.h"  // this is intentional
using namespace sdds;
int main() {
   std::cout << "Enter the following Data:" << std::endl
      << "-------------------------------------------------------\n"
         "lukE\nsky\nfett\nfeT\nJack\n!\n"
         "-------------------------------------------------------\n";
   phoneDir("Star Wars", "phones.txt");
   std::cout << std::endl << "-------------------------------------------------------" << std::endl;
   phoneDir("Broken Phone Book", "badDataFile.txt");
   return 0;
}