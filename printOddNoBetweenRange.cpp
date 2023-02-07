#include<iostream>
using namespace std;


int count = 0;
int printOdd(int low, int high){
    for(int i = low; i <= high; i++){
        if(i % 2 == 1){
            // cout<<i<<endl;
        count++;
        } 
    }
     return count;
}

int main()
{

int ans = printOdd(2, 10);
cout<<"Print Odd Number in 2 to 10 Rnage = "<<ans<<endl;



 return 0;
}