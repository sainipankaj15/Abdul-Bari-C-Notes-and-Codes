#include<bits/stdc++.h>
using namespace std;


// a , b, c would be value like 1 2 3 
// 1 means A piller
// 2 means B piller 
// 3 means C piller 
int TOH(int n, int a, int b , int c){
    if(n>0)
   {
       TOH(n-1,a,c,b);
       cout<<"From "<<a<<" to "<<c<<endl;
       TOH(n-1,b,a,c);
   }
}


int main(){
    
    TOH(0,1,2,3);
    return 0;
}