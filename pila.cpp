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
	T Pila<T>::top(){

		if (!empty())
			return pila_[top_];

		else{
			cout << "Pila vacia!" << endl;
			exit(1);		
		}			
	}		


	template <class T>
	void Pila<T>::imprimir(){

		for (int i=0; i<=top_; i++)
			cout << pila_[i] << ", ";
	}		

int main(void){
	
	Pila<int> PilaInt(10);
	Pila<float> PilaFloat(10);
	Pila<char> PilaChar(10);

	for (int i=0; i<5; i++){

		PilaInt.push(i*2);
		PilaFloat.push(i*2.3);
		PilaChar.push('a'+i);
	}

	cout << "Mostrar pila: "; PilaInt.imprimir(); cout << endl;
	cout << "Mostrar pila: "; PilaFloat.imprimir(); cout << endl;
	cout << "Mostrar pila: "; PilaChar.imprimir(); cout << endl;


	return 0;
}	