#include "pila.hpp"

	template <class T>
	Pila<T>::Pila(int sz):

		size_(sz),
		top_(-1),
		pila_(NULL){
			pila_ = new T [size_];
		}


	template <class T>
	Pila<T>::~Pila(){

		if (pila_){
			delete pila_;
			pila_ = NULL;
		}
	}	


	template <class T>
	bool Pila<T>::empty(){}	


	template <class T>
	bool Pila<T>::full(){}	


	template <class T>
	void Pila<T>::push(T dato){}	


	template <class T>
	T Pila<T>::pop(){}	


	template <class T>
	T Pila<T>::top(){}		


	template <class T>
	void Pila<T>::imprimir(){}		