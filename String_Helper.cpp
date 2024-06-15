#include <bits/stdc++.h>
using namespace std;

string leReString(int x){
    // way1
    // char s[50];
    // return (itoa(x, s, 10));

    // way2
    // return to_string(x);

    // way3
    // stringstream ss;
    // ss << x;
    // return ss.str();
}

int leReInt(string s){
    // way1  
    // use **atol** for long integer
    // char str[50];
    // for(int i=0; i<s.length(); i++){
    //     str[i] = s[i];
    // }
    // return atoll(str);

    // way2
    // return stoll(s, nullptr, 16);
    // return stoi(s, nullptr, 16);
    
}
 
void solve(){
    int intInput = 10;
    string stringOutput = leReString(intInput);
    cout<<stringOutput<<endl;

    string hola = "99999";
    int hihi = leReInt(hola);
    cout<<hihi<<endl;
}
 
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}
