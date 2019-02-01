#include <iostream>
using std::cout;
using std::endl;

template <class F>
void test_p(F f){

	int a[5]={1, 11, 111, 1111, 11111};

	int *p = a;
	f(p);


}


void test_p_arr(){

	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&a + 1);
	printf("*(a + 1) : %d,*(ptr - 1) : %d \n", *(a + 1), *(ptr - 1));

}

int main() {
    std::cout << "Hello, World!" << std::endl;

	test_p([](int *p){
		cout <<"*p++ :" << ( *p++ ) <<endl;
	});

	test_p([](int *p){
		cout << "(*p)++ :" << ( (*p)++ )<<endl;
	});


	test_p([](int *p){
		cout << "(*++p) :"<< (*++p) <<endl;
	});

	test_p([](int *p){
		cout << "(++*p) :"<< (++*p) <<endl;
	});
	test_p_arr();



    return 0;
}