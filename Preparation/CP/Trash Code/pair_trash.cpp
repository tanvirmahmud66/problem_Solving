#include<bits/stdc++.h>
using namespace std;


//-------main---------
int main(){

	int a[] = {1,2,3};
	int b[] = {2,3,4};

	//swap the first element with last element in first array and track in second array using pair
	pair<int,int> p_array[3];
	p_array[0] = {1,2};
	p_array[1] = {2,3};
	p_array[2] = {3,4};

	swap(p_array[0],p_array[2]);

	cout<<"Before swaping: "<<endl;
	for(int i=0;i<3;++i){
		cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
	}
   
    

	return 0;
}	