#include <iostream>
using namespace std;


int main() {
  cout<< "Enter No of Elements U want to Enter"<<endl;
  int n;
  cin >> n;
  int a[n];
  cout<< "Enter Elements of the Array"<<endl;
  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  int sum=0;
  for(int i=0; i<n; i++){
    sum = sum+a[i];
  }
  cout << "The sum of all Array elements is : " << sum << endl;
}