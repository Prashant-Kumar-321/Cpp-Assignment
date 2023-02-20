#include <bits/stdc++.h>
using namespace std;

enum option {
  Ev = 1, 
  joul = 2,
  both = 3
}; 

// Macros
#define h 6.6260715e-34
#define c 3e8
#define nm 1e-9
#define K h *c / nm
#define ev 6.2415e18

// Class designing
class Photon
{

protected:
  double Wav_Leng;

public:
  Photon(double wvl) : Wav_Leng(wvl)
  {
  }
  Photon()
  {
  }

  void set_Wvlen(double a)
  {
    Wav_Leng = a;
  }
};

class Photon_Energy : public Photon
{

  double PhotonEnrgy;
  void calculate_Enrgy()
  {
    PhotonEnrgy = K / Wav_Leng; // photon energy in joule
  }

public:
  Photon_Energy(double a) : Photon(a)
  {
  }
  Photon_Energy() : Photon()
  {
  }

  double get_Engry()
  {
    calculate_Enrgy(); // calculate photon energy
    return PhotonEnrgy;
  }

  double get_Engryev()
  {
    calculate_Enrgy(); // calculate photon energy
    return (PhotonEnrgy * ev);
  }
};

// Driver code
int main(void)
{
  double wv_length;
  int opt;  
  Photon_Energy p1(400); // wave_length in nm unit

  cout<< "AeB = A X 10 ^ B "<< endl; 
  cout<< "3e8 = 3 X 10^8"<< endl; 

  cout<< endl; 
  cout<< "Enter Wave length of photon (nm) = "; 
  cin>> wv_length;

  p1.set_Wvlen(wv_length); // setgin wv_length to photon 

  // calculating energy  
  cout<<endl;
  cout<< "Energy in: "<< endl; 
  cout<< "1.ev"<< endl; 
  cout<< "2.joul"<< endl; 
  cout<< "3.both"<< endl; 
  cin>>opt; 

  switch(opt)
  {
    case Ev: 
      cout << "Energy of photon = " << p1.get_Engryev() << " j" << endl;
      break; 
    case joul: 
      cout<<  "Energy of photon = "<< p1.get_Engry()<< " ev"<< endl; 
      break; 
    case both: 
      cout << "Energy of photon = " << p1.get_Engry() << " j" << endl;
      cout<<  "Energy of photon = "<< p1.get_Engryev()<< " ev"<< endl; 
      break; 
    default : 
      cout<< "INvalid option "<< endl; 
  } 

  cin.get();
  cin.get(); 
  return 0;
}