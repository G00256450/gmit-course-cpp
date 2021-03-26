#include"football_club.h"

    FootballClub::FootballClub(){
        this->clubname = "NA";
        this->district = "NA";
    }
    FootballClub::FootballClub(string clubname, string district){
        this->clubname = clubname;
        this->district = district;
    }

    string FootballClub::getClubname(){
        return clubname;
    }
    string FootballClub::getDistrict(){
        return district;
    }

    void FootballClub::setClubname(string clubname){
        this->clubname = clubname;
    }

    void FootballClub::setDistrictname(string district){
        this->district = district;
    }

    void FootballClub::printInfo(){
     cout<<clubname<<endl;
    }

    /*void FootballClub::addPlayerToTeam(Player tmp,int ID){

        this->team[ID].setName(tmp.getForename(),tmp.getSurname());
        this->team[ID].setDOB(tmp.getDOB());
        this->team[ID].setPosition(tmp.getPosition());
        this->team[ID].setMobileNumber(tmp.getMobileNumber());
    }*/

    void FootballClub::addPlayerToSquad(Player tmp, int position){

       this->squad[position].setName(tmp.getForename(), tmp.getSurname());
       this->squad[position].setPosition(tmp.getPosition());
        this->squad[position].setDOB(tmp.getDOB());
        this->squad[position].setPosition(tmp.getPosition());
        this->squad[position].setMobileNumber(tmp.getMobileNumber());
        this->squad[position].setPlaying(tmp.getPlaying());

    }
    void FootballClub::printTeam(){

        for(int i=0;i<MAXSQUAD;i++){
                if (squad[i].getPlaying()=="Yes"){
                   squad[i].printPlayerInfo();
                }
        }

    }
    void FootballClub::printSquad(){

        for(int i=0;i<MAXSQUAD;i++){
            squad[i].printPlayerInfo();
        }

    }


