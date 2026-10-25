#include <iostream>
#include<cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, ".65001");
    double sum{0};
    const double e = 2.71828182845904523536;
    for(int i = 1; i <= 7; ++i){
        double an = (i*i)*pow(e, -sqrt(i));
        sum += an;
    }
    cout << "Сумма 7 членов ряда равна " << sum;
    return 0;
}








// #include <iostream>
// #include<vector>
// #include<math.h>

// using namespace std;


// int main(){
//     int n, k;
//     cin >> n >> k;
//     vector<int> v(n);
//     v.clear();
//     for(int i = 1; i <= n; i++){
//         v.push_back(i);
//     }
//     int t = k;
//     for(int i = 0; i < n-1; ++i){
//         v.erase(v.begin()+t-1);
//         t += k;
//     }
//     for(int i : v) cout << i << ' ';
// }   

// int prost(int a){
//     if(a % 2 == 0 && a != 2 || a == 1) return false;
//     for(int i = 3; i < floor(sqrt(a)) +1; i+=2){
//         if(a % i == 0) return false;
//     }
//     return true;
// }

// int main(){
//     int a, b;
//     cin >> a >> b;
//     for(int i = a; i <= b; ++i){
//         if(prost(i)) cout << i << ' ';
//     }
// }




// long long int gcd(long long int n, long long int m){
//     while(m != 0){
//        long long int tmp = m;
//         m = n%m;
//         n = tmp;
//     }
//     return n;
// }
// long long int lcm(long long int n, long long int m){
//     return (n/gcd(n, m))*m;
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<long long int> v(n);
//     for(int i = 0; i < n; ++ i){
//        long long int x, y;
//         string s;
//         cin >> s;
//         if(s == "NOD"){
//             cin >> x >> y;
//             v[i] =gcd(x, y);
//         }
//         else {
//             cin >> x >> y;
//             v[i] = lcm(x, y);     
//         }
//     }
//     for(int i = 0; i < n; ++i){
//         cout << v[i] << '\n';
//     }

// }



// int poisk(vector<int> &v, int n){
//     if(v.empty()) return -1;

//     int l{0}, r = v.size()-1;
//     while(l <= r){
//         int m = l + (r - l)/2;
//         if(v[m] == n){
//             if(v[m - 1] == n) return m-1;
//             return m;
//         }
//         if(v[m] > n){
//             r = m-1;
//         }
//         else{
//             l = m+1;
//         }
//     }
//     return -1;
// }

// int main(){
//     int n;
//     cin >> n ;
//     vector<int> v(n);
//     for(int i = 0; i < n; ++ i){
//         cin >> v[i];
//     }

//     int m;
//     cin >> m;
//     vector<int> vm(m);
//     for(int i = 0; i < m; i++){
//         cin >>vm[i];
//     }
//     for(int i : vm){
//         if(poisk(v, i) != -1) cout << poisk(v, i)+1 << ' ';
//         else cout << poisk(v, i) << ' ';
//     }
// }