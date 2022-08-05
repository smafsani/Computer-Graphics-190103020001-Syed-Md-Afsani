#include <bits/stdc++.h>
using namespace std;
int main(){
    float b, a, r, x, y;
    cout<<"Enter center and radius:"<<endl;
    cin>>a>>b>>r;
    x = 0;
    y = r;
    cout<<"(x, y)"<<endl<<"-----"<<endl;
    cout<<"("<<a<<", "<<b+r<<"),"<<endl;
    cout<<"("<<a<<", "<<b-r<<"),"<<endl;
    cout<<"("<<a+r<<", "<<b<<"),"<<endl;
    cout<<"("<<a-r<<", "<<b<<"),"<<endl;
    //cout<<endl;

    float d = 3 - 2 * r;
    while(x < y){
        if(d < 0){
            d += (4 * x) + 6;
        }
        else{
            d += 4 * (x - y) + 10;
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
