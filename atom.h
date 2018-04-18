#include <vector>
#include <iostream>

using namespace std;

class molecule{
	string name;
	pair <string,string> madeof;
	double energy;
	string message;
	public:
	double get_energy() const{
		return energy;
	}
	string get_name() const{
		return name;
	}
	string get_message(){
		return message;
	}
	pair<string,string> get_pair(){
		return madeof;
	}
	molecule(){
		name = "BAD";
	}
	molecule(string name1, string atom1, string atom2, double energy1,string newmessage){
		name = name1;
		madeof = make_pair(atom1,atom2);
		energy = energy1;
		message = newmessage;
	}
}h2("H2","H","H",436,"Hydrogen Bond Formed"),h2o("H2O","H2","O",459,"Water Created"),o2("O2","O","O",146,"Oxygen Bond Formed"),c2("C2","C","C",348,"Carbon Bond Formed"),ch("CH","C","H",413,"Ethynyl Created"),c2h("C2H","C2","H",446,"Ethynyl Radical Created"/*place holder energy*/co2("CO2","C","O2",414,"Carbond Dioxide Created"),cl2("Cl2","Cl","Cl",242,"Chlorine Bond Formed"),f2("F2","F","F",155,"Fluorine Bond Formed"),clf("ClF","Cl","F",253,"Chlorine Monofluoride Created"),n2("N2","N","N",163,"Nitrogen Bond Formed"),nh("NH","N","H",391,"Nitrogen Monohydride Created"),no("NO","N","O",201,"Nitrogen Oxide Created"),no2("NO2","N","O2",607,"Nitrogen Dioxide"); 
//("","","",,"")

