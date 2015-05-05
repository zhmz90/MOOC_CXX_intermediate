#include<iostream>

using namespace std;

int main(){
    const char key[] = {'a','c','b','a','d'};
    const int NUM_QUES = 5;
    char c;
    int ques = 0,numCorrect=0;
    cout<<"Enter the "<<NUM_QUES<<" Question tests:"<<endl;
    cout<<"key[100]:"<<key[10]<<endl;
    while (cin.get(c)){
        if (c!='\n'){
            cout<<"ques: "<<ques<<endl;
            if (c == key[ques]){
                numCorrect+=1;
                cout<<" ";
            }
            else{
                cout<<"*";
            }
            ques++;
        }
            
        else{
            cout<<" Score "<<static_cast<float>(numCorrect)/NUM_QUES*100<<"%";
            ques=0;
            numCorrect=0;
            cout<<endl;
        }
    
        
    
    }
    return 0;
}
