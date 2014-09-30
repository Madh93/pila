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
	bool Pila<T>::empty(){

		return top_ == -1;
	}	


	template <class T>
	bool Pila<T>::full(){

		return top_ >= size_-1;
	}	


	template <class T>
	void Pila<T>::push(T dato){

		if (!full()){
			top_++;
			pila_[top_] = dato;
		}

		else{
			cout << "Pila llena!" << endl;
			exit(1);	
		}
	}	


	template <class T>
	T Pila<T>::pop(){

		if (!empty()){
			T dato = pila_[top_];
			top_--;
			return dato;
		}

		else{
			cout << "Pila vacia!" << endl;
			exit(1);		
		}		
	}	


	template <class T>
	T Pila<T>::top(){}		


	template <class T>
	void Pila<T>::imprimir(){}		