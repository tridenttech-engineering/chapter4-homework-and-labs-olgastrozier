// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  double beginningBalance = 0.0; 
  double deposits = 0.0;
  double withdrawals = 0.0;
  double endingBalance = 0.0;
  cout << "Enter the beginning balance "; //enter beginningBalance
  cin >> beginningBalance;
  cout << "Enter total deposits: ";
  cin >> deposits;
  cout << "Enter total withdrawals: ";
  cin >> withdrawals;
 
  endingBalance = beginningBalance + deposits - withdrawals; //calculate saving account balance
 
  cout << "Ending balance: $" << endingBalance << endl; //display ending balance

  return 0;
} // end of main function