#include <iostream>

using namespace std;
int suma(int x){
    int y;
    cout<<"Ingrese Un dato ";
    cin>>y;
    int w=x+y;
    return w;
}
int main()
{
    int x=3;
    int y=suma(x);
    cout<<"El resultado es:"<<y<<endl;

    if (y>12){
        y=13;
        cout<<y<<endl;
    }else if(y<12){
        y=1;
        cout<<y<<endl;
    }else{
        y=15;
        cout<<y<<endl;
        return 0;
    }
    return 0;
}
