// write your code here
//Kourtney Smith J00951715 Nov/9/2022
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  int n;
  
  cin >> n;
  if ( n>= 1 && n <= 1000) {
    if (n==2||n==3||n==5||n==7||n==11||n==13||n==17||n==19||n==23||n==29||n==31||n==47)
    cout << "Number " << n <<" is prime!"<< endl; }
  

    if (n%2==0 && n!= 2) {cout <<"2"<< " ";}
    if (n%3==0 && n!= 3) {cout <<"3"<< " ";}
    if (n%5==0 && n!= 5) {cout <<"5"<< " ";}
    if (n%7==0 && n!= 7) {cout <<"7"<< " ";}
    if (n%11==0 && n!= 11) {cout <<"11"<< " ";}
    if (n%13==0 && n!= 13) {cout <<"13"<< " ";}
    if (n%17==0 && n!= 17) {cout <<"17"<< " ";}
    if (n%19==0 && n!= 19) {cout <<"19"<< " ";}
    if (n%23==0 && n!= 23) {cout <<"23"<< " ";}
    if (n%29==0 && n!= 29) {cout <<"29"<< " ";}
    if (n%31==0 && n!= 31) {cout <<"31"<< " ";}
  if (n%47==0 && n!= 47) {cout <<"47"<< " ";}
    

  cout << endl <<endl;

  return 0;}
  
