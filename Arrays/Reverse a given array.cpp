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

  int l=0,h=n-1;
  int temp=0;
  while(l<=h)
  {
    temp = a[l];
    a[l] = a[h];
    a[h] = temp;
    l++;
    h--;
  }

  for(int i=0; i<n; i++){
    cout <<  a[i] << " ";
  }
}