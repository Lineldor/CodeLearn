#include <iostream>
#include <string>
#include <vector>

void swap(std::string &s, std::string::size_type i, std::string::size_type j){
	char temp;
	temp=s[i];
	s[i]=s[j];
	s[j]=temp;
}

void perm(std::string &s, std::string::size_type start, std::string::size_type end, std::vector<std::string> &s_out){
	if (start==end)
		s_out.push_back (s);
	else {
		for (auto i=start; i<=end; i++){
			swap(s, i, start);
			perm(s, start+1,end,s_out);
			swap(s, i, start);
		}

	}

}

int main(int argc, char **argv){
	std::vector<std::string> s_out;
	std::string s;
	std::cin>>s;
	perm(s,0,s.size()-1,s_out);
	for(auto &i:s_out)
		std::cout<<i<<std::endl;

}