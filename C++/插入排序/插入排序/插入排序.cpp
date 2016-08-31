#include <iostream>

void insert_sort(int *p, int n){
	for (int i=1;i<n;i++){
		int temp=*(p+i); //a[i]
		int j;
		for (j=i-1; (j>=0)&&(*(p+j)>=temp);j--){
			*(p+j+1)=*(p+j);
		}
		*(p+j+1)=temp;
	}
}

void main(){
	int arr[5]={2,1,6,3,5};
	insert_sort(arr,5);
	for (int i=0;i<5;i++)
		std::cout<<arr[i]<<std::endl;

}