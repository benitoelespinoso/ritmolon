void tema_dos() {

   if (ind_capa[0] == 1) {    // default
    ritmo_dos(1, sol_k1);    // ritmo_dos
   }

   if (ind_capa[1] == 2) {
    ritmo_dos(2, sol_g1);    // ritmo_dos
   }

   if (ind_capa[2] == 3) {
    ritmo_dos(3, sol_a1);
   }

}



void capa_dos (int num_capa, int solen) {

 if (num_capa == 1) {

  f_beat(solen, 0, 0,  var_c, var_mc);
  f_beat(solen, 0, 18,  var_c, var_mc);
  f_beat(solen, 0, 30,  var_c, var_mc);

 }

 if (num_capa == 2) {

  f_beat(solen, 0, 12,  var_c, var_mc);
  f_beat(solen, 0, 42, var_c, var_mc);

 }

 if (num_capa == 3) {

  f_beat(solen, 0, 24,  var_c, var_mc);
  f_beat(solen, 0, 36, var_c, var_mc);

 }

}


////////////////////////////////////////////////////////////////////////////////


/*
void rota_mc_dos (int num_capa, int solen) {

    var_mc = 0;
    var_c = 0;
    while (var_mc <=m_compas) {
      while (var_c <= compas) {
      switch (var_mc) {
      case 0:
		capa_dos(num_capa, solen); //
      break;
      case 1:
		capa_dos(num_capa + 1, solen); //
      break;
      }
      var_c++;
      }
      var_c = 0;
      var_mc++;
    }
}

*/

/*
void rota_co_dos (int num_capa, int solen) {

    var_mc = 0;
    var_c = 0;
    while (var_mc <=m_compas) {
      while (var_c <= compas) {
      switch (var_c) {
      case 0:
	capa_dos(num_capa, solen); //
      break;
      case 1:
	capa_dos(num_capa + 1, solen); //
      break;
      case 2:
	capa_dos(num_capa + 2, solen); //
      break;
      case 3:
	capa_dos(num_capa + 3, solen); //
      break;
	  //
	  case 4:
	capa_dos(num_capa + 4, solen); //
      break;
      case 5:
	capa_dos(num_capa + 5, solen); //
      break;
      case 6:
	capa_dos(num_capa + 6, solen); //
      break;
      case 7:
	capa_dos(num_capa + 7, solen); //
      break;

      }
      var_c++;
      }
      var_c = 0;
      var_mc++;
    }
}

*/


void ritmo_dos (int num_comp, int solen) {

    var_mc = 0;
    var_c = 0;
    while (var_mc <=m_compas) {
      while (var_c <= compas) {
          capa_dos(num_comp, solen); //    i
      var_c++;
      }
    var_c = 0;
    var_mc++;
    }
}
