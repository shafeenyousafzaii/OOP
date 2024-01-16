#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void dataa(string &x, int &y, int &z, int &q, double &tax, double &Ttax);
double taxAmount(const string &x, int &y, int &z, int &q, double &tax, double &Ttax);
int main()
{
  string M_status;
  int gross_salary, children, pension;
  double tax, Ttax;
  dataa(M_status, gross_salary, children, pension, tax, Ttax);
  return 0;
}
void dataa(string &x, int &y, int &z, int &q, double &tax, double &Ttax)
{
  cout << "Enter your Maritual Status" << endl;
  getline(cin, x);
  if (x == "married" || x == "Married")
  {
    cout << "How many chicldren do you have under the age of 14?" << endl;
    cin >> z;
    cout << "Combined salary of both spouses : " << endl;
    cin >> y;
    cout << "Enter the percentage you want to contribute to pension fund" << endl;
    cin >> q;
  }
  else if (x == "single" || x == "Single")
  {
    cout << "Enter your gross salary : " << endl;
    cin >> y;
    cout << "Enter the percentage you want to contribute to pension fund " << endl;
    cin >> q;
  }
  double totaltax;
  totaltax = taxAmount(x, y, z, q, tax, Ttax);
  cout << "Your total tax is : " << totaltax << setprecision(2) << endl;
}
double taxAmount(const string &x,  int  &y,  int &z,  int &q, double &tax, double &Ttax)
{
  const int personal_emp = 1500; 
  const int single_emp = 4000;
  const int Married_emp = 7000;
  int num_of_person;

  if (x == "married" || x == "Married")
  {
    num_of_person = 2 + z;
    tax = y - personal_emp - Married_emp - (personal_emp * num_of_person) - y * (q / 100);
  }

  else if (x == "single" || x == "Single")
  {
    num_of_person = 1;
    tax = y - personal_emp - single_emp - (personal_emp * num_of_person) - y * (q / 100);
  }

  if (tax >= 0 && tax <= 15000)
  {
    Ttax = tax * 0.15;
  }
  else if (tax > 15000 && tax < 4001)
  {
    Ttax = 2250 + (tax - 15000) * 0.25;
  }
  else if (tax > 40000)
  {
    Ttax = 8460 + (tax - 40000) * 0.35;
  }
  return Ttax;
}
