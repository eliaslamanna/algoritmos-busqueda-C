#include <stdio.h>

 int bb_rec(int arr[], int inicio, int fin, int val){
   if(inicio > fin){
   	return -1;
   } // no se encontro
   int medio = (inicio + fin) / 2;
   if(arr[medio] == val){
   	return medio;
   }
   if(arr[medio] > val){
   	return bb_rec(arr, inicio, medio – 1 , val);
   }
   else{
   	return bb_rec(arr, medio + 1, fin, val);
   }
}

 int búsqueda_binaria(int list[], int val){
   int der = list.size() - 1, izq = 0, m;
   while(izq <= der){
      m = (izq + der) / 2;
      if(list[m] == val) return m; //la posición del valor
      if(m < list[val]) der = m – 1;
      else izq = m + 1;
   }  
   return -1; // no se encontro el dato :P
}