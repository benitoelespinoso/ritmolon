/*

void f_beat 	--> pulso del solenoide por beat
void pista	--> selecciona la pista (el ritmo) KEY = 1, 2, 3, 4
void f_low_all	--> baja todos los solenoides
void f_reset	-- resetea todos los switches de ritmo y capas de los ritmos
void f_contador --> contador de milisegundos. Establece el compás
void c_serial	--> control medante char en SERiAL. Todo lo que se puede interactuar con el programa

*/

//////////////////////////////////////////////////////////////

void f_beat(int sole, int _sub0, int pulso0, int compas0, int m_compas0) {

// calculo del siguiente  dado un (_sub0, pulso0, compas0, m_compas0)

    if (_sub0 != _sub - 1 ) {
      _sub1 = _sub0 + 1;
      pulso1 = pulso0;
      compas1 = compas0;
      m_compas1 = m_compas0;
     } else {
      if (pulso0 != pulso - 1) {
        _sub1 = 0;
        pulso1 = pulso0 + 1;
        compas1 = compas0;
        m_compas1 = m_compas0;
      } else {
        if (compas0 != compas - 1) {
          _sub1 = 0;
          pulso1 = 0;
          compas1 = compas0 + 1;
          m_compas1 = m_compas0;
        } else {
          if (m_compas0 != m_compas - 1) {
            _sub1 = 0;
            pulso1 = 0;
            compas1 = compas0 + 1;
            m_compas1 = m_compas0 + 1;
          } else {
            _sub1 = 0;
            pulso1 = 0;
            compas1 = 0;
            m_compas1 = 0;
          }
        }
      }
    }

  if (m_compasIndx == m_compas0 && compasIndx == compas0 && pulsoIndx == pulso0 && _subIndx == _sub0) {
    digitalWrite(sole, HIGH);
  } else if (m_compasIndx == m_compas1 && compasIndx == compas1 && pulsoIndx == pulso1 && _subIndx == _sub1) {
    digitalWrite(sole, LOW);
  }
}

//////////////////////////////////////////////////////////////



void pista(int pista_i) {
   switch (pista_i) {
   case 1:
    tema_uno();
   break;
   case 2:
    tema_dos();
   break;
   case 3:
    tema_tre();
   break;
   case 4:
    tema_cua();
    break;  
   }
}


//////////////////////////////////////////////////////////

void f_low_all() {
  digitalWrite(sol_a1, LOW);
  digitalWrite(sol_g1, LOW);
  digitalWrite(sol_k1, LOW);
}	
 
void f_reset() {
  int i;
  for (i = 0; i < 4; i = i + 1) {
   ind_pista[i] = 0;
  }
   
  int j;
  for (j = 0; j < 4; j = j + 1) {
   ind_capa[j] = 0;
  }
}	


void f_contador() {

 if (_subIndx == _sub) {
  _subIndx = 0;
  pulsoIndx++;
 }

 if (pulsoIndx == pulso) {
   pulsoIndx = 0;
   compasIndx++;

 }

 if (compasIndx == compas) {
  compasIndx = 0;
  m_compasIndx++;
 }
 if (m_compasIndx == m_compas) {
  m_compasIndx = 0;
  uniqIndx++;
 }
}	
 
