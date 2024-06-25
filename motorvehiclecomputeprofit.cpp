#include <iostream>
using namespace std;

int main()
{
  int buyingprice,sellingprice,profit;

  //input buying price
  cout<<"Enter the buying price of motor vehicle =";
  cin >>buyingprice;
  //Input selling price
  cout<<"Enter selling price of motor vehicle =";
  cin >> sellingprice;

  //compute profit
  profit = sellingprice - buyingprice;


  //display profit
  cout << "Profit received from selling the motor vehicle is = " << profit << endl;

  
  return 0;
  


}