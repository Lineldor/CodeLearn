#include <iostream>
#include <vector>
void main(){
	const int size=10;
	int arr[size]={0,1,2,8,4,5,6,7,8,9};
	/*for (int i=0;i<10;i++)
		std::cout<<arr[i]<<std::endl;//数组下标访问时一般定义成size_t，但事实发现int也可以。
	for (size_t i=0;i<size;i++)
		std::cout<<arr[i]<<std::endl;*/
	std::vector<int> vec;
	for (int i=3;i<size;i++)
		vec.push_back(i);
	for (int j=0;j<7;j++)
		std::cout<<vec[j]<<std::endl;//容器的下标访问也可以定义成int。

}