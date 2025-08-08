#include<iostream>>
using namespace std;

int main(){


    int num=3;
    char ch='A';

    for(int i=0;i<num;i++){
       for(int j=0; j<num;j++){
        cout<< ch++<<" ";
       }
       cout<<endl;
    }

}