#include <iostream>
using namespace std;

void reset(int * &i){
    i[1]=1200;
}

int main()
{
    int p[5]={2,1,2,3,4};
    reset(p);
    for(int i=0;i<5;++i){
        cout<<p[i]<<endl;
    }
    return 0;
}

