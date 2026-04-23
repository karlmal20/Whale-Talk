#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  string animals = "turpentine and turtles";
  vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  vector<char> result;
  for(int i = 0; i < animals.size(); i++){
    for(int v =0; v < vowels.size(); v++){
      if(animals[i] == vowels[v]){
        result.push_back(animals[i]);
      }
    }
    if((animals[i] == 'u') || (animals[i] == 'e')){
      result.push_back(animals[i]);
    }
  }
  for(int r = 0; r < result.size(); r++){
    cout << result[r];
  }
}
