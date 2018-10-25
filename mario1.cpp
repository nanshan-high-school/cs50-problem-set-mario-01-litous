#include <iostream>
using namespace std;
int main() {
  int a,b,c,d,h ;
  cout <<"請輸入數字:" ;
  cin >>h ;
    if(h < 9 && h > 0) {
    for (int a = 0; a <h; a++) {
    for (int b = h; b >a; b--) {
    cout <<" ";
    }
    for (int b = 0;b <=a; b++){
    cout <<"#";
    }
    cout <<"\n";
    }
  cout << "高度:" << h << "\n";
}
    else {
  cout << "高度大於8或小於1\n";
  }
}
