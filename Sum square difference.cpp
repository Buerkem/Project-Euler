# include <iostream>
# include <cmath>
//Practicing with recursion
using namespace std;

int sumsquares(int n){
    if (n == 1){
        return 1;
    }
    else{
        return pow(n,2) + sumsquares(n-1);
    }
}

int squaresum(int n){
    int sum=n*(n+1)/2; //From series and sequence
    return pow(sum,2);

    }

int main(){
cout<<squaresum(100)-sumsquares(100)<<endl;
}
