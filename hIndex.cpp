#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

vector<int> GetHIndexScore(vector<int> citations_per_paper) {
  vector<int> h_index;

  // ANSWER BELOW 
  int index = 1;
  int count = 0;
  h_index.push_back(index);
  for(int i = 1; i<citations_per_paper.size(); i++){
    for(int j = i; j >= 0; --j){
      if(citations_per_paper[j] > index){
        count ++;
      }
    }
    if(count > index){
      index ++;
      count = 0;
      h_index.push_back(index);
    }else{
      h_index.push_back(index);
      count = 0;
    }
  }
  return h_index;
}

int main() {
  int tests;
  cin >> tests;
  for (int test_case = 1; test_case <= tests; test_case++) {
    // Get number of papers for this test case
    int paper_count;
    cin >> paper_count;
    // Get number of citations for each paper
    vector<int> citations(paper_count);
    for (int i = 0; i < paper_count; i++) {
      cin >> citations[i];
    }
    vector<int> answer = GetHIndexScore(citations);
    cout << "Case #" << test_case << ": ";
    for (int i = 0; i < answer.size(); i++) {
      cout << answer[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
