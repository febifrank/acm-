#include <iostream>
using namespace std;
//git测试
int main(){
    int T,i;
    cin>>T;
    long long *p = new long long[T];
    for(i=0;i<T;i++)
        cin>>p[i];
    for(i=0;i<T;i++)   
        cout<<p[i]%100000+6*100000<<endl;
        
    
    return 0;
}