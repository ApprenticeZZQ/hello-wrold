#include <stdio.h>
#include <string>
using namesapce std;
class log_out_root{
public: 
	log_out_root();
	~log_out_root();
public:
	int func_one(int tmp1,int tmp2);
};
int log_func() {
	printf("log_func");
	
}
int log_func2(){
	printf("log_func2"_);
}
