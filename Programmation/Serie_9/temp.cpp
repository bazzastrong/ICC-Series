#include <string>
#include <vector>
#include <iostream>
#include <cmath>
 
using namespace std;
 
typedef double Temperature;
 
typedef string Date;
 
struct Mesure {
    int id;
    Temperature temperature;
    Date date;
};
 
typedef vector<Mesure> Records;
 
constexpr double MAX_TEMP(60.0);
constexpr double MIN_TEMP(-60.0);
const  string UNKNOWN_DATE("date inconnue");
 
 
Mesure find_max_record(const Records& records){
    Mesure t_max {
        int idmax(0);
        Temperature tmax(0);
        Date date_tmax(UNKNOWN_DATE);
    };
    for (int j(0); j < records.size(); ++j){
        if (records[j].temperature > tmax){
            tmax =records[j].temperature;
            idmax = records[j].id;
            date_tmax = records[j].date;
        }
    }
return t_max
}
 
 
double average_temperature(const Records& records){
    Temperature tmoy;
    for (int i(0); i < records.size(); ++i){
        tmoy += records[i].temperature;
    }
    tmoy = tmoy / records.size();
return tmoy;
}
 
double find_closer_dates(const Records& records, Date& date1, Date& date2){
    Temperature ecart_t(60.0);
    for (int i(0); i < records.size(); ++i){
        for (int j(1); j < records.size(); ++j){
            if (abs(records[i].temperature - records[j].temperature) < ecart_t) {
                ecart_t = abs(records[i].temperature - records[j].temperature;
                date1 = records[i].date;
                date2 = records[j].date;
            }
        }
    }
return ecart_t;
}
 
 
int main(){
    Records r1 ( {
             
          { 4, 13.0, "10.3.2019" },     
          { 5, 28.5, "10.8.2019" },
          { 6, 35.0, "10.7.2019" },
          { 7, 25.0, "10.10.2019" },    
          { 8, 15.2, "11.11.2019" },
          { 9, 30.2, "10.9.2019" },
          { 10, 25.5, "10.9.2019" },
          { 1, 31.0, "10.7.2018" }, 
          { 2, -3.0, "10.1.2019" },
          { 3, -1.5, "10.2.2019" }
        });
         
    Mesure mesure(find_max_record(r1));
    cout << "Le jour le plus chaud est le "
         << mesure.date
         << " avec "
         << mesure.temperature
         << " degrés"
         << endl;
     
    cout << "La moyenne des températures est de "
         << average_temperature(r1)
         << " degrés"
         << endl;
 
    Date date1(UNKNOWN_DATE);
    Date date2(UNKNOWN_DATE);
    double delta(find_closer_dates(r1, date1, date2));
    cout << "Les deux dates avec l'écart le plus faible sont le "
         << date1
         << " et le "
         << date2
         << " avec un écart de "
         << delta << " degrés"
         << endl;
     
         
return 0;
}