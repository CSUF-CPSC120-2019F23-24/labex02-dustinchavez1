// Name: Dustin Chavez
// This program calculates the tax and tip on a restaurant bill.
#include <iostream>

int main()
{
  double tax = 1.0775;
  double tip = 1.20;
  double grand_total, dollars;

  //  Calculates cost of Restaurant bill
  std::cout << "What is the cost of the meal? ";
  std::cin >> dollars;
  // Cost with tip and tax
  grand_total = dollars * tax * tip;

  // Display total Cost
  std::cout << "The \"grand total\" of the meal is "<< grand_total << " dollars\n";

  return 0;
  
}
