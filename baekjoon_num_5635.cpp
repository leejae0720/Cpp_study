#include <iostream>
using namespace std;

int a,s;
string name[20];
string output_name[2];
int day, month, year;
int maxday, minday, maxmonth, minmonth, maxyear, minyear, max_i, min_i;
int lastday, lastmonth, lastyear;

void caculation_function(int n){

    for(int i = 0; i < n; i++){
        cin >> name[i] >> day >> month >> year;

        if(i = 0){
            lastyear = year;
            lastmonth = month;
            lastday = day;
        }

        if(year <= 2010 && year >= 1990 && day <= 31 && day >= 1 && month >= 1 && month <= 12){
            switch(n){
                case 1:
                    output_name[0] = name[i];
                    output_name[1] = name[i];
                    cout << output_name[0] << "\n" << output_name[1];
                    break;
                
                case 2:
                    if(lastyear > year){

                    }
                    else if(lastyear < year){

                    }
                    else if(lastyear == year){
                        if(lastmonth > month){

                        }
                        else if(lastmonth < month){

                        }
                        else if(lastmonth == month){
                            if(lastday > day){

                            }
                            else if(lastday < day){

                            }
                            else if(lastday == day){
                                cout << "input error" << endl;
                            }
                        }
                    }
                    

            }
        }

        else{
            cout << "input error" <<endl;
            break;
        }
    }
}  
/*
    if(n >= 1 && n <= 100){
        lastyear = 2010;
        for (int i = 0; i < n; i++){
            cin >> name[i] >> day >> month >> year;

            if(year <= 2010 && year >= 1990 && day <= 31 && day >= 1 && month >= 1 && month <= 12){
                if(lastyear < year){
                    minyear = year;
                    lastyear = year;
                    lastmonth = month;
                    lastday = day;
                    output_name[0] = name [i];
                }

                else if(lastyear > year){
                    maxyear = year;
                    lastyear = year;
                    lastmonth = month;
                    lastday = day;
                    output_name[1] = name[i];
                }

                else if(lastyear == year){
                    if(lastmonth > month){
                        maxmonth = month;
                        lastmonth = month;
                        lastday = day;
                        output_name[1] = name[i];
                    }

                    else if(lastmonth < month){
                        lastmonth = month;
                        lastday = day;
                    }
                    
                    else if(lastmonth == month){
                        if(lastday > day){
                            lastday = day;
                            output_name[1] = name[i];
                        }

                        else if(lastday < day){
                            minday = day;
                            lastday = day;
                        }

                        else if(lastday == day){
                            break;
                        }
                    }
                }
            }

            else{
                cout << "input error" << endl;
                break;
            }
        }

    cout << output_name[0] << endl;
    cout << output_name[1] << endl;
    }

    if(n < 1 || n > 100){
        cout << "input error" << endl;
    }
}
*/

int main(){
    cin >> a;
    if(a >= 1 || a <= 100){
        caculation_function(a);
    }
    else{
        cout << "input error" << endl;
    }
    return 0;
}