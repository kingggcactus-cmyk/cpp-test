#include <iostream>
using namespace std;

int main()
{
   double height, weight;
   cout << "請輸入體重" << endl;
   cin >> weight;
   cout << "請輸入身高" << endl;
   cin >> height;
   double h = height/100;
   double BMI = weight/(h*h);
   cout << "您的BMI值為" << BMI << endl;

   if (BMI < 18.5)
   {
      cout << "體重過輕" << endl;
   }
   else if (BMI < 24)
   {
      cout << "體重標準" << endl;
   }  
   else 
   {
      cout << "體重過重" << endl;
   }
return 0;

}