/*#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cstring>
#include <iomanip>
#include <typeinfo>
#include <numeric>
using namespace std;

/*long long readint(){
    long long a=0;
    char c='0';
    while(c>='0'&&c<='9'){
        a=(a<<3)+(a<<1)+c-'0';
        c=getchar();
    }
    return a;
}

void writeint(long long d){
    if(d==0){
        putchar('0');
        return;
    }
    int len=0;
    char n[20];
    while(d>0){
        n[len]=d%10+48;
        len++;
        d/=10;
    }
    for(int i=len-1;i>=0;i--) putchar(n[i]);
}

int main()
{
    //readint();
    //cout << readint() << endl;
    //int n;
    //cin >>n;
    //cout << writeint() << endl;
    writeint(readint());
}

inline int redi() {
    int ret = 0,f = 0;char ch = getchar();
    while (!isdigit (ch)) {
        if (ch == '-') f = 1;
        ch = getchar();
    }
    while (isdigit (ch)) {
        ret = ret*10  + ch - 48;
        ch = getchar();
    }
    return f?-ret:ret;
}
inline void print(int x) {
    if(x<0) {putchar('-');x=-x;}
    int y=10,len=1;
    while(y<=x)    {y*=10;len++;}
    while(len--){y/=10;putchar(x/y+48);x%=y;}
}

int main()
{
    print(redi());
}
*/
/*
int main()
{
    cout << "123" << endl;
    for (int i=0;i<10;i++){
        cout << "Hello" << endl;
    }
    return 0;
}*/

/*int main(){
    /*int num{16};//num=12
    int n{};//init n =0 and n{0}
    int a[10]{};
    float num2{13333.3333333333};
    auto num3={123};
    //memset(a,2,sizeof(a));
    //for (int i=0;i<10;i++){cout << a[i] <<endl;}
    //for (int i:a) cout << i << endl;
    //cout << num << ' '<< n << endl;
    //cout << sizeof num << endl;
    cout << scientific << num2 << endl;
    cout << hex << num << dec << num << endl;
    cout << oct << num << endl;
    cout << typeid(num2).name() << endl;
    cout << typeid(num3).name() << endl;*/
   /* cout << std::lcm(10, 20)  << endl;
}*/
#include <numeric>
#include <iostream>

namespace math {

    template <typename M, typename N>
    constexpr auto lcm(const M& m, const N& n) {
        return std::lcm(m, n);
    }

    template <typename M, typename ...Rest>
    constexpr auto lcm(const M& first, const Rest&... rest) {
        return std::lcm(first, lcm(rest...));
    }
}

auto main() -> int {
    std::cout << math::lcm(3, 6, 12, 36) << std::endl;
    return 0;
}