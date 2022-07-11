#include<bits/stdc++.h>
using namespace std;
struct Array{
	int A[10];
	int size;
	int length;
};


//Display the array
void display(struct Array arr){
for(int i= 0 ; i< arr.length; ++i){
    cout<<arr.A[i]<<" ";
}
}

//Add new element : Insert an element
void insert(struct Array *arr, int element){
	arr->A[arr->length] = element;
	arr->length++;
}


int main()
{

 	struct Array Arr;
	cout<<"Enter the number which u want to enter\n";
	int n; 
	cin>>n;
	Arr.length = n;
	for(int i = 0 ; i<Arr.length;++i){
		cin>>Arr.A[i];
	}
	
	display(Arr);
	insert(&Arr,90);
	cout<<endl;
	display(Arr);
	
 	return 0;
}


