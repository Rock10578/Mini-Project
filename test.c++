# include <bits/stdc++.h>
using namespace std;
int main(){
	int i;
	signed long int p=1,n;
    cout<<"Enter size of Array : ";
	cin>>n;
	int A[n];
    cout<<"Enter numbers \n";
	for (i=0; i<n; i++){
		cin>>A[i];
		p*=A[i];
	}cout<<"Product = "<<p<<endl;
	return 0;
}