#include<iostream>

using namespace std;

int main(){

    int array[3] = {1,2,3};
    for (int & atom:array){
    
        atom+=2;
    }
    for(int &i:array){
    
        cout<<i<<endl;
    }

    return 0;
}
