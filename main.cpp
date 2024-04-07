// to find the length of last word in a string from the keyboard

#include<iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
 
int main() { 
  string S; 
  cout<<"Enter a string:"; 
  getline(cin,S); 
  
  //istringstream iss("This  is a string");
  // constructing stream from the string
  stringstream ss(S);
  
  // variable to store token obtained from the original string
  string s;
  // declaring vector to store the string after split
  vector<string> v;

 // using while loop until the getline condition is satisfied
 // ' ' represent split the string whenever a space is
 // found in the original string
  while(getline( ss, s, ' ' )){
      v.push_back(s); 
  }
  cout<<endl;
  
  for (auto elm:v)
  {
      cout<<elm<<endl;
  }
  auto it=v.end()-1; //pointer of the last word in the string
  string lastworld=*it; 
  cout<<*it<<endl;
  cout<<lastworld.length()<<endl;
  
}
