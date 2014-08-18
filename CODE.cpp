Demacia-Vs.-Noxus
=================
/*
Demacia vs. Noxus


This program is made by:
Melvin Troy Ng
Jeremiah Rod Jacinto 
Luis Alfonso Santos 

This program simulated the war of Demacia vs. Noxus of Riot's League of Legends.
This program features:
1. Puny Damage
2. Powerful Damage
3. Disable + Very Puny Damage
4. Immunity Ability
5. Heal Ability
6. Health Points display of the players

In this prgram, we, the programmers, learned: the C++ language to shorten the codes, for Jacinto and Santos only; create a loop within a loop that makes it hard and realistic;
making a program that doesn't overwhelm the users; using goto function; and lastly use and, or fuction in an if statement.

 
This program is made as a final output for LBYEC71 to be submitted to the well-known, intelligent, and handsome,  Mr. Melvin Cabatuan of De La Salle University, ECE Department.
*/
#include<iostream> // in out stream
#include<string> // use of string


using namespace std;
void Demacia(){
cout<<"\n Demacia Attacks:";
cout<<"\n================";
cout<<"\n Q - Blade Waltz (Fiora)";
cout<<"\n W - Crecent Sweep (Xin Zhao)";
cout<<"\n E - Cataclysm (Jarvan IV)";
cout<<"\n R - Diplomatic Immunity (Poppy)";
cout<<"\n S - Demacian Justice (Garen)";
cout<<"\n P - Heal (Sona)";
cout<<"\n Enter Move: ";
}
void Noxus(){
cout<<"\n Noxus Attacks:";
cout<<"\n================";
cout<<"\n Q - Death Lotus (Katarina)";
cout<<"\n W - Whirling Death (Draven)";
cout<<"\n E - Infinite Duress (Warwick)";
cout<<"\n R - Sadism (Dr. Mundo)";
cout<<"\n S - Noxian Guillotine (Darius)";
cout<<"\n P - Heal (Alistar)";
cout<<"\n Enter Move: ";
}
main()
{
      cout<<"This program simulated the war of Demacia vs. Noxus of Riot's League of Legends. \n";
	again:
int s1=300;//hp1
int s2=300;//hp2
char move;
string g="";
string player="";
cout<<"Demacia VS. Noxus, who will go first? [D/N] : ";
cin>>player;
    if(player == "D" || player=="d") // d's turn
{
player1:
		{
		
	Demacia();
	cin>>move;
	switch(move)
{
case 'Q':
case 'q':
cout<<"You have chosen Blade Waltz \n";
cout<<"Fiora was able to deal 20 damage \n";
s2=s2-20;
cout<<"Noxus has "<<s2<<" health remaining. \n";
if (s2>0)
{
goto player2;
}
else 
{
cout<<"Demacia is Victorios!!!!";
}

break; // EndCase Q D1
case 'W':
case 'w':
cout<<"You have chosen Cresent Sweep \n";
cout<<"Xin Zhao severed Noxus's Units and deal 25 damage \n";
s2=s2-25;
cout<<"Noxus has "<<s2<<" health remaining. \n";
if (s2>0)
{
goto player2;
}
else 
{
cout<<"Demacia is Victorios!!!!";
}

break; // EndCase W D1
case 'E':
case 'e':
cout<<"You have chosen Cataclysm \n";
cout<<"Jarvan IV was able to trap Noxus' units \n  Noxus, you have been disabled for one turn, dealing 10 damage. \n";
s2=s2-10;
cout<<"Noxus has "<<s2<<" health remaining. \n";
if (s2>0)
{
DECONTROL:		
{
		
	Demacia();
	cin>>move;
	switch(move)
{
case 'Q':
case 'q':
cout<<"You have chosen Blade Waltz \n";
cout<<"Fiora was able to deal 20 damage \n";
s2=s2-20;
cout<<"Noxus has "<<s2<<" health remaining. \n";
if (s2>0)
{
goto player2;
}
else 
{
cout<<"Demacia is Victorios!!!!";
}

break; // EndCase Q D2
case 'W':
case 'w':
cout<<"You have chosen Cresent Sweep \n";
cout<<"Xin Zhao severed Noxus's Units and deal 25 damage \n";
s2=s2-25;
cout<<"Noxus has "<<s2<<" health remaining. \n";
if (s2>0)
{
goto player2;
}
else 
{
cout<<"Demacia is Victorios!!!!";
}

break; // EndCase W D2
case 'E':
case 'e':
cout<<"Shame on you, you know how the game works and you're trying to cheat!!! \n";
goto DECONTROL;
break; // EndCase E D2
case 'R':
case 'r':
cout<<"You have chosen Diplomatic Immunity \n";
goto DPCONTROL;
break; // EndCase R D2
case 'S':
case 's':
cout<<"You have chosen Demacian Justice";
cout<<"Garen put all his might and slammed his sword \n";
if(s2<=30)
{
	s2=0;
	cout<<"Garen has obliterated all of Noxus, The might of Demacia has won!!! \n";
	goto end;
}
else
{
s2=s2-10;
cout<<"Noxus' health isn't low enough, but it dealt 10 damage. \n";
cout<<"Noxus has "<<s2<<" health remaining. \n";
goto player2;
}
break; // EndCase SS D2
case 'P':
case 'p':
cout<<"You have been healed, and gained 10 health \n";
s1=s1+10;
cout<<"Demacia has "<<s1<<" health. \n";
goto player2;
break; //endcase P D2

default:
cout<<"Invalid Selection, try again";
goto DECONTROL;
break; //end default

} //EndSwitch for DECONTROL
}
} // disabling another E
else 
{
cout<<"Demacia is Victorios!!!!";
}

break; // EndCase E D1
case 'R':
case 'r':
cout<<"You have chosen Diplomatic Immunity \n";
DPCONTROL:
{
	
	Noxus();
	cin>>move;
	switch(move)
{
case 'Q':
case 'q':
cout<<"You have chosen Death Lotus \n";
cout<<"Poppy Used Diplomatic Immunity, you dealt no damage. \n";
goto player1;
break; // EndCase Q N dummy
case 'W':
case 'w':
cout<<"You have chosen Whirling Death \n";
cout<<"Poppy Used Diplomatic Immunity, you dealt no damage. \n";
goto player1;
break; // EndCase W N dummy
case 'E':
case 'e':
cout<<"You have chosen Infinite Duress. \n";
cout<<"Poppy Used Diplomatic Immunity, you dealt no damage. \n";
goto player1;
break; // EndCase E N dummy
case 'R':
case 'r':
cout<<"You have chosen Sadism \n";
cout<<"Dr. Mundo made the Noxian units absorb the next incomming attack from Demacia. \n";
goto NDCONTROL;
break; // EndCase R N dummy no damage dealt
case 'S':
case 's':
cout<<"You have chosen Noxian Gullotine\n";
cout<<"Poppy Used Diplomatic Immunity, you dealt no damage. \n";
goto player1;
break; // EndCase SS N dummy
case 'P':
case 'p':
cout<<"You have been healed, and gained 10 health \n";
s2=s2+10;
cout<<"Demacia has "<<s2<<" health. \n";
goto player1;
break; //endcase P N dummy
default:
cout<<"Invalid Selection, try again";
goto DPCONTROL;
break; //end default
} //EndSwitch
}
break; // EndCase R D1 no damage dealt
case 'S':
case 's':
cout<<"You have chosen Demacian Justice";
cout<<"Garen put all his might and slammed his sword \n";
if(s2<=30)
{
	s2=0;
	cout<<"Garen has obliterated all of Noxus, The might of Demacia has won!!! \n";
	goto end;
}
else
{
s2=s2-10;
cout<<"Noxus' health isn't low enough, but it dealt 10 damage. \n";
cout<<"Noxus has "<<s2<<" health remaining. \n";
goto player2;
}
break; // EndCase SS D1
case 'P':
case 'p':
cout<<"You have been healed, and gained 10 health \n";
s1=s1+10;
cout<<"Demacia has "<<s1<<" health. \n";
goto player2;
break; //endcase P D1

default:
cout<<"Invalid Selection, try again";
goto player1;
break; //end default

} //EndSwitch
}
} //end p1 turn No disables
else if(player=="N" || player=="n") // player 2's turn
{
	player2:
	{
	
	Noxus();
	cin>>move;
	switch(move)
{
case 'Q':
case 'q':
cout<<"You have chosen Death Lotus \n";
cout<<"Katarina was able to deal 20 damage \n";
s1=s1-20;
cout<<"Demacia has "<<s1<<" health remaining. \n";
if (s1>0)
{
goto player1;
}
else 
{
cout<<"Noxus is Victorios!!!!";
}

break; // EndCase Q N1
case 'W':
case 'w':
cout<<"You have chosen Whirling Death \n";
cout<<"Draven severed Demacia's Units in half and deal 25 damage \n";
s1=s1-25;
cout<<"Demacia has "<<s1<<" health remaining. \n";
if (s1>0)
{
goto player1;
}
else 
{
cout<<"Noxus is Victorios!!!!";
}

break; // EndCase W N1
case 'E':
case 'e':
cout<<"You have chosen Infinite Duress \n";
cout<<"Warwick trapped and feasted on the units of Demacia \n  Demacia, you have been disabled for one turn, dealing 10 damage. \n";
s1=s1-10;
cout<<"Demacia has "<<s1<<" health remaining. \n";
if (s1>0)
{
NECONTROL:	
{
	
	Noxus();
	cin>>move;
	switch(move)
{
case 'Q':
case 'q':
cout<<"You have chosen Death Lotus \n";
cout<<"Katarina was able to deal 20 damage \n";
s1=s1-20;
cout<<"Demacia has "<<s1<<" health remaining. \n";
if (s1>0)
{
goto player1;
}
else 
{
cout<<"Noxus is Victorios!!!!";
}

break; // EndCase Q N2
case 'W':
case 'w':
cout<<"You have chosen Whirling Death \n";
cout<<"Draven severed Demacia's Units in half and deal 25 damage \n";
s1=s1-25;
cout<<"Demacia has "<<s1<<" health remaining. \n";
if (s1>0)
{
goto player1;
}
else 
{
cout<<"Noxus is Victorios!!!!";
}

break; // EndCase W N2
case 'E':
case 'e':
cout<<"Shame on you, you know how the game works and you're trying to cheat!!! \n";
goto NECONTROL;

break; // EndCase E N2
case 'R':
case 'r':
cout<<"You have chosen Sadism \n";
goto NDCONTROL;
break; // EndCase R N2
case 'S':
case 's':
cout<<"You have chosen Noxian Gullotine\n";
cout<<"Darius put all his might and slammed his axe \n";
if(s1<=30)
{
	s1=0;
	cout<<"Noxus has obliterated all of Demacia, The darkness of Noxus has won!!! \n";
	goto end;
}
else
{
s1=s1-10;
cout<<"Demacia' health isn't low enough, but it dealt 10 damage. \n";
cout<<"Demacia has "<<s1<<" health remaining. \n";
goto player1;
}
break; // EndCase SS N2
case 'P':
case 'p':
cout<<"You have been healed, and gained 10 health \n";
s2=s2+10;
cout<<"Demacia has "<<s2<<" health. \n";
goto player1;
break; //endcase P N2
default:
cout<<"Invalid Selection, try again";
goto NDCONTROL;
break; //end default
} //EndSwitch
}
} // disabling e
else 
{
cout<<"Noxus is Victorios!!!!";
}

break; // EndCase E N1
case 'R':
case 'r':
cout<<"You have chosen Sadism \n";
cout<<"Dr. Mundo made the Noxian units absorb the next incomming attack from Demacia. \n";
NDCONTROL:
{
		
	Demacia();
	cin>>move;
	switch(move)
{
case 'Q':
case 'q':
cout<<"You have chosen Blade Waltz \n";
cout<<"Dr. Mundo Used Sadism, you dealt no damage. \n";
goto player2;
break; // EndCase Q D dummy
case 'W':
case 'w':
cout<<"You have chosen Cresent Sweep \n";
cout<<"Dr. Mundo Used Sadism, you dealt no damage. \n";
goto player2;

break; // EndCase W D dummy
case 'E':
case 'e':
cout<<"You have chosen Cataclysm \n";
cout<<"Dr. Mundo Used Sadism, you dealt no damage. \n";
goto player2;
break; // EndCase E D1  dummy
case 'R':
case 'r':
cout<<"You have chosen Diplomatic Immunity \n";
goto DPCONTROL;
break; // EndCase R D1 no damage dealt
case 'S':
case 's':
cout<<"You have chosen Demacian Justice";
cout<<"Dr. Mundo Used Sadism, you dealt no damage. \n";
goto player2;
break; // EndCase SS D1
case 'P':
case 'p':
cout<<"You have been healed, and gained 10 health \n";
s1=s1+10;
cout<<"Demacia has "<<s1<<" health. \n";
goto player2;
break; //endcase P D1

default:
cout<<"Invalid Selection, try again";
goto NDCONTROL;
break; //end default

} //EndSwitch
}
break; // EndCase R N no damage dealt
case 'S':
case 's':
cout<<"You have chosen Noxian Gullotine\n";
cout<<"Darius put all his might and slammed his axe \n";
if(s1<=30)
{
	s1=0;
	cout<<"Noxus has obliterated all of Demacia, The darkness of Noxus has won!!! \n";
	goto end;
}
else
{
s1=s1-10;
cout<<"Demacia' health isn't low enough, but it dealt 10 damage. \n";
cout<<"Demacia has "<<s1<<" health remaining. \n";
goto player1;
}
break; // EndCase SS N1
case 'P':
case 'p':
cout<<"You have been healed, and gained 10 health \n";
s2=s2+10;
cout<<"Demacia has "<<s2<<" health. \n";
goto player1;
break; //endcase P N1
default:
cout<<"Invalid Selection, try again";
goto player2;
break; //end default
} //EndSwitch
}
} //end p2 turn	 No disables
else{
return main();
} // end else main ends
end:
cout<<"+88_________________+880_______\n \n"; //1
cout<<"_+880_______________++80_______\n \n"; //2
cout<<"_++88______________+880________\n \n"; //3
cout<<"_++88_____________++88________ \n \n"; //4
cout<<"__+880___________++88_________ \n  \n"; //5
cout<<"__+888_________++880__________ \n \n"; //6
cout<<"__++880_______++880___________ \n \n"; //7
cout<<"__++888_____+++880____________ \n \n"; //8
cout<<"__++8888__+++8880++88_________ \n \n"; //9
cout<<"__+++8888+++8880++8888________ \n \n"; //10
cout<<"___++888++8888+++888888+80____ \n \n"; //11
cout<<"___++88++8888++8888888++888___ \n \n"; //12
cout<<"___++++++888888fx88888888888___ \n \n"; //13
cout<<"____++++++88888888888888888___ \n \n"; //14
cout<<"____++++++++000888888888888___ \n \n"; //15
cout<<"_____+++++++00008f8888888888___ \n \n"; //16
cout<<"______+++++++00088888888888___  \n \n"; //17
cout<<"_______+++++++0888f8888888  \n \n \n"; //18
cout<<" At Last the Fields of Justice is at peace!!!! \n \n \n \n";
wrong:
cout<<"Wanna go again?[Y/N]";
cin>>g;
cout<<" \n";
if (g=="Y" || g=="y")
{
system("cls");

//return main();
goto again;
}
else if(g=="N"|| g=="n")
{
return 0;
}
else
{
goto wrong;
}
system("pause");
}

