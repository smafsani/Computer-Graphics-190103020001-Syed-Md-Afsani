#include <bits/stdc++.h>
using namespace std;
int main(){
    float a, b, r, x, y;
    cout<<"Enter center and radius => a b r:"<<endl;
    cin>>a>>b>>r;
    x = 0;
    y = r;
    cout<<"(x, y)"<<endl<<"-----"<<endl;
    cout<<"("<<a<<", "<<b+r<<"),"<<endl;
    cout<<"("<<a<<", "<<b-r<<"),"<<endl;
    cout<<"("<<a+r<<", "<<b<<"),"<<endl;
    cout<<"("<<a-r<<", "<<b<<"),"<<endl;
    //cout<<endl;

    float p = 1 - r;
    while(x < y){
        if(p < 0){
            p += (2 * x) + 3;
        }
        else{
            p += 2 * (x - y) + 5;
            y--;
        }
        x++;
        cout<<"("<<x + a<<", "<<y + b<<"),"<<endl;
        cout<<"("<<x + a<<", "<<-y + b<<"),"<<endl;
        cout<<"("<<-x + a<<", "<<y + b<<"),"<<endl;
        cout<<"("<<-x + a<<", "<<-y + b<<"),"<<endl;
        if(x != y){
            cout<<"("<<y + a<<", "<<x + b<<"),"<<endl;
            cout<<"("<<y + a<<", "<<-x + b<<"),"<<endl;
            cout<<"("<<-y + a<<", "<<x + b<<"),"<<endl;
            cout<<"("<<-y + a<<", "<<-x + b<<"),"<<endl;
        }
        //cout<<endl;
    }


    return 0;
}
