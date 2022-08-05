#include <bits/stdc++.h>
using namespace std;
int main(){
    int x1, x2, y1, y2, dx, dy, x, y;
    cout<<"Enter x1 y1 x2 y2:"<<endl;
    cin>>x1>>y1>>x2>>y2;
    if(x2 < x1){
        swap(x1, x2);
        swap(y1, y2);
    }
    dx = x2 - x1;
    dy = y2 - y1;
    x = x1;
    y = y1;

    int dt, ds, d;
    d = (2 * dy) - dx;
    dt = 2 * (dy - dx);
    ds = 2 * dy;

    cout<<"(x, y)"<<endl<<"-----"<<endl;
    cout<<"("<<x<<", "<<y<<")"<<endl;
    while(x < x2){
        x++;
        if(d < 0){
            d = d + ds;
        }
        else{
            y++;
            d = d + dt;
        }
        cout<<"("<<x<<", "<<y<<")"<<endl;
    }


    return 0;
}
