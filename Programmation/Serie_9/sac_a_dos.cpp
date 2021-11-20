#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
  
struct Object {
  double weight;
  double value;
};
  
void solve_naive(vector<Object> const& objects, double remaining_weight){
  double value(0.0);
  for (auto const& object : objects) {
    cout << "considering : w=" << object.weight << ", v=" << object.value;
    if (object.weight <= remaining_weight) {
      value += object.value;
      remaining_weight -= object.weight;
      cout << " --> taking";
    }
    cout << endl;
  }
  cout << "value = " << value << ", remaining weight = " << remaining_weight << endl;
}
  
bool higher_value(Object const& o1, Object const& o2)
{ return o1.value > o2.value; }
  
void solve_greedy(vector<Object> const& objects, double maximum_weight){
  vector<Object> sorted_objects(objects); // need a copy to sort
  sort(sorted_objects.begin(), sorted_objects.end(), higher_value);
  solve_naive(sorted_objects, maximum_weight);
}
  
double solve_exact_recursive(vector<Object> const& objects, size_t start, double& remaining_weight){
  double best_value(0.0);
  if ((not(objects.empty())) & (start < objects.size())) {
    double best_remaining_weight(remaining_weight);
    best_value = solve_exact_recursive(objects, start+1, best_remaining_weight);
    if (objects[start].weight <= remaining_weight) {
      double weight(remaining_weight - objects[start].weight);
      const double value(objects[start].value + solve_exact_recursive(objects, start+1, weight));
      if (value > best_value) {
        best_remaining_weight = weight;
        best_value = value;
      }
    }
    remaining_weight = best_remaining_weight;
  }
  return best_value;
}
  
void solve_exact(vector<Object> const& objects, double remaining_weight){
  double value(solve_exact_recursive(objects, 0, remaining_weight));
  cout << "value = " << value << ", remaining weight = " << remaining_weight << endl;
}
  
int main(){
  const vector<Object> objects({
      { 4.0,  8.0 },
      { 2.0,  3.0 },
      { 5.0,  7.0 },
      { 6.0, 10.0 },
  });
  constexpr double MAX(9.0);
  solve_naive (objects, MAX);
  solve_greedy(objects, MAX);
  solve_exact (objects, MAX);
  
return 0;
}