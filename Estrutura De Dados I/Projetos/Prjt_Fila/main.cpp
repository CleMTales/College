//Tales Clemente Matsuda
#include "fila.h"
#include <iostream>

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	Lista* fila = inicializa();
	
	fila = enqueue(fila, 5);
	fila = enqueue(fila, 3);
	fila = dequeue(fila);
	fila = enqueue(fila, 7);
	fila = dequeue(fila);
	cout << "Front - " << front(fila)->info << endl; 
	fila = dequeue(fila);
	fila = dequeue(fila);
	cout << boolalpha;
	cout <<	"Is Empty - " << isEmpty(fila) << endl;
	fila = enqueue(fila, 9);
	fila = enqueue(fila, 7);
	cout << "Size - " << size(fila) << endl;
	fila = enqueue(fila, 3);
	fila = enqueue(fila, 5);
	mostrar(fila);
	fila = dequeue(fila);
	
	
	system("pause");
	return 0;
}
