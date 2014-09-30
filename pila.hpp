#include <iostream>

using namespace std;

template <class T>
class Pila {

	private:

		T* pila_;
		int size_;
		int top_;

	public:

		Pila(int sz);
		~Pila();

		bool empty();
		bool full();

		void push(T dato);
		T pop();
		T top();

		void imprimir();
};