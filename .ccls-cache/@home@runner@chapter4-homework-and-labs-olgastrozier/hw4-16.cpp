//Advanced16.cpp
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double salesStore1 = 0.0; //declare variables
  double salesStore2 = 0.0;
  double totalSales=0.0; 
  
  cout << "Sales amount for store 1: "; //enter input item
  cin >> salesStore1;
  cout << "Sales amount for store 2: ";
  cin >> salesStore2;
  
  totalSales = salesStore1 + salesStore2; //calculate  total
  
  cout << fixed << setprecision(2);
  cout << "Commission: $" << totalSales << endl;
  
  return 0;
}	//end of main function

//1.  Declare and initalize three int variables named store1Int, store2Int, and totalInt
//2.  Change the first assignment statement to store1Int = static_cast<int>(store1 * increase * 100 + .5);
//3.  Change the second assignment statement to store2Int = static_cast<int>(store2 * increase * 100 + .5);
//4.  Change the third assignment statement to totalInt = store1Int + store2Int;
//5.  Change store1 in the second cout statement to store1Int / 100.0
//6.  Change store2 in the third cout statement to store2Int / 100.0
//7.  Change total in the last cout statement to totalInt / 100.0
