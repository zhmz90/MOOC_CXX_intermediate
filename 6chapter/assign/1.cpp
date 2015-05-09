#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int maxABC(int,int,int);

int main(){

    int n;
    cin>>n;

    vector<int> R1(n);
    for (int i=0;i<n;i++)
        cin>>R1[i];
    //print array of inputs to test
    cout<<"***********************"<<endl;
    cout<<"the original array:"<<endl;
    for (auto e:R1)
        cout<<e<<" ";
    cout<<endl;
    cout<<"***********************"<<endl;

    vector<int> R2;    
//    int max_neg;
    int a1 = R1[0];
    int flag = a1>0 ? 1:-1;
    int cum=a1;
    int tmp;
    for (int i=1;i<n;i++){
        tmp = flag*R1[i];
        if (tmp>0){
            cum+=R1[i];
        
        }
        else{

            flag = flag*(-1);
            R2.push_back(cum);
            cum = R1[i];
        }
    }
    R2.push_back(cum);
    cout<<"****************"<<endl;
    cout<<"the merge array:"<<endl;
    for (auto e: R2)
        cout<<e<<" ";
    cout<<endl;
    cout<<"****************"<<endl;
    
    //find the longest segment
    int max,flag;
    int A1,A2,A3;
    if (R2.size()==1){
        if (R2[0]>=0)
            return R2[0]
        else{
            int max_neg=R1[0];
            for (int i=0;i<n;i++){
                if (R1[i]>max_neg){
                    max_neg=R1[i];
                }
            }
            return max_neg;
        }
        
    }
    else {
        if (R1.size()==2)
            return R2[0];
        else{
            A1 = R2[0];
            A2 = R2[1];
            A3 = R2[2];
            if (R2.size()==3){
                cout<<maxABC(A1,A2,A3,flag,max)<<endl;
                return 0;
            }
            int t=0;
            int l = R2.size();
            auto i = R2.begin();
            while (i<R2.end()-3){
                a
            
            
            }
                
              
            // last R[-2],R[-1]
            
        }
    }

    return 0;
}



void maxABC(int A1, int A2, int A3,int & flag, int & t){
    // A1,A2 >0 and A2<0
    // flag: -1--> A1, 0--> A3 1--> A1+A2+A3
    int a=A1,b=A2,c=A3;
    int B = abs(b);
    if (B<a && B< c){
        flag = 1;
        t += a+b+c;
    }
    else{
        a>c?t=a,flag=-1:t=c,flag=1;
    }

}
