#include<iostream>

using namespace std;

int main(){
    void *ptr;
    int  i = 5;
    ptr = &i;
    int *pint = static_cast<int *>(ptr);
    cout<<"*pint="<<*pint<<endl;


    return 0;
}
