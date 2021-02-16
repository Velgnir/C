#include <iostream>
#include <thread>
void print1(int& n) {
	for (n; n < 101; n = n + 4)
		std::cout << n;
}
void print2(int& n) {
	for (n; n < 101; n = n + 4)
		std::cout << n;
}
void print3(int& n) {
	for (n; n < 101; n = n + 4)
		std::cout << n;
}
void print4(int& n) {
	for (n; n < 101; n = n + 4)
		std::cout << n;
}
int main(int argc, char* argv[]) {
// тут я написав ст|льки раз|в щоб не збити посл|довн|сть д|й, я знаю що можна була зробити по |ншом.
	 std::thread th(print1, 1);
	 th.join();
	 std::thread th1(print2, 2);
	 th1.join();
	 std::thread th2(print3, 3);
	 th2.join();
	 std::thread th3(print4, 4);
	 th3.join();
	return 0;
}