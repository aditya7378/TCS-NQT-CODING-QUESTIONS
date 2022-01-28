#include <iostream>
using namespace std;
#include<vector>

int main() {
  cout<< "Enter No of Elements U want to Enter"<<endl;
  int n;
  cin >> n;
  int a[n];
cout<< "Enter Elements of the Array"<<endl;
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  int num=0;
  for(int i=1; i<n; i++){
    if(a[i] < a[num] )
    {
      num = i;
    }
  }

  cout << "The Smallest Number is : " << a[num] << endl;
}