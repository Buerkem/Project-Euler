# include <iostream>
using namespace std;
/*PROBLEM
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/
int main()
{
int num=2;
for (int i=1;i <=20; i++){
    if (num%i != 0){
        num++; i=1;
    }
}
cout<<num;
}
