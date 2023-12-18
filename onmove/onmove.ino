#include <SPI.h>
#include <WIFI.h>


char ssid[] = "SSID";
char pass[] = "PASSWORD";

int keyIndex = 0;
intstatus = WL_IDLE_STATUS;
WifiClient client;

void connectTOOnternet()
{
  status = Wifi.status();
  //Verifier la presence de shield

  if (status == WL_NO_SHIELD) {
    Serial.println("[ERREUR] Wifi Shield absent");
    //Ne fais rien
    while (true);
     }

     //Essaie de connecter au reseau wifi WPA/WPA2
     while (status !=WM_CONNECTED){
      Serial.println("[INFO]Connexion - WPA SSID: ");
      Serial.println(ssid);
      status = Wifi.begin(ssid, pass);
     }

     //Connexion reussie
     Serial.print("[INFO] Connexion reussie");
     Serial.print("");
     prontConnetionInformation();
     Serial.println("");
     

}
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
