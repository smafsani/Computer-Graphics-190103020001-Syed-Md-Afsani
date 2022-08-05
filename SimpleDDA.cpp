#include <bits/stdc++.h>
using namespace std;
int main(){
    int x1, x2, y1, y2, temp;
    float m, x, y;
    cout<<"Enter x1 y1 x2 y2:"<<endl;
    cin>>x1>>y1>>x2>>y2;
    m = (float)(y2 - y1)/(float)(x2 - x1);
    if(x1 != x2 || y1 != y2){
        cout<<"(x, y)"<<endl<<"------"<<endl;

        // if abs(m) < 1
        if(abs(m) < 1){
            if(x2 < x1){
                swap(x1, x2);
                y = (float)y2;
            }
            else{
                y = (float)y1;
            }
            cout<<"("<<x1<<", "<<round(y)<<")"<<endl;
            while(x1 < x2){
                x1++;
                y += m;
                cout<<"("<<x1<<", "<<round(y)<<")"<<endl;
            }
        }

        // if abs(m) > 1
        else{
            if(y2 < y1){
                swap(y1, y2);
                x = (float)x2;
            }
            else{
                x = (float)x1;
            }
            cout<<"("<<round(x)<<", "<<y1<<")"<<endl;
            while(y1 < y2){
                y1++;
                x += (1/m);
                cout<<"("<<round(x)<<", "<<y1<<")"<<endl;
            }
        }

    }
    return 0;
}
