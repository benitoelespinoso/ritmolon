void tema_tre() {
  
   if (ind_capa[0] == 1) {    // default
    ritmo_tre(1, sol_k1);    // ritmo_tre
   }
   
   if (ind_capa[1] == 2) {
   rota_co_tre(51, sol_a1);    // 
   }
  
   if (ind_capa[2] == 3) {  
    rota_co_tre(11, sol_g1);
   }
  
}


// #################################################


void capa_tre (int num_capa, int solen) {
  
 
 if (num_capa == 1) {    //

  f_beat(solen, 0, 0, var_c, var_mc);  
  f_beat(solen, 0, 8, var_c, var_mc);  
  f_beat(solen, 0, 12, var_c, var_mc);  
  f_beat(solen, 0, 20, var_c, var_mc);  
  f_beat(solen, 0, 28, var_c, var_mc);  
  f_beat(solen, 0, 32, var_c, var_mc);  
  f_beat(solen, 0, 40, var_c, var_mc);  

 }
 
if (num_capa == 2) {    
 
f_beat(solen, 0, 0, var_c, var_mc);  
f_beat(solen, 0, 12, var_c, var_mc);  
f_beat(solen, 0, 28, var_c, var_mc);  
f_beat(solen, 0, 40, var_c, var_mc);  
 
}
 
if (num_capa == 3) {    

f_beat(solen, 0, 8, var_c, var_mc);  
f_beat(solen, 0, 20, var_c, var_mc);  
f_beat(solen, 0, 32, var_c, var_mc);  

}
 
 


 
} 

////////////////////////////////////////////////////////////////////////////////

void rota_mc_tre (int num_capa, int solen) {

    var_mc = 0;
    var_c = 0;
    while (var_mc <=m_compas) {
      while (var_c <= compas) {   
      switch (var_mc) {
      case 0:
		capa_tre(num_capa, solen); //    
      break;
      case 1:
		capa_tre(num_capa + 1, solen); //    
      break;
      }
      var_c++;
      }
      var_c = 0;
      var_mc++;
    }
}


void rota_co_tre (int num_capa, int solen) {

    var_mc = 0;
    var_c = 0;
    while (var_mc <=m_compas) {
      while (var_c <= compas) {   
      switch (var_c) {
      case 0:
	capa_tre(num_capa, solen); //    
      break;
      case 1:
	capa_tre(num_capa + 1, solen); //    
      break;
      case 2:
	capa_tre(num_capa + 2, solen); //    
      break;
      case 3:
	capa_tre(num_capa + 3, solen); //    
      break;
      case 4:
	capa_tre(num_capa + 4, solen); //    
      break;
      case 5:
	capa_tre(num_capa + 5, solen); //    
      break;
      case 6:
	capa_tre(num_capa + 6, solen); //    
      break;
      case 7:
	capa_tre(num_capa + 7, solen); //    
      break;  
      }
      var_c++;
      } 
    var_c = 0;
    var_mc++;
    }
}


void ritmo_tre (int num_comp, int solen) {

    var_mc = 0;
    var_c = 0;
    while (var_mc <=m_compas) {
      while (var_c <= compas) {
          capa_tre(num_comp, solen); //    i
      var_c++;
      }
    var_c = 0;
    var_mc++;
    }
}
