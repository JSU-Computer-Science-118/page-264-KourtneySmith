// write your code here
//Kourtney Smith J00951715 Nov/9/2022
#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
int prime_num[11] = { 2,3,5,7,11,13,17,19,23,29,31 };
int num, iter, c;
cin >> num;
c = 0;
for (iter = 0; iter<11; iter++){
if (num%prime_num[iter] != 0 || num==prime_num[iter]){
c++;
}}
if (c == 11)
cout << "Number " << num <<" is prime!"<< endl;
else
{
for (iter = 0; iter<11; iter++)
{
if (num%prime_num[iter] == 0)
cout << prime_num[iter] << " "<< endl;
}
cout << "\n" << endl;
}
return 0;
  }
