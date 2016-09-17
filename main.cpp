#include <iostream>       // std::cout
#include <stack>          // std::stack

using namespace std;
int main(){


int n;
//cout<<"so xe";
cin>>n;

while(n!=0)
{
stack<int> mystack;
int cnt = 1;
bool ok = true;
int arr[n];

for(int i=0; i<n; i++){
cin>>arr[i];
}

for (int i = 0; i < n; i++) {
	while (!mystack.empty() &&mystack.top() == cnt) {
		cnt++;
		mystack.pop();
	}
	if (arr[i] == cnt) {
		cnt++;
	} else if (!mystack.empty() && mystack.top() < arr[i]) {
		ok= false;
		break;
	} else {
		mystack.push(arr[i]);
	}
}
if (ok) cout << "yes"<<endl;
else cout << "no"<<endl; cin>>n;
}
return 0;
}
