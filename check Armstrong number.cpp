//------------------check armstrong of num---------------------------------
/* the sum of the cube of the digit of a numbers is equal to a number
is called armstrong of number ex- 153*/
#include<iostream>
using namespace std;

int main(){
    int n , r , sum =0 , m;
    cout<<"enter the value of n"<<endl;
    cin>>n;
        m=n;

    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(sum==m)
    cout<<"armstrong num"<<endl;
    else
    cout<<" not armstrong num "<<endl;
    
    return 0;
}
