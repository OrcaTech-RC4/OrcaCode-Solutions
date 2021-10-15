#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <iterator>
#include <set>
#include <sstream>
#include <list>
#include <unordered_set>

using namespace std;


bool checkValid(int x, int y, vector<string> &territory){
   if (x < territory.size() && y < territory[0].length() && x > -1 && y > -1){
      return true;
   }
   return false;
}

void floodFill(int x, int y, vector<string> &territory){
   if (!checkValid(x, y, territory)) return;
   if (territory[x][y] != '-') return;
   //cout << x << " " << y << "\n";
   territory[x][y] = '#';

   floodFill(x+1, y, territory);
   floodFill(x-1, y, territory);
   floodFill(x, y-1, territory);
   floodFill(x, y+1, territory);

   return;
}

int main(){
   ios::sync_with_stdio(false); cin.tie(NULL);
   //freopen("input.in", "r", stdin);
   int row, column, count;
   int testCase = 1;
   while(cin >> row){
      cin >> column;
      count = 0;
      string temp;
      vector<string> territory;
      for (int q=0; q<row; q++){
         cin >> temp; territory.push_back(temp);
      }
      for (int w=0; w<row; w++){
         for (int e=0; e<column; e++){
            if (territory[w][e] == '-'){
               floodFill(w, e, territory);
               count += 1;
            }
         }
      }
      cout << "Case " << testCase << ": " << count << "\n";
      testCase += 1;
   }
}
