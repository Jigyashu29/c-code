#include<iostream>
using namespace std;

inline float add(float a, float b){
    return a+b;
}

inline float sub(float a, float b){
    return a-b;
}  

inline float mul(float a, float b){
    return a*b;
}  
 
inline float divde(float a, float b){
    return a/b;
}

int main(){
    
    float a,b;
    char select;

    cout<<"enter value a"<<endl;
    cin >> a;

    cout<<"enter value b"<<endl;
    cin >> b;

    cout<<"select operation"<<endl;
    cin >> select;

    switch(select){
        
        case '+':
        cout<<"result ="<<add(a,b);
        break;

        case '-':
        cout<<"result ="<<sub(a,b);
        break;

        case '*':
        cout<<"result ="<<mul(a,b);
        break;

        case '/':
        cout<<"result ="<<divde(a,b);
        break;

        default:
        cout<<"invalid input"<<endl;
    }
    return 0;
}

