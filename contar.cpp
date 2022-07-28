//Kalil Saldanha Kaliffe
#include <iostream>
#include <string>
#include "contar.h"

using namespace std;

int contar (string S, string T){

  string ocheck;
  int ocorrencias = 0; 
  int auxi = 0;

  for(int i = 0; i<T.length() ; ++i){

    auxi += 1;
    ocheck += T[i];

    if(auxi % S.length() == 0){

      if(ocheck == S){

        ocorrencias += 1;
        auxi = 0;
      }
    
      else{

        i += -1;
      }

      ocheck = "";
    }
  }

  cout << "ocorrencias: ";
  return ocorrencias;

  
 



}