/////////////////////////////////////// 
 
 
void c_serial (char v_char) {


 /////////////////////////		ConTroL		/////////////////////////////////////// 



if (v_char == 'z'){					// restituye los solenoides originales
 sol_k1 = sol_1;   
 sol_g1 = sol_2;   
 sol_a1 = sol_3;   
}


if (v_char == 'x'){					// cambio de solenoides
 sol_g1 = sol_1;
 sol_a1 = sol_2;  
 sol_k1 = sol_3;
 
}

 /////////////////////////		ACTIVAR LAS CAPAS		/////////////////////////////////////
 ////////////////////////		CAPAS de cada TEMA		/////////////////////////////////////
 ////////////////////////		a,s,d,f                   	/////////////////////////////////////

 if (v_char == 'a'){                     // capa 1 (default) se ejecuta con solo invocar el ritmo (KEY = 1, ó 2, 3, 4) 
  ind_capa[0] = 1;
 }
     
 if (v_char == 's'){                     // capa 2
  ind_capa[1] = 2;
 }
 
 if (v_char == 'd'){                     // capa 3
  ind_capa[2] = 3;
 }
     
 if (v_char == 'f'){                     // capa 4
  ind_capa[3] = 4;
 }


   
 /////////////////////////////////////        DESACTIVAR LA EJECUCIÓN DE CAPAS 		////////////////////////
     
 if (v_char == 'A'){                     
  ind_capa[0] = 0;
  f_low_all();
 }
   
 if (v_char == 'S'){                     
  ind_capa[1] = 0;
  f_low_all();  
 }
   
 if (v_char == 'D'){                     
  ind_capa[2] = 0;
  f_low_all();
 }
   
 if (v_char == 'F'){                     
  ind_capa[3] = 0;
  f_low_all();
 }
	

 if (v_char == 'p'){                                // reset. Sonido = Off 
f_low_all();
f_reset();
 
 }



if (v_char == '1'){								 // 
	Serial.println("KEY = 1........Tema = 1 ");
 
	int i;
	for (i = 0; i < 4; i = i + 1) {
		ind_pista[i] = 0;
	}
	
	int j;
	for (j = 0; j < 4; j = j + 1) {
		ind_capa[j] = 0;
	}
	
	ind_pista[0] = 1;	                             
	ind_capa[0]=1;

	interval = interval_1;        // 
	_sub = _sub_1;
	pulso = pulso_1;
	compas = compas_1;
	m_compas = m_compas_1;
	
	uniqIndx = 1;
	_subIndx = 0;
	pulsoIndx = 0;
	compasIndx = 0;
	m_compasIndx = 0;
	
}

if (v_char == '2'){								// 

	Serial.println("KEY = 2........Tema = 2 ");   
  
	int i;
	for (i = 0; i < 4; i = i + 1) {
	  ind_pista[i] = 0;
	}
	
	int j;
	for (j = 0; j < 4; j = j + 1) {
	  ind_capa[j] = 0;
	}
	
	ind_pista[1] = 2;                              
	ind_capa[0]=1;
	
	
	interval = interval_2;        // 
	_sub = _sub_2;
	pulso = pulso_2;
	compas = compas_2;
	m_compas = m_compas_2;
	  
	uniqIndx = 1;
	_subIndx = 0;
	pulsoIndx = 0;
	compasIndx = 0;
	m_compasIndx = 0;
	
  
}

if (v_char == '3'){                             // 
	Serial.println("KEY = 3........Tema = 3 ");
	
	int i;
	for (i = 0; i < 4; i = i + 1) {
		ind_pista[i] = 0;
	}
	
	int j;
	for (j = 0; j < 4; j = j + 1) {
		ind_capa[j] = 0;
	}
	
	ind_pista[2] = 3;	                             
	ind_capa[0]=1;
	
	interval = interval_3;        // 
	_sub = _sub_3;
	pulso = pulso_3;
	compas = compas_3;
	m_compas = m_compas_3;
	
	uniqIndx = 1;
        _subIndx = 0;
	pulsoIndx = 0;
	compasIndx = 0;
	m_compasIndx = 0;
  
}





if (v_char == '4'){                              // 
  
	Serial.println("KEY = 4........Tema = 4 ");
	
	int i;
	for (i = 0; i < 4; i = i + 1) {
		ind_pista[i] = 0;
	}
	
	int j;
	for (j = 0; j < 4; j = j + 1) {
		ind_capa[j] = 0;
	}
	
	ind_pista[3] = 4;	                             
	ind_capa[0]=1;
	
	interval = interval_4;        // 
	_sub = _sub_4;
	pulso = pulso_4;
	compas = compas_4;
	m_compas = m_compas_4;
	
	uniqIndx = 1;
	_subIndx = 0;
	pulsoIndx = 0;
	compasIndx = 0;
	m_compasIndx = 0;
  
}


} // end of void c_serial 
