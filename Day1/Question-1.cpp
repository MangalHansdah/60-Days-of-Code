//Sum of all array elements
#include<bits/stdc++.h>
using namespace std;

int main(){
    int array[20];
    int a,sum=0;
    cout <<"Enter a number for number of element you want to enter in an array:-";
    cin >> a;
    for(int i=0;i<a;i++){
        cin >> array[i];
        sum+=array[i];
    }
    cout <<sum <<endl;
    return 0;
}