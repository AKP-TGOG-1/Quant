#include <iostream>
#include <random>
#include <vector>
using namespace std;

double simulate_two_dices(int trials){
    mt19937 rng(random_device{}());
    uniform_int_distribution<int> dist(1,6);
    int count_sum_7=0;
    for(int i=0;i<trials;i++){
        int die1=dist(rng);
        int die2=dist(rng);
        if(die1+die2==7){
            count_sum_7++;
        }
    }
    return static_cast<double> (count_sum_7)/trials;
}

double simulate_two_red(int trials){
    mt19937 rng(random_device{}());
    uniform_int_distribution<int> dist(0,9);//10 balls in total
    int success=0;
    for(int t=0;t<trials;t++){
        vector<int> balls={1,1,1,1,1,0,0,0,0,0};//1 is red , 0 is blue
        int first = dist(rng);
        int second;
        do{
            second = dist(rng);//we are doing this so that we dont pick the same ball twice , as it is without replacement
        } while(second==first);
        if(balls[first]==1 && balls[second]==1){//if both are 1 i.e, both are red
            success++;
        }
    }

    return static_cast<double> (success)/trials;
}