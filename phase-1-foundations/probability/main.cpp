#include <iostream>
using namespace std;

long long nCr(int n,int r);
long long nPr(int n,int r);
double simulate_two_dices(int trials);
double simulate_two_red(int trials);

int main(){
    cout<<"Testing Combinatorics\n";

    cout<<"5C2 = " <<nCr(5,2)<<endl;
    cout<<"6P2 = " <<nPr(6,2)<<endl;

    cout<<"\nTheoretical Probability (2 red from 5 red, 5 blue):\n";
    double theoretical = static_cast<double> (nCr(5,2))/nCr(10,2);
    cout<<theoretical<<endl;

    int trials = 1000000;

    cout<<"\nSimulated Dice P(sum=7):\n";
    cout<<simulate_two_dices(trials) <<endl;

    cout<<"\nSimulated P(2 red balls):\n";
    cout<<simulate_two_red(trials) <<endl;

    return 0;
}