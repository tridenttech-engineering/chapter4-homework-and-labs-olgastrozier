// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  
  int smallPizza = 0;
  int mediumPizza = 0;
  int largePizza = 0;
  int familyPizza = 0;
  int totalPizza = 0;

  double smallPizzaPercent;
  double mediumPizzaPercent;
  double largePizzaPercent;
  double familyPizzaPercent;
  
  

  cout << "Enter the number of small pizzas sold: "; // ask user for number of pizzas sold
  cin >> smallPizza; // enter number of pizzas sold
  cout << "Enter the number of medium pizzas sold: ";
  cin >> mediumPizza;
  cout << "Enter the number of large pizzas sold: ";
  cin >> largePizza;
  cout << "Enter the number of family pizzas sold: ";
  cin >> familyPizza;
  
  totalPizza = smallPizza + mediumPizza + largePizza + familyPizza; // calculate total pizzas sold

  
  smallPizzaPercent = <double>(smallPizza) / totalPizza * 100; // calculate percentage of pizzas sold
  mediumPizzaPercent = static_cast<double>(mediumPizza) / totalPizza * 100;
  largePizzaPercent = static_cast<double>(largePizza) / totalPizza * 100;
  familyPizzaPercent = static_cast<double>(familyPizza) / totalPizza * 100;
  
  cout << "Total pizzas sold: " << totalPizza << endl; // display total pizzas sold
  
  cout << "Small pizzas sold: " << smallPizza << " (" << smallPizzaPercent << "%)" << endl; // display pizzas sold and percentage
  cout << "Medium pizzas sold: " << mediumPizza << " (" << mediumPizzaPercent << "%)" << endl;
  cout << "Large pizzas sold: " << largePizza << " (" << largePizzaPercent << "%)" << endl;
  cout << "Family pizzas sold: " << familyPizza << " (" << familyPizzaPercent << "%)" << endl;
  return 0;
    
} // end of main function