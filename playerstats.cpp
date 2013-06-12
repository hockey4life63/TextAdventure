#include <iostream>
#include <string>
using namespace std;

class player{
public:
	int health;
	int attack;
	int defense;
	int mana;
	int exp;
	string name;
	void setStats(int, int, int, int, string);
}p1;

class monster{
public:
	int health;
	int attack;
	int defense;
	int mana;
	string name;
	void setStats(int, int, int, int, string);
}monster1;
void player::setStats(int hp, int ap, int dp, int mp,string startName){
	health=hp;
	attack=ap;
	defense=dp;
	mana=mp;
	exp=0;
	name=startName;
}
void monster::setStats(int hp, int ap, int dp, int mp,string startName){
	health=hp;
	attack=ap;
	defense=dp;
	mana=mp;
	name=startName;
}
void combat(monster M1,player player1);
int main(){
	monster1.setStats(10, 5, 5, 0, "tom");
	p1.setStats(10,7,5,0,"Alex");
	combat(monster1, p1);
}
void combat(monster M1,player player1){
	int blockedDmg=(rand()% M1.defense);
	int applyDmg=player1.attack-blockedDmg;
	M1.health-=applyDmg;
	if(applyDmg==0){
		cout<<M1.name<<" Blocked your attack"<<endl;
	}
	else{
		cout<<"You hit "<<M1.name<<" for "<<applyDmg<<endl;
		cout<<M1.name<<" has "<<M1.health<<" Life Remaining."<<endl;
	}
	return;
}