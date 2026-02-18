#include <iostream>
using namespace std;

long long factorial(int n){
    if(n<0) return -1;
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}

long long nPr(int n,int r){
    if(r>n||r<0) return 0;
    return factorial(n)/factorial(n-r);
}

long long nCr(int n,int r){
    if(r>n||r<0) return 0;
    return factorial(n)/(factorial(r)*factorial(n-r));
}