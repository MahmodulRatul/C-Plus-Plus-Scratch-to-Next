#include<iostream>
using namespace std;

string encode(string s, int j) {
   int i;
   while(true)
   {(for (i=0;i<s.length();i++)
      {s[i] = s[i] + j;
      i++;}
   return (s);
}}

int main() {
   string p; int j=2;
   cout<<"\nEnter the String to be Encode : ";
   cin>>p;
   p = encode(p,j);
   cout<<"\nEncoded String : "<< p <<endl;
}
