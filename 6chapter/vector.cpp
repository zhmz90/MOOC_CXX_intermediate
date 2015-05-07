#include<iostream>
#include<vector>
#include<string>
using namespace std;

void F(){

    char str[7] = {'p','r','o','g','r','a','m'};
    cout<<str<<endl;
    string A = "Hello";
    string B = "world";
    cout<<A+B<<endl;
}


int main(){

    vector<int> v = {1,2,3};
    for (auto i=v.begin(); i!=v.end();++i){
    
        cout<<*i<<endl;
    }
    for (auto e:v){
        cout<<e<<endl;
    }
    F();
    return 0;
}
