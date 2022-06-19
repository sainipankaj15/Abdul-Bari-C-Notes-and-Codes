#include<bits/stdc++.h>
using namespace std;

int sumOfNNumbers(int n){
    if(n==0)
    return 0;
    else
    return n+sumOfNNumbers(n-1);
}


int main(){
    
    cout<<sumOfNNumbers(17);
    return 0;
}