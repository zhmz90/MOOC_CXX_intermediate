#include<iostream>




using namespace std;



int main(){
    
    int n;
    cin>>n;
    int *ptr,*p_1,*p_2;
    int chain_p=0,old_p=0,chain_n=-999999999;
    bool pos = false;
    ptr = new int[n];
    p_1 = new int[n];
    for (int i=0;i<n;i++){
        cin>>*(ptr+i);
        
    }
    int tmp=0,sum=0;
    int flag = 1,counter=0;
    // initilize pbp array
    for (int i=0;i<n;i++){
        tmp = ptr[i]*flag; 
        if (tmp>0){
            sum+=ptr[i];
        }
        else{
            p_1[counter++] = sum;
            sum = ptr[i];
        }
        
    }
    for (int i=0;i<n;i++){
        
        if (*(ptr+i) >=0){
            pos = true;
            chain_p+=ptr[i];
        }
        else{
            if (ptr[i] > chain_n){
                
                chain_n = ptr[i];
            }
            if (chain_p>old_p){old_p=chain_p;}
            chain_p = 0;
        }
//      cout<<"chain_p"<<chain_p<<" chain_n"<<chain_n<<endl;
    }

    if (pos){
    
        cout<<(chain_p>old_p?chain_p:old_p);
    }
    else{
    
        cout<<chain_n;
    }

    return 0;
}
