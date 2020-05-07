
void tema_cua() {

   if (ind_capa[0] == 1) {    // default
    ritmo_cua(1, sol_k1);    // 
   }

   if (ind_capa[1] == 2) {
    ritmo_cua(2, sol_g1);    // 
   }

   if (ind_capa[2] == 3) {
    ritmo_cua(3, sol_a1);
   }

}


// #################################################


void capa_cua (int num_capa, int solen) {

 if (num_capa == 1) {	// 

  f_beat(solen, 0, 0,  var_c, var_mc);  
  f_beat(solen, 0, 9,  var_c, var_mc);  
  f_beat(solen, 0, 15, var_c, var_mc);  
  f_beat(solen, 0, 21,  var_c, var_mc);  
  f_beat(solen, 0, 30,  var_c, var_mc);  
  f_beat(solen, 0, 36,  var_c, var_mc);  
  f_beat(solen, 0, 42,  var_c, var_mc);
  
 }

 if (num_capa == 2) {	// 

  f_beat(solen, 0, 0,  var_c, var_mc);  
  f_beat(solen, 0, 6,  var_c, var_mc);  
  f_beat(solen, 0, 15, var_c, var_mc);  
  f_beat(solen, 0, 21,  var_c, var_mc);  
  f_beat(solen, 0, 27,  var_c, var_mc);  
  f_beat(solen, 0, 36,  var_c, var_mc);  
  f_beat(solen, 0, 42,  var_c, var_mc); 

 }

 if (num_capa == 3) {	// 
  f_beat(solen, 0, 3,  var_c, var_mc);
  f_beat(solen, 0, 18,  var_c, var_mc);
  f_beat(solen, 0, 24, var_c, var_mc);

 }

}


////////////////////////////////////////////////////////////////////////////////

/*

void rota_mc_cua (int num_capa, int solen) {

    var_mc = 0;
    var_c = 0;
    while (var_mc <=m_compas) {
      while (var_c <= compas) {
      switch (var_mc) {
      case 0:
		    capa_cua(num_capa, solen); //
      break;
      case 1:
		    capa_cua(num_capa + 1, solen); //
      break;
      }
      var_c++;
      }
      var_c = 0;
      var_mc++;
    }
}


void rota_co_cua (int num_capa, int solen) {

    var_mc = 0;
    var_c = 0;
    while (var_mc <=m_compas) {
      while (var_c <= compas) {
      switch (var_c) {
      case 0:
	    capa_cua(num_capa, solen); //
      break;
      case 1:
	    capa_cua(num_capa + 1, solen); //
      break;
      case 2:
	    capa_cua(num_capa + 2, solen); //
      break;
      case 3:
	    capa_cua(num_capa + 3, solen); //
      break;
	    case 4:
	    capa_cua(num_capa + 4, solen); //
      break;
      case 5:
	    capa_cua(num_capa + 5, solen); //
      break;
      case 6:
	    capa_cua(num_capa + 6, solen); //
      break;
      case 7:
	    capa_cua(num_capa + 7, solen); //
      break;
      case 8:
      capa_cua(num_capa + 8, solen); //
      break;
      case 9:
      capa_cua(num_capa + 9, solen); //
      break;
      case 10:
      capa_cua(num_capa + 10, solen); //
      break;
      }
      var_c++;
      }
      var_c = 0;
      var_mc++;
    }
}

*/


void ritmo_cua (int num_comp, int solen) {

    var_mc = 0;
    var_c = 0;
    while (var_mc <=m_compas) {
      while (var_c <= compas) {
          capa_cua(num_comp, solen); //    i
      var_c++;
      }
    var_c = 0;
    var_mc++;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
