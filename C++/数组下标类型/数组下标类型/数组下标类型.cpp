#include <iostream>
#include <vector>
void main(){
	const int size=10;
	int arr[size]={0,1,2,8,4,5,6,7,8,9};
	/*for (int i=0;i<10;i++)
		std::cout<<arr[i]<<std::endl;//�����±����ʱһ�㶨���size_t������ʵ����intҲ���ԡ�
	for (size_t i=0;i<size;i++)
		std::cout<<arr[i]<<std::endl;*/
	std::vector<int> vec;
	for (int i=3;i<size;i++)
		vec.push_back(i);
	for (int j=0;j<7;j++)
		std::cout<<vec[j]<<std::endl;//�������±����Ҳ���Զ����int��

}